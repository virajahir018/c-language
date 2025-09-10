// # -> Preprocessor 
//include -> directive to include a file
// stdio.h -> standard input output header file

// int -> integer -> return type of main function
/*
muilti __LINE__
comment
*/
// main -> function -> starting point of program -> compiler code ko excute krta h

//  main function ko call os(operating system) krta h

// {} -> block of code -> function body

// ()-> prenthesis breket -> parameter list -> arguments -> input to function

#include<stdio.h>

int main(){

    printf("C Programming samjh aa raha hai!"); // -> statement -> instruction to be executed -> print hello world on the screen
    return 0;  // 0 -> exit status -> success
    
}


// printf()// call krna -> invoke krna 



// #include <stdio.h>

// int main() {
//     printf("Hello World!!");
//     printf("\nThis is my second \nC programming class!\n"); // extra \n in middle
//     printf("Thank You!");
//     return 0;
// }

// --------------------------------------------------------

// Data Types in C

// 1. Integer -> int -> e.g., 12, 34, -12, -45, 0 -> 4 bytes
// 2. Float -> float -> e.g., 15.36, -9845.36547 -> 4 bytes
// 3. Double -> double -> e.g., 23456.56576869768, 3455.2324545767 -> 8 bytes
// 4. Character -> char -> e.g., 'a', 'A' -> 1 byte
// 5. String -> In C, no direct string datatype
//              Use char array -> char ch[] = "pawan";
//              "pawan" -> 5 characters -> 5 bytes

// Extra variations:
// signed int   -> positive and negative both
// unsigned int -> only positive
// short int    -> 2 bytes
// long int     -> 8 bytes
// long long int-> 8 bytes
// long double  -> 10 bytes
// wchar_t      -> 2 bytes (wide character)
// void         -> no value (used as return type of functions)
