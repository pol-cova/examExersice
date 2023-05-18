//
// Created by Paul Contreras on 18/05/23.
//

/*
 * Elabore un programa que lea un número entero desde el teclado
 * y realice la suma de los 10 siguientes números al leído,
 * sin incluirlo.  El número leído está en el rango de 1 a 20.
 * Muestre el resultado de la suma en pantalla.
 */

// Add standard libraries
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main_header();
void sum_of_numbers();
void main_app();


int main(){

    // Define the language of the app
    setlocale(LC_CTYPE, "SPANISH");

    // App
    main_app();

    system("pause");
    return 0;
}

void main_app(){
    // Call the header and the sum function
    main_header();
    sum_of_numbers();
}



void main_header(){
    // Print a simple header art
    printf("----------------------\n");
    printf("|      BIENVENIDO    |\n");
    printf("----------------------\n");
    printf("Este programa realiza la sumatoria de de los 10 números consecutivos al número ingresado!\n");
};

void sum_of_numbers(){
    // Define the variables
    int sum=0, user_number;
    // Ask user numbers
    printf("\nIngrese un número entero: ");
    scanf("%d", &user_number);

    // I use a for loop, for sum the next 10 numbers of the user number

    for (int i=user_number+1; i<=user_number+10; i++ ){
        sum = sum + i;
    }
    // Check if the number is in the range if its true print the sum, else do nothing

    if(user_number >=  1 && user_number <= 20){
        printf("La sumatoria total de los 10 números consecutivos a %d es: %d", user_number, sum);
    }

}