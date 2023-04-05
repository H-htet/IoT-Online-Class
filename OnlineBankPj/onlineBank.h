//
// Created by HTET HTET HTUN on 2023/04/01.
//

#ifndef ONLINEBANKPJ_ONLINEBANK_H
#define ONLINEBANKPJ_ONLINEBANK_H
#include "stdio.h"
#include "stdlib.h"

//function declaration
int check_input(char input[2]);
void rEgister();
void login();
int char_counting(char my_char[50]);

void main_menu(){
    //int option=0;
    char input[2];
    printf("Welcome to our OnlineBank-NCC!");
    printf("\nPress 1 to login!\nPress 2 to Register!\nPress 3 to Exit!>>:");
    scanf("%[^\n]", &input);
    int option = check_input(input);
    if(option == 49){
        //printf("login\n");
        login();
    }else if(option==50){
        //printf("Register");
        rEgister();
    }else if(option==51){
        //printf("Exit");
        printf("Good Bye!\n");
        exit(2);
    }else {
        main_menu();
    }
}

//ascii value 0=48, 9=57
int check_input(char input[2]){
    if(input[0]>=49 && input[0]<=57 && input[1]=='\0'){
        return input[0];
    }else{
        return -1;
    }
}

void login(){
    char l_email[50];
    printf("This is Online Bank Login!\n");
    printf("Enter your email to login!>>:");
    scanf("%[^\n]", &l_email[0]);//when give warning in here, input this [0]
}

void rEgister(){
    char re_email[50];
    printf("This is Online Bank Register!\n");
    printf("Enter your email to register>>:");
    scanf("%[^\n]",&re_email[0]);
}

void email_exist_checking(char email[50]){
    //in C, Sir will write with FileSystem and Structure and Array instead of DB to understand and can be handle well base foundation
    //in c++, Sir will write with DB
    int counter = char_counting(email);
    //next lecture will write data format
}

int char_counting(char my_char[50]){
    int count=0;
    for (register int a=0; a<50; a++) {//storage class
        if(my_char[a] == '\0'){
            break;
        }
        count++;
    }
    return count;
}



#endif //ONLINEBANKPJ_ONLINEBANK_H

