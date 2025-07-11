// What will be the output of this? Try writing and running:

// int a = 10.5;
// printf("%d", a);

#include<stdio.h>
int main(){
    int a = 10.5;
    printf("%d", a);
}

// Output ----> 10

/* Jab 10.5 jaise float number ko int variable mein rakhte ho,
toh C decimal part hata deta hai aur sirf whole number (10) rakhta hai. */