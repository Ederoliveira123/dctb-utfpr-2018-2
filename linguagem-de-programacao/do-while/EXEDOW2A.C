/* Exemplo 2 de uso da estrutura de repeti��o do..while

   Neste exemplo, caso o usu�rio digita uma letra, sal�rio continuar�
   valendo o seu valor de declara��o, ou seja, um valor desconhecido
   (lixo de mem�ria).

   E caso o lixo seja maior ou igual a zero, n�o � feita a leitura novamente.

   A mesma coisa para a leitura do aumento.

   Ent�o n�o adianta apenas por fflush em alguns casos.

   Experimente digitar uma letra.
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
	double salario, aumento;

	system("cls");
	printf("Calcula o novo salario\n");
	printf("======================\n");

	do{
	  printf("\nEntre com o salario: ");
	  fflush(stdin);
	  scanf("%lf",&salario);
	  if (salario <= 0){
		 printf("\a\nValor invalido de salario.");
		 printf("\nO salario deve ser maior que zero!\n");
	  }
	}while(salario <= 0);

	do{
	  printf("\nEntre com a porcentagem de aumento (0 a 1): ");
	  fflush(stdin);
	  scanf("%lf",&aumento);
	  if (aumento > 1 || aumento <= 0){
		 printf("\a\nValor invalido de aumento.");
         printf("\nO aumento deve ser menor ou igual a 1 e maior que zero!\n");
	  }
	}while(aumento > 1 || aumento <= 0);

	printf("\n\nO aumento foi de %.2lf ",salario*aumento);
	printf("e o novo salario sera %.2lf",salario + (salario*aumento));

	printf("\n\nDigite qualquer tecla para encerrar...");
	getch();
	return 0;
}
