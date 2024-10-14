#include<stdio.h>
///==============================================================================///
///----------------------------------------------------------------------------///
/*
//*****
//*****
//*****
//*****
//*****

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
///===========================================================================///
/*
//*
//**
//***
//****
//*****

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///===========================================================================///
/*
//*****
// ****
//  ***
//   **
//    *

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i<=j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///=============================================================================///
/*
//*****
//****
//***
//**
//*

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<=5;j++)
        {
            if(j<=(4-i))
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;

}
*/
///===========================================================================///
/*
//    *
//   **
//  ***
// ****
//*****

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");//if you tab before star,change the pattern and creat new pattern
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///======================================================================///
/*
//*****
//*   *
//*   *
//*   *
//*****

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 || i==4)
            {
                printf("*");
            }
            else if(j==0 || j==4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///===============================================================//
/*
// ****
// ****
// ****
// ****

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
///=======================================================================///
/*
//****
//*  *
//*  *
//****
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(i==1 || i==4)
            {
                printf("*");
            }
            else if(j==1 || j==4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///=======================================================================///
/*
// ****
//  ****
//   ****
//    ****
#include<stdio.h>
int main()
{
   int i,j;
   for(i=0;i<4;i++)
   {
       for(j=0;j<4;j++)
       {
          if(i<=j)
          {
              printf("*");
          }
          else
          {
              printf(" ");
          }
       }
       for(j=0;j<3;j++)
       {
           if(j<i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
       printf("\n");

   }
   return 0;
}
*/
///========================================================================///
/*
//           ****
//          ****
//         ****
//        ****

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j<(3-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }

        for(j=0;j<3;j++)
        {
          if(j<=(2-i))
          {
              printf("*");
          }
          else
          {
              printf(" ");
          }
        }

       printf("\n");
    }
    return 0;

}
*/
///=========================================================================///
/*
//              *
//             ***
//            *****
//           *******

#include<stdio.h>
int main()
{
   int i,j;
   for(i=0;i<4;i++)
   {
       for(j=0;j<4;j++)
       {
           if(j<(3-i))
           {
               printf(" ");
           }
           else
           {
               printf("*");
           }
       }
       for(j=0;j<4;j++)
       {
           if(j<i)
           {
               printf("*");
           }
           else
           {
               printf(" ");
           }
       }
       printf("\n");

   }
   return 0;

}
*/
///=====================================================================///
/*
//           *******
//            *****
//             ***
//              *


#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<=j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(j=0;j<4;j++)
        {
            if(j<=(3-i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///=======================================================================///
/*
//           *
//           **
//           ***
//           ****
//           ***
//           **
//           *

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++)//3-->2(4-->3) one decreas
    {
        for(j=0;j<4;j++)
        {
            if(j<=i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i=0;i<4;i++) //3-->4 one increas
    {
        for(j=0;j<4;j++)
        {
            if(j<=(3-i))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
 }
*/
///===========================================================================================///
/*
//
//              *
//             **
//            ***
//           ****
//            ***
//             **
//              *

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++) //3--->2 decreas by 1
    {
        for(j=0;j<4;j++)
        {
            if(j<(3-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
       printf("\n");
    }
    for(i=0;i<4;i++) //2---->3 incraese by 1
    {
        for(j=0;j<4;j++)
        {
            if(i<=j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;

}
*/
///==============================(IMP)===============================================================///
/*
//             *
//            ***
//           *****
//          *******
//           *****
//            ***
//             *
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<3;i++)//i=3--->i=2   decreas by 1
    {
        for(j=0;j<4;j++)
        {
            if(j<(3-i))
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        for(j=0;j<3;j++)
        {
            if(i<=j)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }

        }
        printf("\n");

    }
    for(i=0;i<4;i++)//3--->4 increas by 1
    {
        for(j=0;j<4;j++)
        {
            if(i<=j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for(j=0;j<3;j++)
        {
            if(j<=(2-i))
            {
                printf("*");

            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///===========================================================================///
/*
//*
//**
//* *
//*  *
//*****

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                if(j==0)
                {
                    printf("*");
                }
                else if(i==4)
                {
                    printf("*");
                }
                else if(i==j)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///===========================================================================================================///
/*
//    *
//   **
//  * *
// *  *
//*****

#include<stdio.h>
int main()
{
    int i,j;
    i=0;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                if(j==4)
                {
                    printf("*");// 1 space before *
                }
                else if(i+j==4)
                {
                    printf("*");// 1 space before *
                }
                else if(i==4)
                {
                    printf("*");// 1 space before *
                }
                else
                {
                    printf(" ");// 1 extra space   you can follow this you make new  star pattern
                }
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===============================================================================///
/*
//   *
//  * *
// *   *
//*     *
// *   *
//  * *
//   *

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        j=0;
        while(j<4)
        {
            if(j<(3-i))
            {
                printf(" ");
            }
            else
            {
                if(i+j==3)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            j++;
        }
        j=0;
        while(j<3)
        {
            if(i<j)
            {
                printf(" ");
            }
            else
            {
                if(i-1==j)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            j++;
        }
        printf("\n");

    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                if(i+1==j)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        j=0;
        while(j<3)
        {
            if(1-i==j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

            j++;

        }
        printf("\n");
    }
    return 0;
}
*/
///================(Another way)====================
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i+j!=3)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        for(j=0;j<3;j++)
        {
            if(i-1!=j)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            if(1+i!=j)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        for(j=0;j<3;j++)
        {
            if(1-i!=j)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");

    }
    return 0;
}
*/
///===================================================================================///
/*
//   *
//  * *
// *   *
//*******


#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        j=0;
        while(j<4)
        {
            if(j<(3-i))
            {
                printf(" ");
            }
            else
            {
                if(i+j==3)
                {
                    printf("*");
                }
                else if(i==3)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            j++;
        }
        j=0;
        while(j<3)
        {
            if(i-1==j)
            {
                printf("*");
            }
            else
            {
                if(i==3)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///=================================================================================///
///==========================CHARACTER PATTERN======================================///
/*
//A
//A B
//A B C
//A B C D
//A B C D E

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        k=65;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("\t%c",k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///===============================================================================///
/*
//A
//B C
//D E F
//G H I J
//K L M N O

#include<stdio.h>
int main()
{
    int i,j,k;
    k=65;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%c",k);
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///=================================================================================///
///=====================NUMERIC PATTERN============================================///
/*
//1
//1 2
//1 2 3
//1 2 3 4
//1 2 3 4 5
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++) //(i start from 1)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("\t%d",j);//difference
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///------------------another way(i start from 0)-----------------------------///
/*
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)//(i start from 0)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("\t%d",j+1);// Difference
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///------------------ANOTHER WAY(Using Third Veriable)------------------------///
/*
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d",k);
                k++;
            }
        }
        printf("\n");

    }
    return 0;
}
*/
///=================================================================================///
/*
//1
//2  3
//4  5  6
//7  8  9  10
//11 12 13 14 15

#include<stdio.h>
int main()
{
    int i,j,k;
    k=1;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("\t%d",k);
                k++;

            }
        }
        printf("\n");

    }
    return 0;
}
*/
///----------------------Another way---------------------------------------///
/*
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("\t%d",k+1);//differance(k+1)
                k++;
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///==============================(incomplete)=========================================////
/*
#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<4;i++)
    {
        k=1;
        for(j=0;j<4;j++)
        {
            if(j<(3-i))
            {
                printf("\t ");
            }
            else
            {
                printf("\t%d",k);
                k++;
            }
        }
        k=1;
       for(j=0;j<3;j++)
       {

           if(i<=j)
           {
               printf("\t ");
           }
           else
           {
               printf("\t%d",k);
               k++;
           }
       }
       printf("\n");
    }
    return 0;

}

///===============================================================================================///
/*
//11111
//11111
//11111
//11111
//11111

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("1");
        }

        printf("\n");
    }
    return 0;
}
*/
///================================================================================================///
/*
//11111
//00000
//11111
//00000
//11111

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 || i==2 || i==4)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///=====================================================================================================///
/*
//01010
//01010
//01010
//01010
//01010

#include<stdio.h>
int main()
{
    int i,j,k,z=0;
    for(i=0;i<5;i++)
    {
        k=1;
        for(j=0;j<5;j++)
        {
            if(j==1 || j==3)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///======================================================================================================///
/*
//11111
//10001
//10001
//10001
//11111

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==0 || i==4 )
            {
                printf("1");
            }
            else if(j==0 || j==4)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///===============================================================================================///
/*
//11111
//11111
//11011
//11111
//11111

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==2 && j==2)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///============================================================================================///
/*
//10101
//01010
//10101
//01010
//10101

#include<stdio.h>
int main()
{
    int i,j,a=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
               if(a%2==0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
                a++;

        }
        printf("\n");
    }
    return 0;
}
*/
///==========================================================================================///
/*
//11011
//11011
//00000
//11011
//11011

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==2 || j==2)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///====================================================================================================///
/*
//10001
//01010
//00100
//01010
//10001

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i==j || i+j==4)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
*/
///============================================================================================================///
/*
//1
//12
//123
//1234
//12345
//1234
//123
//12
//1

#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=0;i<5;i++)
    {
        k=1;
        j=0;
        while(j<5)
        {
            if(j<=i)
            {
                printf("%d",k);
                k++;
            }
            j++;
        }
        printf("\n");

    }
    for(i=0;i<4;i++)
    {
        k=1;
        j=0;
        while(j<4)
        {
            if(j<=(3-i))
            {
                printf("%d",k);
                k++;
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///==============================================================================================================///
/*
//11111
//22222
//33333
//44444
//55555

#include<stdio.h>
int main()
{
    int i,j;
    i=0;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            printf("%d",i+1);
            j++;
        }
        printf("\n");
        i++;

    }
    return 0;
}
*/
///===========================================================================================================///
/*
//12345
//12345
//12345
//12345
//12345

#include<stdio.h>
int main()
{
    int i,j,k;
    int r,c;
    printf("\n Enter rows and columns:-    ");
    scanf("%d%d",&r,&c);
    i=0;
    while(i<r)
    {
        j=0;
        while(j<c)
        {
            printf("%d",j+1);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///====================================================================================================///
/*
//12345
//23456
//34567
//45678
//56789

#include<stdio.h>
int main()
{
    int i,j,k=1;
    i=0;
    while(i<5)
    {
        k=i+1;
        j=0;
        while(j<5)
        {
            printf("%d",k);
             k++;
             j++;
        }
        printf("\n");
         i++;

    }
    return 0;
}
*/
///==========================================================================================================///
/*
//1  2  3  4  5
//6  7  8  9  10
//11 12 13 14 15
//16 17 18 19 20
//21 22 23 24 25

#include<stdio.h>
int main()
{
    int i,j,k=0;
    k=1;
    i=0;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            printf("\t%d",k);
            k++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///=========================================================================================================///
/*
//55555
//54444
//54333
//54322
//54321

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            if(i==0||j==0)
            {
                printf("%d",5);
            }
            else if(i==1 ||j==1)
            {
                printf("%d",4);
            }
            else if(i==2 || j==2)
            {
                printf("%d",3);
            }
            else if(i==3 || j==3)
            {
                printf("%d",2);
            }
            else
            {
                printf("%d",1);
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///======================================================================================///
/*
//12345
//23455
//34555
//45555
//55555

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        j=0;
        k=1+i;
        while(j<5)
        {
            if(j<=(4-i))
            {
                printf("%d",k);
                k++;
            }
            j++;
        }
        j=0;
        while(j<5)
        {
            if(j<i)
            {
                printf("5");
            }
           j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///==================================================================================================///
/*
//12345
//23451
//34521
//45321
//54321

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=1+i;
        while(j<5)
        {
            if(j<=(4-i))
            {
                printf("%d",k);
                k++;
            }
            j++;
        }
        j=0;
        k=i;
        while(j<5)
        {
            if(j<i)
            {
                printf("%d",k);
                k--;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///========================================================================================================///
/*
//12345
//21234
//32123
//43212
//54321

#include<stdio.h>
int main()
{
    int i,j,k,n;
    for(i=0;i<5;i++)
    {
        k=1+i;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%d",k);
                k--;
            }
        }
        k=k+1;
        j=0;
        while(j<5)
        {
            if(i<j)
            {
                printf("%d",k+1);
                k++;
            }
            else
            {
                printf("");
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}

///===========================================================================================================///
/*
//5 5 5 5 5 5 5 5 5
//5 4 4 4 4 4 4 4 5
//5 4 3 3 3 3 3 4 5
//5 4 3 2 2 2 3 4 5
//5 4 3 2 1 2 3 4 5
//5 4 3 2 2 2 3 4 5
//5 4 3 3 3 3 3 4 5
//5 4 4 4 4 4 4 4 5
//5 5 5 5 5 5 5 5 5

#include<stdio.h>
int main()
{
     int i,j;
     i=0;
     while(i<9)
     {
         j=0;
         while(j<9)
         {
             if(i==0 || j==0 || i==8 || j==8)
             {
                  printf("%d",5);
             }
             else if(i==1 || j==1 || i==7 || j==7)
             {
                 printf("%d",4);
             }
             else if(i==2 || j==2 || i==6 || j==6)
             {
                 printf("%d",3);
             }
             else if(i==3 || j==3 || i==5 || j==5)
             {
                 printf("%d",2);
             }
             else
             {
                 printf("%d",1);
             }
             j++;
         }
         printf("\n");
         i++;

     }
     return 0;
}
*/
///==============================================================================///
/*
//1
//22
//333
//4444
//55555

#include<stdio.h>
int main()
{
    int i,j;
    i=0;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            if(j<=i)
            {
                printf("%d",i+1);
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;

}
*/
///===============================================================///
/*
//11111
//2222
//333
//44
//5

#include<stdio.h>
int main()
{
    int i,j;
    i=0;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            if(j<=(4-i))
               {
                   printf("%d",i+1);
               }
               j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///============================================================================================///
/*
//55555
//4444
//333
//22
//1

#include<stdio.h>
int main()
{
    int i,j;
    i=0;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            if(j<=(4-i))
               {
                   printf("%d",5-i);
               }
               j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===================================================================================///
/*
//5
//44
//333
//2222
//11111

#include<stdio.h>
int main()
{
    int i,j;
    i=0;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            if(j<=i)
            {
               printf("%d",(5-i));
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///==============================================================================///
/*
//1
//12
//123
//1234
//12345

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        j=0;

        while(j<5)
        {
            if(j<=i)
            {
                printf("%d",j+1);

            }
            j++;

        }
        printf("\n");
    }
    return 0;
}
*/
///========================================================================///
/*
//12345
//1234
//123
//12
//1

#include<stdio.h>
int main()
{
    int i,j;
    i=0;
    while(i<5)
    {
        for(j=0;j<5;j++)
        {
            if (j<=(4-i))
            {
                printf("%d",j+1);
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///==========================================================================///
/*
//1
//21
//321
//4321
//54321

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=i+1;
        while(j<5)
        {

            if(j<=i)
            {
                printf("%d",k);
                k=k-1;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///==========================================================================================================///
/*
//54321
//4321
//321
//21
//1

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        j=0;
        k=5-i;
        while(j<5)
        {
            if(j<=(4-i))
            {
               printf("%d",k);
               k--;
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///========================================================================================================///
/*
//5
//54
//543
//5432
//54321

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=5;
        while(j<5)
        {
            if(j<=i)
            {
                printf("%d",k);
                k--;

            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///============================================================================///
/*
//54321
//5432
//543
//54
//5

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=5;
        while(j<5)
        {
            if(j<=(4-i))
            {
                printf("%d",k);
                k--;

            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///==============================================================================///
/*
//5
//45
//345
//2345
//12345

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=5-i;
        while(j<5)
        {
            if(j<=i)
            {
               printf("%d",k);
               k=k+1;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///=====================================================================//
/*
//12345
//2345
//345
//45
//5

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        k=i+1;
        for(j=0;j<5;j++)
        {
            if(j<=(4-i))
            {
              printf("%d",k);
              k++;
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===========================================================================///
/*
//1
//23
//345
//4567
//56789

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        j=0;
        k=i+1;
        while(j<5)
        {
            if(j<=i)
            {
                printf("%d",k);
                k++;
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///===========================================================================///
/*
//56789
//4567
//345
//23
//1

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=5-i;
        while(j<5)
        {
            if(j<=(4-i))
            {
                printf("%d",k);
                k++;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===============================================================================///
/*
//13579
//3579
//579
//79
//9

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=1;
        while(j<5)
        {
            if(j<=(4-i))
            {
                if(i+j==1)
                {
                    printf("3");
                }
                else if(i+j==2)
                {
                    printf("5");
                }
                else if(i+j==3)
                {
                    printf("7");
                }
                else if(i+j==4)
                {
                    printf("9");
                }
                else
                {
                    printf("1");
                }
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===============================================================================///
/*
//1
//10
//101
//1010
//10101

#include<stdio.h>
int main()
{
    int i,j;
    i=0;
    while(i<5)
    {
        for(j=0;j<5;j++)
        {
           if(j<=i)
          {
            if(j==1)
            {
                printf("%d",0);
            }
            else if(j==3)
            {
                printf("%d",0);
            }
            else
            {
                printf("%d",1);
            }
          }
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===========================================================================================///
/*
//1
//00
//111
//0000
//11111

#include<stdio.h>
int main()
{
    int i,j;
    i=0;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            if(j<=i)
            {
                if(i==1 || i==3)
                {
                    printf("%d",0);
                }
                else
                {
                    printf("%d",1);
                }
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///=============================================================================================///
/*
//1
//01
//010
//1010
//10101

#include<stdio.h>
int main()
{
    int i,j,a=1;
    i=0;
    while(i<5)
    {
        for(j=0;j<5;j++)
        {

            if(j<=i)
            {
                if(a%2==0)
                {
                    printf("%d",0);
                }
                else
                {
                    printf("%d",1);
                }
                a++;
            }
        }
       printf("\n");
       i++;
    }
    return 0;
}
*/
///=================================================================///
/*
//1
//11
//101
//1001
//11111

#include<stdio.h>
int main()
{
   int i,j;
   i=0;
   while(i<5)
   {
       j=0;
       while(j<5)
       {
           if(j<=i)
           {
               if(i==2 && j==1 || i==3 && j==1 || i==3 && j==2)
               {
                   printf("%d",0);
               }
               else
               {
                   printf("%d",1);
               }
           }
           j++;
       }
       printf("\n");
       i++;
   }
   return 0;
}
*/
///=======================================================================================///
/*
//1
//123
//12345
//1234567
//123456789
//

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<5)
    {
        j=0;
        k=1;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf("");
            }
            else
            {
                printf("%d",k);
                k++;
            }
            j++;
        }
        j=0;
        n=k;
        while(j<4)
        {
            if(j<i)
            {
              printf("%d",n);
              n++;

            }
            else
            {
               printf("");
            }

            j++;
        }
        printf("\n");
        i++;


    }
    return 0;
}

///======================================================================================================///
/*
//1
//24
//135
//2468
//13579

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<5)
    {
        k=1;
        n=2;
        for(j=0;j<5;j++)
        {

            if(j<=i)
            {
                if(i%2==0)
                {
                    printf("%d",k);
                    k=k+2;
                }
                else if(i%2!=0)
                {
                    printf("%d",n);
                    n=n+2;
                }
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///=================================================================================================///
/*
//1
//131
//13531
//1357531
//135797531

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=1;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf("");
            }
            else
            {
                printf("%d",k);
                k=k+2;
            }
            j++;
        }
        j=0;
        k=k-2;
        while(j<4)
        {
            if(j<i)
            {
                printf("%d",(k-2));
                k=k-2;
            }
            else
            {
                printf("");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

///==============================================================================================================///
/*
//1
//121
//12321
//1234321
//123454321

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<5)
    {
        j=0;
        k=1;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf("");
            }
            else
            {
                printf("%d",k);
                k++;
            }
            j++;
        }
        j=0;
        n=k;
        n=n-1;
        while(j<4)
        {
            if(j<i)
            {
                printf("%d",n-1);
                n=n-1;
            }
            j++;
        }
        printf("\n");
        i++;

    }
    return 0;

}
*/
///========================================================================================///
/*
//1
//2  3
//4  5  6
//7  8  9  10
//11 12 13 14 15

#include<stdio.h>
int main()
{
    int i,j,k;
    k=1;
    for(i=0;i<5;i++)
    {
        j=0;
        while(j<5)
        {
            if(j<=i)
            {
                printf("\t%d",k);
                k++;
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///=============================================================================///
/*
//1        1
//12      21
//123    321
//1234  4321
//1234554321

#include<stdio.h>
int main()
{
    int i,j,k,n=0;
    i=0;
    while(i<5)
    {
        j=0;
        k=1;
        while(j<5)
        {
            if(j<=i)
            {
                printf("%d",k);
                k++;
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        j=0;
        n=k;
        while(j<5)
        {
            if(j<(4-i))
            {
               printf(" ");
            }
            else
            {
                printf("%d",n-1);
                n=n-1;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

///==============================================================================================///
/*
//2
//242
//24642
//2468642
//2468108642

#include<stdio.h>
int main()
{
    int i,n,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=2;
        while(j<5)
        {

            if(j<(4-i))
            {
                printf("");
            }
            else
            {
                printf("%d",k);
                k=k+2;
            }
            j++;
        }
        j=0;
        n=k;
        n=n-2;
        while(j<4)
        {
            if(j<i)
            {
                printf("%d",n-2);
                n=n-2;
            }
            j++;

        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///=============================================================================///
/*
//12345
//1234
//123
//12
//1

#include<stdio.h>
int main()
{
    int i,j,n;
    i=0;
    while(i<5)
    {
        j=0;
        n=1;
        while(j<5)
        {
           if(j<=(4-i))
           {
               printf("%d",n);
               n++;

           }
           j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///==========================================================================================///
/*
//1
//12
//123
//1234
//12345
//1234
//123
//12
//1

#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=0;i<5;i++)
    {
        k=1;
        j=0;
        while(j<5)
        {
            if(j<=i)
            {
                printf("%d",k);
                k++;
            }
            j++;
        }
        printf("\n");

    }
    for(i=0;i<4;i++)
    {
        k=1;
        j=0;
        while(j<4)
        {
            if(j<=(3-i))
            {
                printf("%d",k);
                k++;
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///=================================================================================================///
/*
//1
//123
//12345
//1234567
//123456789
//1234567
//12345
//123
//1

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<5)
    {
        j=0;
        k=1;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf("");
            }
            else
            {
                printf("%d",k);
                k++;
            }
            j++;
        }
        n=k;
       for(j=0;j<4;j++)
       {
           if(j<i)
           {
               printf("%d",n);
               n++;
           }
       }
       printf("\n");
       i++;
    }
    i=0;
    while(i<4)
    {
        k=1;
        for(j=0;j<5;j++)
        {
            if(i<j)
            {
                printf("%d",k);
                k++;
            }
            else
            {
                printf("");
            }
        }
        j=0;
        n=k;
        while(j<3)
        {

            if(j<=(2-i))
            {
                printf("%d",n);
                n++;
            }
            else
            {
                printf(" ");
            }

            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

///===========================================================================================///
/*
//1
//121
//12321
//1234321
//123454321
//1234321
//12321
//121
//1

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<5)
    {
        k=1;
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf("");
            }
            else
            {
                printf("%d",k);
                k++;
            }
        }
        j=0;
        k=k-1;
        while(j<5)
        {
            if(j<i)
            {
                printf("%d",k-1);
                k=k-1;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    for(i=0;i<4;i++)
    {
        j=0;
        k=1;
        while(j<5)
        {
            if(i<j)
            {
                printf("%d",k);
                k++;
            }
            else
            {
                printf("");
            }
            j++;
        }
        j=0;
        k=k-1;
        while(j<3)
        {
            if(j<=(2-i))
            {
                printf("%d",k-1);
                k=k-1;
            }
//            else
//            {
//                printf(" "); // space is not compulsary for right side:
//            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///=======================================================================================================///
/*
//*
//*1*
//*121*
//*12321*
//*1234321*
//*123454321*
//*1234321*
//*12321*
//*121*
//*1*
//*

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<6)
    {
        k=1;
        for(j=0;j<6;j++)
        {
            if(j<(5-i))
            {
               printf("");
            }
            else if(i+j==5)
            {
                printf("*");
            }
            else
            {
                printf("%d",k);
                k++;
            }
        }
        j=0;
        n=k;
        n=n-1;
        while(j<5)
        {
            if(j==i-1)
            {
                printf("*");
            }
            else if(j<i)
            {
                printf("%d",n-1);
                n--;
            }
            else
            {
                printf("");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    for(i=0;i<5;i++)
    {
        j=0;
        k=1;
        while(j<5)
        {
            if(i<j)
            {
                printf("%d",k);
                k++;
            }
            else if(i==j)
            {
                printf("*");
            }
            else
            {
                printf("");
            }
            j++;
        }
        j=0;
        n=k;
        n=n-1;
        while(j<5)
        {
            if(j<=(2-i))
            {
                printf("%d",n-1);
                n=n-1;
            }
            else if(i+j==3)
            {
                printf("*");
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///==========================================================================///
/*
//A
//AB
//ABC
//ABCD
//ABCDE

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        k=65;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%c",k);
                k++;
            }

        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===============================================================================///
/*
//E
//ED
//EDC
//EDCB
//EDCBA

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        j=0;
        k=69;
        while(j<5)
        {
            if(j<=i)
            {
                printf("%c",k);
                k--;
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///============================================================================///
/*
//E
//DE
//CDE
//BCDE
//ABCDE

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=69-i;
        while(j<5)
        {
            if(j<=i)
            {
                printf("%c",k);
                k++;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///==================================================================================///
/*
//A
//BA
//CBA
//DCBA
//EDCBA

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        k=65+i;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%c",k);
                k--;
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///=====================================================================================================///
/*
//ABCDE
//ABCD
//ABC
//AB
//A

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=65;
        while(j<5)
        {
            if(j<=(4-i))
            {
                printf("%c",k);
                k++;
            }
           j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///======================================================================================================///
/*
// A B C D E
//  B C D E
//   C D E
//    D E
//     E
#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=65+i;
        while(j<5)
        {
            if(j<i)
            {
                printf(" ");

            }
            else
            {
                printf(" %c",k);
                k++;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===================================================================================================///
/*
// E D C B A
//  D C B A
//   C B A
//    B A
//     A

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=69-i;
        while(j<5)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf(" %c",k);
                k--;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///====================================================================================================///
/*
// E D C B A
//  E D C B
//   E D C
//    E D
//     E

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=69;
        while(j<5)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf(" %c",k);
                k--;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///==============================================================================================///
/*
//     A
//    B B
//   C C C
//  D D D D
// E E E E E

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        j=0;
        k=65+i;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf(" %c",k);
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///===================================================================================================///
/*
//     E
//    D D
//   C C C
//  B B B B
// A A A A A

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=69-i;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
               printf(" %c",k);
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===============================================================================================///
/*
// E E E E E
//  D D D D
//   C C C
//    B B
//     A

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=69-i;
        while(j<5)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf(" %c",k);
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///==============================================================================================///
/*
// A A A A A
//  B B B B
//   C C C
//    D D
//     E

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=65+i;
        while(j<5)
        {
            if(j<i)
            {
               printf(" ");
            }
            else
            {
                 printf(" %c",k);
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===========================================================================================================///
/*
//     A
//    B C
//   D E F
//  G H I J
// K L M N O
#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    k=65;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf(" %c",k);
                k++;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///=================================================================================================///
/*
//A
//ABC
//ABCDE
//ABCDEFG
//ABCDEFGHI

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<5)
    {
        j=0;
        k=65;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf("");
            }
            else
            {
                printf("%c",k);
                k++;
            }
            j++;
        }
        j=0;
        n=k;
        while(j<4)
        {
            if(j<i)
            {
                printf("%c",n);
                n++;
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///=================================================================================================///
/*
//ABCDEEDCBA
//ABCD**DCBA
//ABC****CBA
//AB******BA
//A********A

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<5)
    {
        j=0;
        k=65;
        while(j<5)
        {
            if(j<=(4-i))
            {
                printf("%c",k);
                k++;
            }
            else
             {
                 printf("*");
             }
             j++;
        }
        j=0;
        n=69-i;
        while(j<5)
        {
            if(i<=j)
            {
                printf("%c",n);
                n--;
            }
            else
            {
                printf("*");
            }
            j++;
        }
        printf("\n");
        i++;

    }
    return 0;
}
*/
///=======================(incomplete)=======================================================================///
/*
//A
//B C D
//E F G H I

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<3)
    {
        j=0;
        k=65+i;
        while(j<3)
        {
            if(j<(2-i))
            {
                printf(" ");
            }
            else
            {
                printf("%c",k);
                k++;
            }
            j++;
        }
        j=0;
        n=k;
        while(j<2)
        {
            if(j<i)
            {
                printf("%c",n);
                n++;
            }
            else
            {
               printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;

}
*/
///=======================================================================================================///
/*
//EDCB*
//EDC*A
//ED*BA
//E*CBA
//*DCBA

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<5)
    {
        j=0;
        k=69;
        while(j<5)
        {
            if(i+j==4)
            {
                printf("*");
            }
            else if(j<(4-i))
            {
               printf("%c",k);
               k--;
            }
            j++;
        }
        j=0;
        k=k-1;
        while(j<4)
        {
            if(j<i)
            {
                printf("%c",k);
                k--;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

///================================================================================================///
/*
//A
//ABA
//ABCBA
//ABCDCBA
//ABCDEDCBA

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<5)
    {
        j=0;
        k=65;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf(" ");

            }
            else
            {
                printf("%c",k);
                k++;
            }
            j++;
        }
        j=0;
        //n=k;
        k=k-1;
        while(j<4)
        {
            if(j<i)
            {
                printf("%c",k-1);
                k--;
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===========================================================================================///
/*
//A        A
//AB      BA
//ABC    CBA
//ABCD  DCBA
//ABCDEEDCBA

#include<stdio.h>
int main()
{
    int i,j,k,n;
    i=0;
    while(i<5)
    {
        k=65;
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                printf("%c",k);
                k++;
            }
            else
            {
                printf(" ");
            }
        }
        j=0;
        //k=k-1;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf("%c",k-1);
                k--;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///===============================================================================================///
/*
//     A
//    B A
//   C B A
//  D C B A
// E D C B A


#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=65;
        k=k+i;
        while(j<5)
        {
            if(j<(4-i))
            {
               printf(" ");
            }
            else
            {
                printf(" %c",k);//space issue
                k--;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///==========================================================================================///
/*
//     A
//    B C
//   D E F
//  G H I J
// K L M N O

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    k=65;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            if(j<(4-i))
            {
               printf(" ");
            }
            else
            {
                printf(" %c",k);//space issue
                k++;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///========================================================================================================///
/*
//     E
//    E D
//   E D C
//  E D C B
// E D C B A

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=69;
        while(j<5)
        {
            if(j<(4-i))
            {
               printf(" ");
            }
            else
            {
                printf(" %c",k);//space issue
                k--;
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///=========================================================================================================///
/*
//A
//BAB
//CBABC
//DCBABCD
//EDCBABCDE

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        k=65+i;
        for(j=0;j<5;j++)
        {
            if(j<(4-i))
            {
                printf("");
            }
            else
            {
                printf("%c",k);
                k--;
            }
        }
        j=0;
        k=k+2;
        while(j<4)
        {
            if(j<i)
            {
                printf("%c",k);
                k++;
            }
            j++;
        }
        printf("\n");
    }
    return 0;
}

///=======================================================================================================///
/*
//A B C D E
//F G H I
//J K L
//M N
//O

#include<stdio.h>
int main()
{
    int i,j,k=65;
    i=0;
    while(i<5)
    {
        j=0;
        while(j<5)
        {
            if(j<=(4-i))
            {
                printf("%c",k);
                k++;
            }
            j++;
        }
        printf("\n");
        i++;
    }
}
*/
///============================================================================================================///
/*
     A
    A B
   A B C
  A B C D
 A B C D E

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<5;i++)
    {
        j=0;
        k=65;
        while(j<5)
        {
            if(j<(4-i))
            {
                printf(" ");
            }
            else
            {
                printf(" %c",k);
                k++;

            }
            j++;
        }
        printf("\n");
    }
    return 0;
}
*/
///===========================================================================================================///
/*
//E E E E E E E E E
//E D D D D D D D E
//E D C C C C C D E
//E D C B B B C D E
//E D C B A B C D E
//E D C B B B C D E
//E D C C C C C D E
//E D D D D D D D E
//E E E E E E E E E

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<9)
    {
        j=0;
        while(j<9)
        {
            if(i==0||j==0 ||i==8 ||j==8)
            {
                printf("E");
            }
            else if(i==1||j==1||i==7 ||j==7)
            {
                printf("D");
            }
            else if(i==2||j==2||i==6 ||j==6)
            {
                printf("C");
            }
            else if(i==3||j==3||i==5 ||j==5)
            {
                printf("B");
            }
            else
            {
                printf("A");
            }

            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
///=======================================================================================================///
/*
//A       A
// B     B
//  C   C
//   D D
//    E

#include<stdio.h>
int main()
{
    int i,j,k;

    for(i=0;i<5;i++)
    {
        j=0;
        k=65+i;
        while(j<5)
        {
            if(i==j)
            {
                printf("%c",k);
                k++;

            }
            else
            {
                printf(" ");
            }
            j++;
        }
       j=0;
       k=k-1;
       while(j<4)
       {
           if(i+j==3)
           {
               printf("%c",k);
               //k--;
           }
           else
           {
               printf(" ");
           }
           j++;
       }
       printf("\n");
    }
    return 0;
}
*/
///============================================================================================================///
/*
//    A
//   B B
//  C   C
// D     D
//E       E

#include<stdio.h>
int main()
{
    int i,j,k;
    i=0;
    while(i<5)
    {
        j=0;
        k=65+i;
        while(j<5)
        {
            if(i+j==4)
            {
                printf("%c",k);
                k++;
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        j=0;
        k=k-1;
        while(j<5)
        {
            if(i-1==j)
            {
                printf("%c",k);
                k--;
            }
            else
            {
                printf(" ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            if(j<=i)
            {
                if(i==0&&j==0)
                {
                    printf("*");
                }
                else if(i==1||j==)
            }
        }
    }
}
*/













