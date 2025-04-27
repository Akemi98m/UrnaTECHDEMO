#include<stdio.h>
#include<stdlib.h>
/*
 ESSE SISTEMA FOI FEITO PARA UM PROJETO DO MUNICIPIO DE MARACANAU 
 VEFIFIQUE ESTE ARQUIVO PRA VER SE O SISTEMA NAO
 ESTA "FRAUDULADO" ANTES DE USA-LO.
 
 NOTA: ESTE CODIGO FOI FEITO PARA O WINDOWS, USE O "main.c" PARA USAR O CODIGO NO LINUX, SISTEMA PARA MACOS NAO DISPONIVEL
 
 27/04/2025 12:37 PM, Douglas Miguel
*/
int main(){
	
	FILE *file;
	char voto;
	
	file = fopen("votos.txt","a");
	
	if(file){
	printf("digite o numero do voto, exemplo: 1 = Joao 2 = andre\n");
	scanf("%c", &voto);
	printf("Voto feito com sucesso! Pressione qualquer tecla para reiniciar\n");
	system("pause");
	fputc(voto, file);
}
	fclose(file);
	system("cls");
	system("urna.exe");
	
	return 0;
}
