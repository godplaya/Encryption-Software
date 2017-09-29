#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void menu();
void escrever();
void encrypt();
void decrypt();

int nr;
//				'0'	  '1'  '2'  '3'  '4'  '5'  '6'  '7'  '8'  '9' '10'  '11' '12' '13' '14' '15' '16' '17' '18' '19' '20' '21' '22' '23' '24' '25'
char abc[26] = { '%', '*', '~', '+', '-', '$', '7', '0', '5', '^', '!', '#', '&', '9', '2', '1', '?', '/', 'ª', '6', '4', '3', '|', '@', '8', '=' };
//				'0'   '1'   '2'  '3'  '4'  '5'  '6'  '7'  '8'  '9' '10' '11' '12' '13' '14' '15' '16' '17' '18' '19' '20' '21' '22' '23' '24' '25'
char abcm[26] = { '<', '>', '_', '"', ';', '(', ')', '[', ']', '´', '`', 'ó', 'á', 'ú', '™', '©', '®', '¨', '¿', '¡', '§', '†', '‡', 'µ', '±', '¤'};
char resultado;
char codigo[30];

void menu(){

	int opcao = 0;
	printf("___________________\n");
	printf("|1....Escrever     |\n");
	printf("|2....Encriptar    |\n");
	printf("|3....Desencriptar |\n");
	printf("|4.... Sair        |\n");
	printf("|__________________|\n\n");
	scanf_s("%d", &opcao);
	switch (opcao){
	case 1:
		system("cls");
		escrever();
		return menu();
		break;
	case 2:
		system("cls");
		encrypt();
		return menu();
		break;
	case 3:
		system("cls");
		decrypt();
		return menu();
		break;
	case 4:
		exit(3);
	}
	fflush(stdin);
	getchar();


}

void escrever(){

	puts("Introduza o codigo:");
	scanf("%s", codigo);
	fflush(stdin);
	system("cls");

	return menu();

}

void encrypt(){

	int i;

	for (i = 0; i < 26 ; i++)
	{
		if (codigo[i] == 'A')
		{
			codigo[i] = abc[0];
		}

		if (codigo[i] == 'B'){

			codigo[i] = abc[1];

		}

		if (codigo[i] == 'C'){

			codigo[i] = abc[2];

		}

		if (codigo[i] == 'D'){

			codigo[i] = abc[3];

		}

		if (codigo[i] == 'E'){

			codigo[i] = abc[4];

		}

		if (codigo[i] == 'F'){

			codigo[i] = abc[5];

		}

		if (codigo[i] == 'G'){

			codigo[i] = abc[6];

		}

		if (codigo[i] == 'H'){

			codigo[i] = abc[7];

		}

		if (codigo[i] == 'I'){

			codigo[i] = abc[8];

		}

		if (codigo[i] == 'J'){

			codigo[i] = abc[9];

		}

		if (codigo[i] == 'K'){

			codigo[i] = abc[10];

		}

		if (codigo[i] == 'L'){

			codigo[i] = abc[11];

		}

		if (codigo[i] == 'M'){

			codigo[i] = abc[12];

		}

		if (codigo[i] == 'N'){

			codigo[i] = abc[13];

		}

		if (codigo[i] == 'O'){

			codigo[i] = abc[14];

		}

		if (codigo[i] == 'P'){

			codigo[i] = abc[15];

		}

		if (codigo[i] == 'Q'){

			codigo[i] = abc[16];

		}

		if (codigo[i] == 'R'){

			codigo[i] = abc[17];

		}

		if (codigo[i] == 'S'){

			codigo[i] = abc[18];

		}

		if (codigo[i] == 'T'){

			codigo[i] = abc[19];

		}

		if (codigo[i] == 'U'){

			codigo[i] = abc[20];

		}

		if (codigo[i] == 'V'){

			codigo[i] = abc[21];

		}

		if (codigo[i] == 'W'){

			codigo[i] = abc[22];

		}

		if (codigo[i] == 'X'){

			codigo[i] = abc[23];

		}

		if (codigo[i] == 'Y'){

			codigo[i] = abc[24];

		}

		if (codigo[i] == 'Z'){

			codigo[i] = abc[25];

		}

		if (codigo[i] == 'a'){

			codigo[i] = abcm[0];

		}

		if (codigo[i] == 'b'){

			codigo[i] = abcm[1];

		}

		if (codigo[i] == 'c'){

			codigo[i] = abcm[2];

		}

		if (codigo[i] == 'd'){

			codigo[i] = abcm[3];

		}

		if (codigo[i] == 'e'){

			codigo[i] = abcm[4];

		}

		if (codigo[i] == 'f'){

			codigo[i] = abcm[5];

		}

		if (codigo[i] == 'g'){

			codigo[i] = abcm[6];

		}

		if (codigo[i] == 'h'){

			codigo[i] = abcm[7];

		}

		if (codigo[i] == 'i'){

			codigo[i] = abcm[8];

		}

		if (codigo[i] == 'j'){

			codigo[i] = abcm[9];

		}

		if (codigo[i] == 'k'){

			codigo[i] = abcm[10];

		}

		if (codigo[i] == 'l'){

			codigo[i] = abcm[11];

		}

		if (codigo[i] == 'm'){

			codigo[i] = abcm[12];

		}

		if (codigo[i] == 'n'){

			codigo[i] = abcm[13];

		}

		if (codigo[i] == 'o'){

			codigo[i] = abcm[14];

		}

		if (codigo[i] == 'p'){

			codigo[i] = abcm[15];

		}

		if (codigo[i] == 'q'){

			codigo[i] = abcm[16];

		}

		if (codigo[i] == 'r'){

			codigo[i] = abcm[17];

		}

		if (codigo[i] == 's'){

			codigo[i] = abcm[18];

		}

		if (codigo[i] == 't'){

			codigo[i] = abcm[19];

		}

		if (codigo[i] == 'u'){

			codigo[i] = abcm[20];

		}

		if (codigo[i] == 'v'){

			codigo[i] = abcm[21];

		}

		if (codigo[i] == 'w'){

			codigo[i] = abcm[22];

		}

		if (codigo[i] == 'x'){

			codigo[i] = abcm[23];

		}

		if (codigo[i] == 'y'){

			codigo[i] = abcm[24];

		}

		if (codigo[i] == 'z'){

			codigo[i] = abcm[25];

		}

	}
	system("cls");

	printf("\n\n CODIGO ENCRIPTADO : %s\n\n\n", &codigo);

}

