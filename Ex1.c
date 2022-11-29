/*QUESTÃO 01:
Desenvolver uma função que determine o
número de ocorrências de um número inteiro x
em um vetor A.*/

#include <stdio.h>
#define TAM 5

int NumOcorrencias (int N);

void main ()
{
  int n, nr;

    printf("digite um valor: ");
    scanf("%d", &n);

   nr = NumOcorrencias (n);

    printf("Foram encontradas %d ocorrencias.", nr);


}

int NumOcorrencias ( int N)
{
  int vet [TAM] = {1, 2, 3, 4, 5};
  int verificacao=0, i;

    for (i=0; i<TAM; i++)
    {
      if (vet[i] == N)
      {
        verificacao++;
      }
    }

    return verificacao;
}
