#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>




int main(void){
	
	setlocale(LC_ALL,"Portuguese");
	char *p, nome[30]= "Vitor";
	int idade = 45;
	char **pp;
	int *i,**ii;
	
	p=&nome;
	pp=&p;
	i=&idade;
	ii=&i;
	
	printf("Variável Nome: %s \n \n  ",nome);
	printf("Usando ponteiro: %s \n \n",p);
	printf("Usando ponteiro de ponteiro: %s \n \n",*pp);
	
	printf("Variável idade: %d \n",idade);
	printf("Usando ponteiro: %d \n ",*i);
	printf("Usando ponteiro de Ponteiro: %d \n ",**ii);
	
	printf("2° caractere usando pp com []: %c \n\n ",(*pp)[1]);
	printf("3º caractere usando aritmetica de pp : %c \n \n ",*(*pp+2));
	
	printf("End. de nome: %p \n \n",&nome);
	printf("End. ponteiro de nome: %p \n \n ", &p);
	printf("End. ponteiro de ponteiro de nome: %p \n \n ",&pp);
	
	printf("End. de idade: %p \n \n",&idade);
	printf("End. de ponteiro de idade: %p \n \n", &i);
	printf("End. ponteiro de ponteiro de idade: %p \n \n",&ii);
	
	printf("End. onde ponteiro de nome aponta: %p \n\n",&*p);
	printf("End. ponteiro de ponteiro de nome aponta: %p \n\n",&*pp);
	
	
	

	
}
