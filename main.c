#include <stdio.h>

#include "addition.h"
#include "soustraction.h"
#include "multiplication.h"
#include "division.h"
#include "modulo.h"
#include "puissance.h"

void addition(int n1, int n2);
void soustraction(int n1, int n2);
void multiplication(int n1, int n2);
void division(int n1, int n2);
void modulo(int n1, int n2);
void puissance(int n1, int n2);

int main () {
	
	int choix = 0;
	int n1,n2;
	printf("1. Addition\n");
	printf("2. Soustraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Modulo\n");
	printf("6. Puissance\n");
	
	printf("Choisissez l'opération à effectuer : ");
	scanf("%d", &choix);
	
	printf("\nChoisissez 2 nombres : ");
	scanf("%d %d", &n1, &n2);
	
	switch (choix) {
		case 1:
			addition(n1,n2);
			break;
		case 2:
			soustraction(n1,n2);
			break;
		case 3:
			multiplication(n1,n2);
			break;
		case 4:
			division(n1,n2);
			break;
		case 5:
			modulo(n1,n2);
			break;
		case 6:
			puissance(n1,n2);
			break;
		default:
			printf("Erreur, try again\n");
			break;
		}
}
