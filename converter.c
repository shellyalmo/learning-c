
#include <stdio.h>

int Kelvin;
float Celsius;
float Fahrenheit;

main()

{
	//Ask for temperature in Kelvin units 
	printf("Please enter a degree in Kelvin units\n"); 
	scanf("%d", &Kelvin); 
	//printf("Kelvin is %d", Kelvin); //just a sanity check
	//	Convert it to C
	Celsius = Kelvin-273.15;

	printf("Kelvin is now converted to Celsius %.2f\n", Celsius); //to check if my math is correct
	//	Convert C^° to F^°
	Fahrenheit = Celsius * 1.8 + 32;
	printf("Celsius is now converted to Fahrenheit  %.2f\n", Fahrenheit);
	//Print both (C^° and F^° ) results- done!

	//	Convert F^° back to C^°. Print both results
	Celsius = (Fahrenheit - 32)/1.8;
	printf("Fahrenheit is still %.2f\n", Fahrenheit);
	printf("Celsius is now %.2f\n", Celsius);


	}	
