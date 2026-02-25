// LS Strings notes
#include <stdio.h>
#include <string.h>
int main(){
    char subject[] = "Computer Science Principles";
    char book[50];
    char title[] = "Ms. LaRose";



    printf("%s\n", subject);


    printf("Write the title of a book: ");
    //scanf("%s", &book);
    fgets(book, sizeof(book), stdin);

    printf("\nThe book is %s\n", book);
    //concatnation  in C
    char name[] = "Vienna";
    char last[] = "LaRose";
    strcat(name," ");
    strcat(name, last);
    char full_name[50];
    printf("%s", name);
   


    //Length of string
    printf("%lu", strlen(name));




    return 0;
    // we can change a string but we would have to do it one character/letter at a time
}