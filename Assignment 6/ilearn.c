#include<stdio.h>
#include<math.h>

int main() {
    printf("*******START*********");

    int n, sum=0;

    //1
    printf("\nQ1\n");
    
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1;i<=n;i++) sum+=i;
    printf("The sum of first %d natural numbers is: %d", n,sum);

    //2
    printf("\n\nQ2\n");

    sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = 1;i<=n;i++) sum+=2*i;
    printf("The sum of first %d even natural numbers is: %d", n,sum);

    //3
    printf("\n\nQ3\n");

    printf("Enter the number: ");
    scanf("%d", &n);
    sum = 0;
    for (int i = 1;i<=n;i++) sum+=2*i-1;
    printf("The sum of first %d odd natural numbers is: %d", n,sum);

    //4
    printf("\n\nQ4\n");

    printf("Enter the number: ");
    scanf("%d", &n);
    sum = 0;
    for (int i = 1;i<=n;i++) sum+=pow(i,2);
    printf("The sum of squares of first %d natural numbers is: %d", n,sum);
    
    //5
    printf("\n\nQ5\n");


    printf("Enter the number: ");
    scanf("%d", &n);
    sum = 0;
    for (int i = 1;i<=n;i++) sum+=pow(i,3);
    printf("The sum cubes of first %d natural numbers is: %d", n,sum);
        
    //6
    printf("\n\nQ6\n");

    int fact=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1; i<=n;i++) fact*=i;
    printf("The factorial is: %d", fact);

    //7
    printf("\n\nQ7\n");
    
    printf("Enter the number: ");
    scanf("%d", &n);
    int count = 0;
    if(n!=0){
        while (n) {
            n /= 10;
            count++;
        }
    }else{
        count = 1;
    }
    
    printf("The number of digits is: %d", count);

    //8
    printf("\n\nQ8\n");

    printf("Enter the number: ");
    scanf("%d", &n);
    int flg = 0;
    for(int i=2;i<=sqrt(n);i++){
        if(!(n%i)){
            flg = 1;
            break;
        }
    }
    flg ? printf("%d is not prime", n) : printf("%d is a prime number", n);

    //9
    printf("\n\nQ9\n");

    int s, l;
    printf("Enter the numbers: ");
    scanf("%d%d", &s, &l);

    if (l < s) {
        int temp;
        temp = l;
        l = s;
        s = temp;
    }

    if (!(l%s)) printf("The LCM is: %d", l);
    else {
        int lcm = 2*l;
        while (lcm%s!=0) {
            lcm += l;
        }
        printf("The LCM is: %d", lcm);
    }

    //10
    printf("\n\nQ10\n");

    printf("Enter the number: ");
    scanf("%d", &n);
    sum = 0;

    while(n){
        int digit = n%10;
        sum = sum*10 + digit;
        n /= 10;
    }
    printf("The reverse is: %d", sum);

    printf("\n*******END*********");
    return 0;
}
