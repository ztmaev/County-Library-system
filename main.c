/*
County library management system
By Maev
FEB 2022
MIT license
C89 compiler
*/

#include <stdio.h>
#include <stdlib.h>

int menu() {
    int action;
    printf("Select new action below\n");
    printf("1. Add new Patron\n");
    printf("2.View all Patrons\n");
    printf("3. View all books\n");
    printf("4. Add new Book\n");
    printf("Your action:\n");
    scanf("%d",&action);
    return action;
}
int main()
{
    printf("COUNTY LIBRARY SYSTEM\n");
    printf("Welcome Maev\n");
    printf("You selected action %d",menu());
    return 0;
}
