
// Description
// Create a function that displays a string of characters on the standard output.
// The address of the string's first character is in the pointer entered as
// parameter in the function.

void my_putstr(char* string){
    char* temp = string;

    while(*temp !='\0'){
    putchar(*temp);   
    temp++;
    };
}