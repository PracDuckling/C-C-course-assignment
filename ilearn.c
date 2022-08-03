#include<stdio.h>
#include<math.h>

int main() {
    printf("*******START*********");

    int n, sum = 0;

    //1
    printf("\nQ1\n");

    printf("Enter the number: ");
    scanf("%d", &n);


    int i = 2, first = 1, second = 0;
    while (i<=n) {
        sum = first + second;
        second = first;
        first = sum;
        i++;
    }

    printf("%d", sum);

    //2
    printf("\nQ2\n");

    printf("Enter the number: ");
    scanf("%d", &n);

    printf("0 1 ");
    i = 2, first = 1, second = 0;
    while (i<=n) {
        sum = first + second;
        printf("%d ", sum);
        second = first;
        first = sum;
        i++;
    }

    //3
    printf("\nQ3\n");

    printf("Enter the number: ");
    scanf("%d", &n);

    first = 1, second = 0;
    while (sum<n) {
        sum = first + second;
        if (n == sum) break;
        second = first;
        first = sum;
    }
    if (n == sum) printf("The number is in fib seried");
    else printf("The number is not in fib seried");


    //4
    printf("\nQ4\n");

    printf("Enter the two numbers: ");
    scanf("%d%d", &first, &second);

    int hcf = 1;

    if (first < second) {
        int temp = first;
        first = second;
        second = first;
    }

    for (int i = 2; i<first;i++) {
        if (first%i==0 && second%i==0) {
            hcf = i;
        }
    }

    printf("The HCF is: %d", hcf);

    //5
    printf("\nQ5\n");

    printf("Enter the two numbers: ");
    scanf("%d%d", &first, &second);

    hcf = 1;

    if (first < second) {
        int temp = first;
        first = second;
        second = first;
    }

    for (int i = 2; i<first;i++) {
        if (first%i==0 && second%i==0) {
            hcf = i;
        }
    }

    hcf==1 ? printf("The numbers are coprime") : printf("The numbers are not coprime");

    //6
    printf("\nQ6\n");

    for (int i = 1; i<=100;i++) {
        int flg = 1;
        for (int j = 2; j < sqrt(i); j++) {
            if (i%j==0) {
                flg = 0;
                break;
            }
        }
        if (flg) printf("%d ", i);
    }

    //7
    printf("\nQ7\n");

    printf("Enter the two numbers: ");
    scanf("%d%d", &first, &second);

    for (int i = first; i<=second;i++) {
        int flg = 1;
        for (int j = 2; j < sqrt(i); j++) {
            if (i%j==0) {
                flg = 0;
                break;
            }
        }
        if (flg) printf("%d ", i);
    }

    //8
    printf("\nQ8\n");

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = n+1; 1; i++) {
        int flg = 1;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i%j==0) {
                flg = 0;
                break;
            }
        }
        if (flg) {
            printf("%d ", i);
            break;
        }

    }

    //9
    printf("\nQ9\n");

    printf("Enter the number: ");
    scanf("%d", &n);

    int x = n;
    sum = 0;
    while(x){
        int rem = x%10;
        sum += rem*rem*rem;
        x /= 10;
    }
    sum == n? printf("Armstrong Number"): printf("Not armstrong number");

    //10
    printf("\nQ10\n");

  for(int i=0;i<=1000;i++){
      int x = i;
      sum = 0;
      while (x) {
          int rem = x%10;
          sum += rem*rem*rem;
          x /= 10;
      }
      if(sum == i) printf("%d ", i);
  }



    printf("\n*******END*********");
    return 0;
}