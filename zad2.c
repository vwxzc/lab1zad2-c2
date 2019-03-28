/*
 ============================================================================
 Name        : zad2.c
 Author      : MS
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float suma(int a,int b)
	{
	float wynik=a+b;
	return wynik;
	}
float iloraz (int a,int b)
	{
	float x=a; //rzutowanie
	float y=b;
	float wynik=x/y;
	return wynik;
	}

//deklaracja wskażnika na funkcję
float (*funkcja) (int, int);


int main(void) {
	//przypisanie do wskaźnika adresu funkcji suma
	funkcja=&suma;
	//wywołanie funkcji przez wskażnik
	float wynik=(*funkcja)(4,8);
	printf("Wynik sumy= %f \n\n",wynik);
	//przypisanie do wskznika adresu funkcji iloraz
	funkcja=&iloraz;
	//wywołanie funkcji przez wskażnik
	 wynik=(*funkcja)(6,4);
	printf("Wynik ilorazu= %f",wynik);

	return EXIT_SUCCESS;
}
/*wskażnik na funkcję musi mieć postać taką jak funkcja tj. pobierać taką samą liczbę i takie same typy danych i zwracać taki sam typ danych  */

