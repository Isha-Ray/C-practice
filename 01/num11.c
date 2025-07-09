// Write a program and remove #include<stdio.h> to see what happens.


// #include<stdio.h>
int main(){
    printf("Hello world!");
    return 0;
}


// Output ---------------------------

// num11.c: In function 'main':
// num11.c:6:5: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
//      printf("Hello world!");
//      ^~~~~~
// num11.c:6:5: warning: incompatible implicit declaration of built-in function 'printf'
// num11.c:6:5: note: include '<stdio.h>' or provide a declaration of 'printf'
// Hello world!

