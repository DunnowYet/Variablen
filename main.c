#include <stdio.h>

int main(){
	int ganzzahl_a;
	int ganzzahl_b = 2;
	
	char buchstabe_a;
	char buchstabe_b = 'b';

	float kommazahl_a = 4.25;
	float kommazahl_b = 2.5;

	printf("Identifier a ist gleich: %d\n", ganzzahl_a);
	printf("kommazahl_a ist gleich:%f\n",kommazahl_a);
	{	//Eröffnung einen Stackframe 
		//diese Stackframes können genutzt werden um Programmen Struktur zu verleihen
		//Variablen werden immer nur lokal, also innerhalb der Stackframes genutzt
		int a;
		float b=3.25;
		printf("float b = %f\n", b);
		{
			char a = 'a';
			{
				int x;
			}
		}
		printf("ganzzahl a = %d\n", ganzzahl_a);
	}
	ganzzahl_a = (int)(kommazahl_a); //Typkonversion zu int

	printf("ganzzahl_a ist gleich %d\n", ganzzahl_a);
}

