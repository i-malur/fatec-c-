#include<Stdio.h>

main(){
    
    unsigned int idade;
    idade = 19 ;
    printf("Idade = %i", idade);
    
    if(idade >= 18){
        printf("\nMaior de idade");
        if(idade >= 21){
            printf("\nPode casar, já tem idade maior ou igual a 21 anos");
        }
    }
    else{
        printf("\nMenor de idade\n");
    }
    
    
    printf("\n----------------Mano Bank-----------------");
    int op;
    float saldo = 0;
    float deposito = 0;
    float saque = 0;
    
    do{
        
        printf("\n1- sacar\n");
        printf("2- depositar\n");
        printf("3- saldo\n");
        printf("4- sair\n");
        
        
        printf("Escolha opcao: ");
        scanf("%i", &op);
        
        switch(op){
            case 1:
                printf("Digite valor para saque: ");
                scanf("%f", &saque);
                if(saque> saldo){
                    printf("Saldo insuficiente para saque! ");
                } else{
                    saldo = saldo - saque;
                    printf("\nO saque de: %.2f", saque, " foi realizado!\n");
                    printf("\nO novo saldo da conta e de: %.2f", saldo);
                }
                break;
            case 2: 
                printf("Digite valor para deposito: ");
                scanf("%f", &deposito);
                saldo = deposito + saldo;
                printf("\nO deposito de: %.2f", deposito, " foi realizado!\n");
                printf("\nO novo saldo da conta e de: %.2f", saldo);
                break;
            case 3:
                printf("\nSaldo de atual conta: %.2f", saldo);
                break;
            case 4: printf("\nSair");
                break;
            default: printf("\nOpcao invalida!");
                break;
                        
        }
    } while(op !=4);
    
}
