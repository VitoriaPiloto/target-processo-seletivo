/*
Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:
a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;
b) Evite usar funções prontas, como, por exemplo, reverse;
*/

#include <stdio.h>
#include <string.h>
#define TAM 30

void main(){
    char palavra[TAM];
    printf("Insira uma palavra para inverter: ");
    fflush(stdin);
    gets(palavra);
    inverte(palavra);
}

void inverte(char s1[]){
	int i,j, tamanho;
	char s2[TAM];
	tamanho=strlen(s1);
	for (i=0,j=tamanho-1;j>=0;j--,i++){
        s2[i]=s1[j];
	}
	s2[i]='\0';
	printf("\n A palavra %s invertida eh: %s", s1, s2);
}
