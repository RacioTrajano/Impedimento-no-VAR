#include <stdio.h> 

int main () {



int impedidos_A[5];
int impedidos_B[5];
int num_jogadorA[10];
float dis_jogadorA[10];
float maior_A = 0;
float menor_A =0;
int num_jogadorB[10];
float dis_jogadorB[10];
float maior_B = 0;
float menor_B =0; 
// contador de impedidos_A
int k=0;
// contador de impedidos_B
int q=0;
int impedi_A=0;
int impedi_B=0;

//leitura das posições dos jogadores A e B
for (int i=0; i<10; i++){
  scanf("%d", &num_jogadorA[i]);
}

for (int i=0; i< 10; i++) {
   scanf ("%d", &num_jogadorB[i]);
}
//descobrir quais os maiores e menores valores de A
for (int i= 0; i<10; i++){
  scanf ("%f", &dis_jogadorA[i]);
  if (dis_jogadorA[i] > maior_A){
      maior_A = dis_jogadorA[i];
  }
  else if( dis_jogadorA[i]< menor_A){
      menor_A = dis_jogadorA[i];
  }
}
//descobrir quai os maiores e menores valores de B
for (int i= 0; i< 10; i++){
  scanf ("%f", &dis_jogadorB[i]);
  if (dis_jogadorB[i] > maior_B){
      maior_B = dis_jogadorB[i];
  }
  else if( dis_jogadorA[i]< menor_A){
      menor_B = dis_jogadorB[i];
  }
}
//zerar elementos de impedidos_A
for(int i=0; i<5; i++){
  impedidos_A[i] = 0;

//zerar elementos de impedidios_B
for(int i=0; i<5; i++){
  impedidos_B[i] = 0;
}

//descobrir se há valores em A impedidos
for(int i=0; i< 10; i++) {
  if (dis_jogadorA[i] > maior_B){
      impedidos_A[k]= i;
      k++;
  }
}
// descobrir se há valores em B impedidos
for(int i= 0; i<10; i++){
  if (dis_jogadorB[i] < menor_A){
    impedidos_B[q] = i;
    q++;
  }
}

// verificar se teve impedimento em A
for(int i=0; i< 5; i++){
  if (impedidos_A[i] != 0){
    impedi_A =1;
    break;
  }
}
// verificar se teve impedimento em B
for(int i=0; i< 5; i++){
  if (impedidos_B[i] != 0){
    impedi_B =1;
    break;
  }
}

// impressão da resposta
printf("A: ");
if (impedi_A == 0){
  printf("sem impedimentos");
}
else {for (int i= 0; i<5; i++){
    if (impedidos_A[i] != 0){
      printf("%d ", impedidos_A[i] + 2);
    }
}
}

printf("\n");
printf("B: ");
if (impedi_B == 0){
  printf("sem impedimentos");
}
else {for (int i= 0; i<5; i++){
    if (impedidos_B[i] != 0){
      printf("%d ", impedidos_B[i] + 2);
    }
}
}
  return 0;
}}