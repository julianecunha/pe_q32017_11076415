#include <stdio.h>
#include <stdlib.h>


struct ficha {
  
  char nome_aluno[100];
  int num_matricula;
  float nota_p1;
  float nota_p2;
  float nota_p3;
	float media;
  
} ficha;

int main() 
{
  FILE *lista_alunos;
  FILE *media_alunos;
  struct ficha aluno[50];
	int i;
  
  lista_alunos = fopen("lista_alunos.txt", "r");
  media_alunos = fopen("media_alunos.txt", "w+");
  
  for (i=0; i<50; i++) {
    fscanf(lista_alunos, "\%s \%d \%f \%f \%f", &aluno[i].nome_aluno, &aluno[i].num_matricula, &aluno[i].nota_p1, &aluno[i].nota_p2, &aluno[i].nota_p3);
    aluno[i].media = (aluno[i].nota_p1+aluno[i].nota_p2+aluno[i].nota_p3)/3;
    fprintf(media_alunos, "\%s \%04d \%f \%f \%f \%f\n", aluno[i].nome_aluno, aluno[i].num_matricula, aluno[i].nota_p1, aluno[i].nota_p2, aluno[i].nota_p3, aluno[i].media);
  }
  
  fclose(lista_alunos);
  fclose(media_alunos);
  
  return 0;
}