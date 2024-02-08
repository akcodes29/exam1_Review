#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//Control Flow
//iteration
//While loop
//For loop
//do...while loop

//Decision Making
//If statement
//If...else statement
//if...else if statement
//switch statement

//All for loops can be rewritten as while loops

//break statement - used to terminate the loop
//continue statement - used to skip the current iteration of the loop

    //Prints to the console
//puts() - prints a string to the console
//putchar() - prints a single character to the console
//printf() - prints formatted output to the console

    //Gets user input
//scanf() - reads input from the console (need to remember to use & for variables)
//getchar() - reads a single character from the console

int main(void) {
    //for loop example
    for (int counter = 1; counter <= 5; ++counter) {
        printf("Hello, World!\n");
    }

    //while loop example
    int i = 0; //initialize
    while(i < 100) { //condition
        i++; //increment
    }

    //do...while loop example
    int j = 0;
    do {
        printf("%d ", j);
    } while (++j <= 10);

    //if statement example
        int a = 0;
        if (a < 10) {
            printf("a is less than 10\n");
        }
    
    //if...else statement example
    int b = 0;
    if (b < 10) {
        printf("b is less than 10\n");
    } else {
        printf("b is greater than or equal to 10\n");
    }

    //if...else if... else statement example
    int c = 0;
    if (c < 10) {
        printf("c is less than 10\n");
    } else if (c == 10) {
        printf("c is equal to 10\n");
    } else {
        printf("c is greater than 10\n");
    }

    //switch statement example; USE when you have multiple options
    int d = 0;
    switch (d) {
        case 0:  //each case has a different action
            printf("d is 0\n");
            break; //break statement after each case
        case 1:
            printf("d is 1\n");
            break;
        default:
            printf("d is not 0 or 1\n");
    }

    //conditional operator example - ternary operator - closely resembles an if...else statement
    int grade = 0;
    printf("enter a grade: ");
    scanf("%d", &grade);
    printf("student %s the exam\n", (grade >= 60) ? "passed" : "failed");

    //print out a pattern
    //*
    //**
    //***
    //****
    for( int row = 1; row <= 4; row++) { //how many rows
        for(int col = 0; col < row; col++) {  //how many columns
            printf("%s", "*");
        }
        puts(""); //print a new line
    }

    

    return 0;

}