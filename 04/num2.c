/* Calculate Simple Interest 
   ( S.I = p * r * t / 100 )   */


#include<stdio.h>
#include<math.h>
int main(){
    float principle, rate, time, interest;

    printf("Enter Principle Amount: ");
    scanf("%f", &principle);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter time(in years): ");
    scanf("%f", &time);

    interest = (principle * rate * time) / 100;

    printf("Simple Interest = %.3f", interest);
    
}

/* Output ------------

Enter Principle Amount: 245
Enter Rate of Interest: 4.2
Enter time(in years): 4.5
Simple Interest = 46.305

*/