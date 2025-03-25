#include<stdio.h>

main() {
  /*
  int sum = 0;
  int num;

  printf("Digite um numero: \n");
  scanf("%i", &num);

  while(num>=0) {

    sum = sum + num;

    printf("Digite um numero: \n");
    scanf("%i", &num);
  }

  printf("Numero negtivo. Fim do programa! \n");
  printf("Somatoria dos numeros: %i", sum);
  */
  /*
  int sum = 0;
  int num = 0;

  do {

    sum = sum + num;
    printf("Digite um numero: \n");
    scanf("%i", &num);

  } while (num>=0);

  printf("Numero negtivo. Fim do programa! \n");
  printf("Somatoria dos numeros: %i", sum);
  */

/* Digitando a senha com até três tres chances de erro*/

  int password = 789;
  int test;
  int sum = 3;

  do {

    printf("\nDigite sua senha: \n");
    
    if (scanf("%i", &test) != 1 || password != test) {
        printf("\nSenha invalida! Por favor, digite senha correta!\n");
        printf("Use APENAS com numeros inteiros!\n");
        sum--; 
        while (getchar() != '\n'); 
    } 
        
  } while (sum>0 && test!=password);

  if(password != test) {
    printf("Sistema bloqueado");
  } else {
    printf("Sistema liberado");
  }
  
  return 0;
}