void decrypt(){

	int i;

	for (i = 0; i < 26; i++)
	{
		if (codigo[i] == abc[0])
		{
			codigo[i] = 'A';
		}

		if (codigo[i] == abc[1]){

			codigo[i] = 'B';

		}

		if (codigo[i] == abc[2]){

			codigo[i] = 'C';

		}

		if (codigo[i] == abc[3]){

			codigo[i] = 'D';

		}

		if (codigo[i] == abc[4]){

			codigo[i] = 'E';

		}

		if (codigo[i] == abc[5]){

			codigo[i] = 'F';

		}

		if (codigo[i] == abc[6]){

			codigo[i] = 'G';

		}

		if (codigo[i] == abc[7]){

			codigo[i] = 'H';

		}

		if (codigo[i] == abc[8]){

			codigo[i] = 'I';

		}

		if (codigo[i] == abc[9]){

			codigo[i] = 'J';

		}

		if (codigo[i] == abc[10]){

			codigo[i] = 'K';

		}

		if (codigo[i] == abc[11]){

			codigo[i] = 'L';

		}

		if (codigo[i] == abc[12]){

			codigo[i] = 'M';

		}

		if (codigo[i] == abc[13]){

			codigo[i] = 'N';

		}

		if (codigo[i] == abc[14]){

			codigo[i] = 'O';

		}

		if (codigo[i] == abc[15]){

			codigo[i] = 'P';

		}

		if (codigo[i] == abc[16]){

			codigo[i] = 'Q';

		}

		if (codigo[i] == abc[17]){

			codigo[i] = 'R';

		}

		if (codigo[i] == abc[18]){

			codigo[i] = 'S';

		}

		if (codigo[i] == abc[19]){

			codigo[i] = 'T';

		}

		if (codigo[i] == abc[20]){

			codigo[i] = 'U';

		}

		if (codigo[i] == abc[21]){

			codigo[i] = 'V';

		}

		if (codigo[i] == abc[22]){

			codigo[i] = 'W';

		}

		if (codigo[i] == abc[23]){

			codigo[i] = 'X';

		}

		if (codigo[i] == abc[24]){

			codigo[i] = 'Y';

		}

		if (codigo[i] == abc[25]){

			codigo[i] = 'Z';

		}

		if (codigo[i] == abcm[0]){

			codigo[i] = 'a';

		}

		if (codigo[i] == abcm[1]){

			codigo[i] = 'b';

		}

		if (codigo[i] == abcm[2]){

			codigo[i] = 'c';

		}

		if (codigo[i] == abcm[3]){

			codigo[i] = 'd';

		}

		if (codigo[i] == abcm[4]){

			codigo[i] = 'e';

		}

		if (codigo[i] == abcm[5]){

			codigo[i] = 'f';

		}

		if (codigo[i] == abcm[6]){

			codigo[i] = 'g';

		}

		if (codigo[i] == abcm[7]){

			codigo[i] = 'h';

		}

		if (codigo[i] == abcm[8]){

			codigo[i] = 'i';

		}

		if (codigo[i] == abcm[9]){

			codigo[i] = 'j';

		}

		if (codigo[i] == abcm[10]){

			codigo[i] = 'k';

		}

		if (codigo[i] == abcm[11]){

			codigo[i] = 'l';

		}

		if (codigo[i] == abcm[12]){

			codigo[i] = 'm';

		}

		if (codigo[i] == abcm[13]){

			codigo[i] = 'n';

		}

		if (codigo[i] == abcm[14]){

			codigo[i] = 'o';

		}

		if (codigo[i] == abcm[15]){

			codigo[i] = 'p';

		}

		if (codigo[i] == abcm[16]){

			codigo[i] = 'q';

		}

		if (codigo[i] == abcm[17]){

			codigo[i] = 'r';

		}

		if (codigo[i] == abcm[18]){

			codigo[i] = 's';

		}

		if (codigo[i] == abcm[19]){

			codigo[i] = 't';

		}

		if (codigo[i] == abcm[20]){

			codigo[i] = 'u';

		}

		if (codigo[i] == abcm[21]){

			codigo[i] = 'v';

		}

		if (codigo[i] == abcm[22]){

			codigo[i] = 'w';

		}

		if (codigo[i] == abcm[23]){

			codigo[i] = 'x';

		}

		if (codigo[i] == abcm[24]){

			codigo[i] = 'y';

		}

		if (codigo[i] == abcm[25]){

			codigo[i] = 'z';

		}

		

	}

	system("cls");

	printf("\n\n CODIGO DESENCRIPTADO : %s\n\n\n", &codigo);

}


int main(){

	menu();


}