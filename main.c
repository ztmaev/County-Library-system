/* Project: County Library System
Author: Titus Njiiru
Date: Oct, 2021
Copiler: GNU GCC
Language: C99
License MIT

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Patron{
char name[100];
char email[50];
char password[30];
int is_Staff;
};

void addPatron(){

struct Patron patron;
printf("Enter name: ");
getchar();
gets(patron.name);
printf("Enter email: ");
gets(patron.email);
printf("Enter initial password: ");
gets(patron.email);
printf("Enter 1 if staff 0 otherwise");
scanf("%d", &patron.is_Staff);
printf("&s added\n", patron.name);
}
int Menu(){

int action;

printf("1.Add new Patron\n");
printf("2.List of all patrons\n");
printf("3.List of all books\n");
printf("4.Add Book. \n");
printf("Your action:");
scanf("%d", &action);
if(action < 1 || action > 4){
    printf("Invalid Action. Try Again");
}
return action;
}

void execute(int action){
switch(action){

case 1:
    addPatron();
    break;
case 2:
    printf("List of all patrons\n");
    break;
case 3:
    printf("List of all books\n");
    break;
case 4:
    printf("adding new books\n");
    break;

    default: printf("Invalid action.\n ");
}

}

int main(){
printf("\tCounty Library\n");
printf("Welcome Mr.Titus.\n");
printf("What would you like to do?\n");
execute(Menu());
}
