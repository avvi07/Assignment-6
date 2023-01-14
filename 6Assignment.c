// 1. Write a program to calculate sum of first N natural numbers

// #include<stdio.h>
// int main()
// {
//     int i,n,x;
//     printf("Enter the number: ");
//     scanf("%d",&n);

//     for ( i = 1; i <=n; i++)
//     {
//         x=i+x;
//     }
//     printf("%d\n",x);
// return 0;
// }

// 2. Write a program to calculate sum of first N even natural numbers

// #include<stdio.h>
// int main()
// {
//     int i,n,x;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     for ( i = 1; i <=x; i++)
//     {
//         n=2*i+n;
//     }
    
//     printf("Sum of first %d even natural numbers is %d\n",x,n);
//     return 0;
// }

// 3. Write a program to calculate sum of first N odd natural numbers

// #include<stdio.h>
// int main()
// {
//     int i,n,x;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     for ( i = 0; i < x; i++)
//     {
//         n=(2*i+1)+n;
//     }
    
//     printf("Sum of first %d odd natural numbers is %d\n",x,n);
//     return 0;
// }

// 4. Write a program to calculate sum of squares of first N natural numbers

// #include<stdio.h>
// int main()
// {
//     int i,n,x;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     for ( i = 1; i <= x; i++)
//     {
//         n=i*i+n;
//     }
//     printf("Sum of squares of first %d natural numbers is %d",x,n);
//     return 0;
// }

// 5. Write a program to calculate sum of cubes of first N natural numbers

// #include<stdio.h>
// int main()
// {
//     int i,n,x;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     for ( i = 1; i <= x; i++)
//     {
//         n=i*i*i+n;
//     }
//     printf("Sum of cubes of first %d natural numbers is %d",x,n);

//     return 0;
// }

// 6. Write a program to calculate factorial of a number

// #include<stdio.h>
// int main()
// {
//     int i,n = 1,x;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     for ( i = 1; i <= x; i++)
//     {
//         if (x==0 || x==1)
//         {
//             printf("factorial is 1");
//         }
//         else
//         {
//             n=i*n;
//         }
        
//     }
//     printf("Factorial of number %d is %d",x,n);
//     return 0;
// }

// 7. Write a program to count digits in a given number

// #include<stdio.h>
// int main()
// {
//     int i,x;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     for ( i = 0; x!=0 ; i++)
//     {
//         x=x/10;
//     }
//     printf("Digit is %d",i);
//     return 0;
// }

// 8. Write a program to check whether a given number is a Prime number or not

// #include<stdio.h>
// int main()
// {
//     int i,x,c;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     for ( i = 1; i <=x/2; i++)
//     {
//         if (x%i==0)
//         {
//             c++;
//         }
        
//     }
    
//     if (c==2)
//     {
//         printf("%d is not a prime number",x);
//     }
//     else
//     {
//         printf("%d is a prime number",x);
//     }
    
//     return 0;
// }

// 9. Write a program to calculate LCM of two numbers

// #include<stdio.h>
// int main()
// {
//     int a,b,i,lcm;
//     printf("Enter two number: ");
//     scanf("%d %d",&a,&b);

//     for ( i = 1; i <= a*b; i++)
//     {
//         if ((i%a==0) && (i%b==0))
//         {
//             break;
//         }
        
//     }
//     printf("%d",i);
    
//     return 0;
// }

// 10. Write a program to reverse a given number

// #include<stdio.h>
// int main()
// {
//     int i,x,n,reverse;
//     printf("Enter a number: ");
//     scanf("%d",&x);

//     for ( i = 0; x!=0; i++)
//     {
//         n=x%10;
//         reverse=reverse*10+n;
//         x/=10;
//     }
//     printf("%d",x%10);
//     return 0;
// }