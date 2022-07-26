#include<stdio.h>
#include<ctype.h>

int main(){
    printf("*******START*********\n\n");
    

    int n,m,l;
    //1
    printf("\n\nQ1\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    n>0?printf("Positive"):printf("Non-positive");
    

    //2
    printf("\n\nQ2\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);

    n%5==0?printf("Divisible by 5"):printf("Not divisible by 5");


    //3
    printf("\n\nQ3\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);

    n&1?printf("Odd number"):printf("Even number");

    //4
    printf("\n\nQ4\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    n&1 ? printf("Odd number") : printf("Even number");
    
    //5
    printf("\n\nQ5\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    int i=0;
    while(n){
        n/=10;
        i++;
    }
    i==3?printf("The number is a 3 digit number"):printf("The number is not a 3 digit number");

    //6
    printf("\n\nQ6\n\n");
    printf("Enter the numbers: ");
    scanf("%d", &n);
    scanf("%d", &m);

    n-m==0 ? printf("both are equal nos: %d", n) : n-m>0 ? printf("%d is greater", n) : printf("%d is greater", m);
    
    //7
    printf("\n\nQ7\n\n");
    int a, b ,c;
    printf("Enter the coef of x^2, x, and const term: ");
    scanf("%d %d %d", &a, &b, &c);

    float D = b*b - (4*a*c);
    if(D==0)
        printf("\nThe roots are real and equal");
    else if(D>0)
        printf("\nThe Roots are Real and distinct");
    else
        printf("\nThe roots are imaginary");
    
    //8
    printf("\n\nQ8\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    if((n%100==0 && n%400 == 0) || (n%100!=0 && n%4==0))
        printf("\nThe year is Leap year");
    else
        printf("\nThe year is non-leap year");

    //9
    printf("\n\nQ9\n\n");
    printf("Enter the numbers: ");
    scanf("%d %d %d", &n, &l, &m);
    if(n==l && l==m){
        printf("\n%d is greatest", n);
    }else if(n-m>0){
        if(n-l>0)
            printf("Greatest No is: %d", n);
        else
            printf("Greatest No is: %d", l);
            
    }else{
        if(m-l>0)
            printf("Greatest No is: %d", m);
        else
            printf("Greatest No is: %d", l);
    }


    //10
    printf("\n\nQ10\n\n");
    float cp, sp, net;
    printf("Enter the CP and SP: ");
    scanf("%f", &cp);
    scanf("%f", &sp);
    net = sp-cp;
    net>=0 ? printf("Profit%% is: %f", 100*net/cp) : printf("Loss%% is: %f", -100*net/cp);

    //11
    printf("\n\nQ11\n\n");
    int arr[5];
    printf("Enter the marks of five subjects: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }
    int pass = 1;
    for(int i = 0; i<5; i++){
        if(arr[i] <33){
            printf("\nFailed");
            pass = 0;
            break;
        }
        
    }
    if(pass) printf("Passed");


    //12
    printf("\n\nQ12\n\n");
    char ch;
    printf("Enter the letter: ");
    scanf(" %c", &ch);
    if(ch>=65 && ch<=90) printf("\nLetter is Uppercase");
    else if(ch>=98 && ch<=122) printf("\nLetter is lowercase");

    //13
    printf("\n\nQ13\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    n%6==0?printf("Divisible by 3 and 2"):printf("Not divisible by 3 and 2");

    //14
    printf("\n\nQ14\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n%21 == 0) printf("Number divisible both 3 and 7");
    else if(n%7 == 0) printf("Number divisible 7");
    else if(n%3 == 0) printf("Number divisible by 3");
    else printf("Number neither divisible by 3 not by 7");

    //15
    printf("\n\nQ2\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);

    n == 0?printf("The number is 0"):n>0?printf("The number is positive"):printf("The number is negative");

    //16
    printf("\n\nQ16\n\n");
    printf("Enter the character: ");
    scanf(" %c", &ch);
    printf("\n");
    if(ch>='0'&&ch<='9'){
        printf("The character is a number");
    }
    else if (ch>='A'&&ch<='Z') {
        printf("The Character is a uppercase letter");
    }
    else if (ch>='a'&&ch<='z') {
        printf("The character is a lowercase letter");
    }else{
        printf("The character is a special character");
    }


    //17
    printf("\n\nQ17\n\n");
    printf("Enter the sides of the trangle: ");
    scanf("%d%d%d", &a, &b, &c);
    a+b>c&&b+c>a&&c+a>b?printf("\nThe triangle is valid"):printf("\nThe triangle is not valid");

    //18
    printf("\n\nQ18\n\n");
    printf("Enter the month number: ");
    scanf("%d", &n);

    if(
        n==1  ||
        n==3  ||
        n==5  ||
        n==7  ||
        n==8  ||
        n==10 ||
        n==12 
    )printf("The month has 31 days");
    else if(
        n==4  ||
        n==6  ||
        n==9  ||
        n==11 
        )printf("The month has 30 days");
    else if(n == 2) printf("The month has 28/29 days");
    else printf("Enter valid month");

    printf("\n\n*******END*********");
    return 0;
}
