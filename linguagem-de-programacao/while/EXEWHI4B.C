/* Exemplo 4B de uso da estrutura de repeti��o while

   Nesta vers�o trocou-se o pula linha \n pelo Tabula��o \t.
   Desta forma os caracteres sairam em colunas.
*/

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
	int codigo = 0;

	system("cls");
	printf("Tabela ASCII\n");

	while(codigo < 255){
	    printf("\t%3d - %c",codigo,codigo);
		codigo++;
	}

	printf("\n\nDigite qualquer tecla para encerrrar...");
    getch();
    return 0;
}
