#include <iostream>

using namespace std;

// Função para contar anos bissextos
int contarAnosBissextos(int anoInicial, int anoFinal) {
    int contador = 0;
    for (int ano = anoInicial; ano < anoFinal; ano++) {
        if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
            contador++;
        }
    }
    return contador;
}

int main() {
    int anoNascimento, idadeAtual, totalDiasVividos, totalDiasRestantes;
    const int anoAtual = 2025;
    const double expectativaDeVida = 76.4; // IBGE 2023

    cout << "Digite o ano do seu nascimento: ";
    cin >> anoNascimento;

    idadeAtual = anoAtual - anoNascimento;
    
    // Contando anos bissextos
    int anosBissextosVividos = contarAnosBissextos(anoNascimento, anoAtual);
    int anosBissextosRestantes = contarAnosBissextos(anoAtual, anoNascimento + static_cast<int>(expectativaDeVida));

    // Cálculo de dias vividos e restantes
    totalDiasVividos = (idadeAtual * 365) + anosBissextosVividos;
    totalDiasRestantes = ((static_cast<int>(expectativaDeVida) - idadeAtual) * 365) + anosBissextosRestantes;

    cout << "\nVocê já viveu aproximadamente " << totalDiasVividos << " dias.\n";
    if (totalDiasRestantes > 0) {
        cout << "Se viver até " << expectativaDeVida << " anos, ainda tem cerca de " 
             << totalDiasRestantes << " dias pela frente.\n";
    } else {
        cout << "Você já ultrapassou a expectativa de vida média no Brasil!\n";
    }

    return 0;
}
