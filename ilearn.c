#include<stdio.h>

int main(){
    printf("*******START*********\n\n");

    int n,m, temp;
    //1
    printf("Q1\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);

    printf("unit digit: %d", n%10);

    
    //2
    printf("\n\nQ2\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);

    
    printf("No: %d", n/10);


    //3
    printf("\n\nQ3\n\n");
    printf("Enter the numbers: ");
    scanf("%d %d", &n, &m);

    printf("Entered Numbers n = %d and m = %d", n,m);

    temp = n;
    n = m;
    m = temp;

    printf("\nNumbers after swapping n = %d and m = %d", n,m);

    //4
    printf("\n\nQ4\n\n");
    printf("Enter the numbers: ");
    scanf("%d %d", &n, &m);
    // swap
    n = n + m;
    m = n - m;
    n = n - m;
    printf("\nNumbers after swapping n = %d and m = %d", n, m);

    //5
    printf("\n\nQ5\n\n");
    printf("Enter the 3 digit number: ");
    scanf("%d", &n);

    temp = n;
    m=0; //m is sum of digits
    while(temp>0){
        m += temp%10;
        temp = temp/10;
    }
    printf("The sum of digits of %d is: %d", n, m);

    //6
    printf("\n\nQ6\n\n");
    char c;
    printf("Enter the character: ");
    scanf(" %c", &c);
    printf("The ASCII is : %d", c);

    //7
    printf("\n\nQ7\n\n");


    //8
    printf("\n\nQ8\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    n&1?printf("Odd Number"):printf("Even Number");


    //9
    printf("\n\nQ9\n\n");
    double d;
    float f;
    printf("Size of variable n(type int): %d", sizeof(n));
    printf("\nSize of variable c(type char): %d", sizeof(c));
    printf("\nSize of variable f(type float): %d", sizeof(f));
    printf("\nSize of variable d(type double): %d", sizeof(d));

    //10
    printf("\n\nQ10\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("%d",n/10 * 10);


    //11
    printf("\n\nQ11\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\nEnter the addition digit: ");
    scanf("%d", &m);
    printf("\nThe new number  is: %d", n*10 + m);

    //12
    printf("\n\nQ12\n\n");
    printf("Enter the amount in INR: ");
    scanf("%lf", &d);
    printf("The amount in USD is: %lf", d/76.23);

    //13
    printf("\n\nQ13\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    int h,t,u;
    //unit tens hundreds
    //rotate 1 to right we get uht
    u = n%10;
    n/=10;
    t = n%10;
    n /= 10;
    h = n;
    //new number: 
    n = u*100 + h*10 + t;
    printf("The new number is: %d", n);


    printf("\n\n*******END*********");
    return 0;
}