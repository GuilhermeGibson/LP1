#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
struct locadora{
	char filme[200];
	int ano;
	char genero[200];
	char distrib[200];
};
int main(){
	FILE *loca;
//	loca= fopen("teste1.txt","a+");
	struct locadora locadora[1000];
	int i,j,n,r=1;
	char frase[100];
	int x;
	
	do{
		
		loca= fopen("teste1.txt","a+");
		if(loca==NULL){
		printf("Arquivo nao encontrado!\n");
		exit(0);
	}	
	printf("\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB\n");
	printf("\xBA                                            \xBA\n");
	printf("\xBA          REGISTRADOR DE FILMES             \xBA\n\xBA                                            \xBA\n");
	printf("\xBA O que deseja fazer:                        \xBA\n\xBA                                            \xBA \n");
	printf("\xBA Registrar novo filme?(1)                   \xBA\n\xBA                                            \xBA\n");
	printf("\xBA Ver filmes?(2)                             \xBA\n\xBA                                            \xBA\n");
	printf("\xBA Para Ver filmes no Bloco de notas          \xBA\n\xBA Edicao manual(3)                           \xBA\n");
	printf("\xBA                                            \xBA\n\xBA Sair(4)                                    \xBA\n");
	printf("\xBA                                            \xBA\n");
	printf("\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC\n");
	printf("\nOpcao: ");
	scanf("%d",&n);
	
	system("cls");
	switch(n){
		case 1:
		printf("Quantos registros queres fazer?\n");
		scanf("%d",&x);
	
		for(i=0,j=0;i<x;i++,j++){
			printf("\nDigite o nome do filme: ");
			fflush(stdin);
			gets(locadora[i].filme);
			printf("Agora o genero do filme: ");
			gets(locadora[i].genero);
			printf("Digite o ano de lancamento: ");
			fflush(stdin);
			scanf("%d",&locadora[i].ano);
			fflush(stdin);
			printf("Digite a distribuidora: ");
			scanf("%s",locadora[i].distrib);
			fflush(stdin);
		}
			
			for(i=0;i<x;i++){
			fprintf(loca,"\nFilme: %s\nGenero: %s\nAno: %d\nDistribuidora: %s\n\n",locadora[i].filme,locadora[i].genero,locadora[i].ano,locadora[i].distrib);
			Sleep(1000);
			system("cls");
		}
		fclose(loca);
		break;
	
		case 2:
			while(fgets(frase,100,loca)!= NULL ){
			printf("%s",frase);
			fflush(stdin);}
			Sleep(7000);
			system("cls");
			fclose(loca);
			break;	
		
		case 3:
			fclose(loca);
			system("teste1.txt");
		break;
		
		case 4:
			printf("\nVolte Sempre!! ");
			exit(0);
		}
		if((n!=1)&&(n!=2)&&(n!=3)){
	
			printf("\nValor invalido!!");
			exit(0);
		
} }while(r>0);
		
	printf("\nPronto!!");
	fclose(loca);
	system("PAUSE");
	return 0;
}
