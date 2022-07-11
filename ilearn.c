#include<stdio.h>

int main(){
    printf("*******START*********\n\n");

  
    //1
    printf("hello");

    printf("\n\n");

    //2
    printf("Hello\nStudents");

    printf("\n\n");

    //3
    printf("\"MySirG\"");
    
    printf("\n\n");

    //4
    int r;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    printf("Area of circle is %d having the radius %f", r, 3.14*r*r);

    printf("\n\n");

    //5
    int len = printf("This is a string");
    printf(": %d", len);
    
    printf("\n\n");

    //6
    printf("\"Hello, Amit Kumar\"");

    printf("\n\n");

    //7
    printf("\%d");

    printf("\n\n");
    
    //8
    printf("\\n");

    printf("\n\n");

    //9
    printf("\\\\");

    printf("\n\n");

    //10
    int d, m, y;
    printf("Enter date in format: DD/MM/YYYY: ");
    scanf("%d %d %d", &d, &m, &y);
    printf("Day - %d, Month - %d, Year - %d", d, m, y);

    printf("\n\n");
    //11
    int hr, mn;
    printf("HH:MM => ");
    scanf("%d %d", &hr, &mn);
    printf("\"%d:%d\" converted to \"%d Hour and %d Minute\"", hr,mn,hr,mn);

    printf("\n\n");
    //12
    printf("The answer is: 7");

    
    printf("\n\n*******END*********");
    return 0;
}