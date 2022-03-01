/*
County library management system
By Mr Titus
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
    if(action< 1 || action > 4){
        printf("Invalid Action. Try again\n");
    }
    return action;
}
void execute_action(int action) {
switch(action){
    case 1:
    printf("adding a new patron\n");
    break;
    case 2:
    printf("list of all patrons\n");
    break;
    case 3:
    printf("list of all books\n");
    break;
    case 4:
    printf("adding a new book\n");
    break;
    default: printf("Invalid action.\n");
    }
}
int main()
{
    printf("COUNTY LIBRARY SYSTEM\n");
    printf("Welcome Mr. Titus\n");
    execute_action(menu());
    return 0;
}
