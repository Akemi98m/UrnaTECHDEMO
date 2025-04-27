#include<stdio.h>
#include<stdlib.h>
/*
 ESSE SISTEMA FOI FEITO PARA UM PROJETO DO MUNICIPIO DE MARACANAU 
 VEFIFIQUE ESTE ARQUIVO PRA VER SE O SISTEMA NAO
 ESTA "FRAUDULADO" ANTES DE USA-LO.
 
 NOTA: ESTE CODIGO EM ESPECIFICO NAO FUNCIONA NO WINDOWS, USE O "main_windows.c" SE QUISER UMA URNA FUNCIONAL NO WINDOWS 10 OU 11
 
 25/04/2025 1:32 PM, Douglas Miguel
*/
int main(){
	
	FILE *file;
	char voto;
	
	file = fopen("/root/sonic/votos.txt","a");
	
	if(file){
	printf("digite o numero do voto.");
	scanf("%c", &voto);
	printf("Voto feito com sucesso! Reiniciando Sistema\n");
	system("sleep 3");	
	fputc(voto, file);
}
	fclose(file);
	system("clear");
	system("./urna");
	
	return 0;
}
