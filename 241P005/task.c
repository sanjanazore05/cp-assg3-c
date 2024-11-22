/*
  Roll No.: 05
  Student Name: Mishra Priyanshu Prabhu
  Program Title: WAP to find if the input number is prime or not.

  Task Given By: 
    - Roll No. of Assignee: 06
    - Assignee Name: Prajapati Nitesh Anil
*/


#include <stdio.h>

int main() {
    
    int n;
    printf("\nPrime number detector ");
    printf("\n\nEnter a number : ");
    scanf("%d",&n);
    
    if(n%2==0){
        printf("\nThe number %d is even",n);
    }
    else{
        printf("\nThe number %d is odd",n);
    }
   

    return 0;
}

/*
Output : 

Prime number detector 

Enter a number : 7

The number 7 is odd

*/
