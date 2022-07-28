
/*
 Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um n�mero, ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.

IMPORTANTE:
Esse n�mero pode ser informado atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definido no c�digo;
*/

#include <stdio.h>

void main()
{
   int valor,i, fibo;
   printf("Digite o valor buscado na sequencia de Fibonacci: ");
   scanf("%d", &valor);
   printf("\nA sequ�ncia de Fibonacci e: \n");
   for(i=0; i<=valor; i++){
       fibo = fibonacci(i);
       printf("%d ", fibo);
       if (valor == fibo){
            printf("\nO valor %d esta presente na sequencia!!", fibo);
            break;
       }
   }
}

int fibonacci(int num)
{
   if(num < 2){
       return num;
   } else {
        return fibonacci(num-1) + fibonacci(num-2);
   }
}
