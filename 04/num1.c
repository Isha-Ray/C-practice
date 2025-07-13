// Calculate Area of Circle.
// Area = 3.14 × r x r 

#include<stdio.h>
#include<math.h>
int main(){
    float radius, area;
    printf("Enter the radius of Circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;

    printf("The area of circle is: %.2f", area);

}

/* Output --------------- 

Enter the radius of Circle: 9.14
The area of circle is: 262.31

*/