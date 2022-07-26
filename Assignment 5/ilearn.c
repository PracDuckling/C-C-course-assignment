#include<stdio.h>

int main(){
    printf("*******START*********\n\n");
    
    int n;

    //1
    printf("\n\nQ1\n\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    for (int i = 0;i<n;i++) printf("MySirG ");

    //2
    printf("\n\nQ2\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) printf("%d ", i);

    //3
    printf("\n\nQ3\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = n;i>=1;i--) printf("%d ", i);

    //4
    printf("\n\nQ4\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) printf("%d ", i*2-1);

    //5
    printf("\n\nQ5\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    for (int i = n;i>=1;i--) printf("%d ", i*2-1);

    //6
    printf("\n\nQ6\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) printf("%d ", 2*i);

    //7
    printf("\n\nQ7\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=n;i>=1;i--) printf("%d ", 2*i);

    //8
    printf("\n\nQ8\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) printf("%d ", i*i);

    //9
    printf("\n\nQ9\n\n");
    printf("Enter the number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++) printf("%d ", i*i*i);


    //10
    printf("\n\nQ10\n\n");
    printf("Enter the number upto which table of 5 is to be printed: ");
    scanf("%d", &n);
    for(int i=1; i<=n;i++) printf("%d ", i*5);




    printf("\n\n*******END*********");
    return 0;
}
