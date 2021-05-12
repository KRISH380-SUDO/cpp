
// // PR_2
// #include<stdio.h>
// const double PI = 3.14;

// void AreaOfCircle(double n){
//     printf("Area of Circle = %lf",PI*(n*n));
//     return;
// }

// void Km(double  n){
//     
// }
// void CtoF(double n){

// }

// int main(){
//     double n;
//     printf("enter the val = ");
//     scanf("%lf",&n);

//     // AreaOfCircle(n);
//     // Km(n);
//     CtoF(n);




//     return 0;
// }


// #include <stdio.h>
// #include <conio.h>
// int main()
// {
// int x;
// int y;
// scanf("%d%d",x,y);
// gotoxy(x, y);
// printf("KRISH");
// getch();
// return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//   int a, b, c, d;
//   double r1, r2;

//   printf("Enter a, b and c where a*x*x + b*x + c = 0\n");
//   scanf("%d%d%d", &a, &b, &c);

//   d = b*b - 4*a*c;

//   if (d < 0) { 
//     printf("First root = %.2lf + i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
//     printf("Second root = %.2lf - i%.2lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
//   }
//   else {
//     r1 = (-b + sqrt(d))/(2*a);
//     r2 = (-b - sqrt(d))/(2*a);

//     printf("First root = %.2lf\n", r1);
//     printf("Second root = %.2lf\n", r2);
//   }

//   return 0;
// }


#include<stdio.h>  
int main(){    
    double n;    
    printf("Celsiu = ");
     canf("%lf",&n);
    printf("\nFahrenheit = %lf",(n-32)/1.8);
    return 0;
    }   