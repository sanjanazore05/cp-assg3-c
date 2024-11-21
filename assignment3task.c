/*
  Roll No.: 49
  Student Name: Ansari Mohammed Usman
  Program Title: WAP to find area of circle.

  Task Given By:
    - Roll No. of Assignee: 44
    - Assignee Name: Ayaan Jilani
*/


#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);

    return 0;
}

/*OUTPUT
Enter the radius of the circle: 6
The area of the circle with radius 6.00 is: 113.10

Process returned 0 (0x0)   execution time : 1.959 s
Press any key to continue.*/
