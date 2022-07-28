/*
 Dado o valor de faturamento mensal de uma distribuidora, detalhado por estado:

SP – R$67.836,43
RJ – R$36.678,66
MG – R$29.229,88
ES – R$27.165,48
Outros – R$19.849,53

Escreva um programa na linguagem que desejar onde calcule o percentual
de representação que cada estado teve dentro do valor total mensal da distribuidora.
*/
#include <stdio.h>
#include <string.h>
#define NUM_ESTADOS 5

//Definição de tipos
typedef struct {
	char estado[3];
	float faturamento;
} TEmpresa;

void main(){
    //Declaração de variáveis
    TEmpresa filial[NUM_ESTADOS];

    //Preenchendo o vetor com os dados das empresas
    preenche(filial,NUM_ESTADOS);

    //Calcular percentual
    calcula(filial,NUM_ESTADOS);
}

void preenche(TEmpresa f[]){
    //1º filial
	strcpy (f[0].estado, "SP");
	f[0].faturamento = 67836.43;

	//2º filial
	strcpy (f[1].estado, "RJ");
	f[1].faturamento = 36678.66;

	//3º filial
	strcpy (f[2].estado, "MG");
	f[2].faturamento = 29229.88;

	//4º filial
	strcpy (f[3].estado, "ES");
	f[3].faturamento = 27165.48;

	//5° filial
	strcpy (f[4].estado, "OT");
	f[4].faturamento = 19849.53;
}

void calcula(TEmpresa f[], int quant){
    int i;
    float soma= 0.0, porcentagem;
    for (i=0;i<quant;i++){
        soma = soma + f[i].faturamento;
    }
    for (i=0;i<quant;i++){
        porcentagem = (100 * f[i].faturamento)/soma;
        printf("A porcentagem da filial %s foi: %.2f porcento\n", f[i].estado, porcentagem);
    }
}

