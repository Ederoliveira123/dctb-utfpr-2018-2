/* Exemplo de lixo em mem�ria na declara��o de vari�veis
   Toda vari�vel que � declarada, ela come�a tendo um valor desconhecido.
   S� perde este valor quando outro � armazenado dentro dela.

   N�o � um erro, e sim uma caracter�stica da linguagem C.              */

#include<stdio.h>

int main(){
   int n1, n2 = 0;
   printf("\nValor de n1 : %d",n1);
   printf("\nValor de n2 : %d",n2);
   return 0;
}
