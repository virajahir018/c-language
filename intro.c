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


// formate Specifiers


// %d -> int
// %f -> float
// %lf -> double
// %c -> char
// %s -> string

// variable should be declared
// After declation of variable we can inisilised (assign value).
// one variable declared only one time -> redeclaration of variable not allowed

// #include<stdio.h>
// int main(){

//     // variable declaration

//     // datatype varible_name

//     int num;

//     num = 10;

//     printf("The value of num is : %d",num);

// }



// #include<stdio.h>
// int main(){

//     // variable declaration

//     // datatype varible_name

//     int num;

//     num = 10;

//     printf("The value of num is : %d\n",num);

//     // reinisilisation is allowed

//     num = 100;
//     printf("The value of num(reinisilisation) is : %d",num);

// }


// #include<stdio.h>
// int main(){

//     // variable declaration

//     // datatype varible_name

//     // we can declared and inisilisation of any variable in same line

//     int num = 10;

//     printf("The value of num is : %d\n",num);

//     // reinisilisation is allowed

//     num = 100;
//     printf("The value of num(reinisilisation) is : %d",num);

// }



// #include<stdio.h>
// int main(){

//     float price = 1000.5025;

//     printf("Price value is : %f",price);

// }


// #include<stdio.h>
// int main(){

//     float price = 1000.5025;

//     // printf("Price value is : %0.2f",price);
//     printf("Price value is : %0.3f",price);

// }


// #include<stdio.h>
// int main(){

//     double price = 1000.5025f;

//     // printf("Price value is : %0.2f",price);
//     printf("Price value is : %0.3lf",price);

// }



// #include<stdio.h>
// int main(){

//     char ch = 'a';

//     printf("character value is : %c",ch);

// }


// #include<stdio.h>
// int main(){

//     char *ch = "Pawan Maurya";

//     printf("character value is : %s",ch);

// }


#include<stdio.h>
int main(){

    char ch[] = "Pawan Maurya";

    printf("character value is : %s",ch);

}
