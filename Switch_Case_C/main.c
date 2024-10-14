
///---- // WAP to perform the add,sub, multi, div according to  the users choice.--------------////
/*
#include<stdio.h>
int main()
{
    int opt;
    float x,y,ans;

    printf("\n *****Menu***** ");
    printf("\n 1.add \n 2.sub \n 3.multi \n 4.div ");
    printf("\n Enter Option :");
    scanf("%d",&opt);

    printf("\n Enter Any Two Nos :-");
    scanf("%f%f",&x,&y);

    switch(opt)
    {
    case 1:
        ans=x+y;
        break;
    case 2:
        ans=x-y;
        break;
    case 3:
        ans=x*y;
        break;
    case 4:
        ans=x/y;
        break;
    default:
        printf("\n Incorrect option!!!!!!");
        return;
    }
    printf(" Ans is %f",ans);
    return 0;
}
*/
///===================================================================///
///------ using the switch case within decision statements------------///
/*
#include<stdio.h>
int main()
{
    int opt;
    float x,y,ans;
    printf("\n ****WELCOME****");
    printf("\n 1.add \n 2.sub \n 3.mult \n 4.div");
    printf("\n---Choose the Option---");
    scanf("%d",&opt);

    if(opt>=1&&opt<=4)
    {
        printf("\n Enter Any Two Nos :-");
        scanf("%f%f",&x,&y);

        switch(opt)
        {
        case 1:
            ans=x+y;
            break;
        case 2:
            ans=x-y;
            break;
        case 3:
            ans=x*y;
            break;
        case 4:
            ans=x/y;
            break ;

        }
        printf("\n Ans is %f",ans);
    }
    else
    {
        printf("\n Incorrect option!!!!!");
    }
    return 0;
}
*/
///============================================================///
///---------using the switch case within loop------------------///
/*
#include<stdio.h>
int main()
{
    int opt,i=0;
    float x,y,ans;

    while(i<3)
    {
        printf("\n --------- Menu -----------\n");
        printf("\n 1.Add \n 2.sub \n 3.multi \n 4.div");
        printf("\n enter your option: ");
        scanf("%d",&opt);


        printf("\n Enter any Two Nos");
        scanf("%f%f",&x,&y);

        switch(opt)
        {
        case 1:
            ans=x+y;
            break;
        case 2:
            ans=x-y;
            break;
        case 3:
            ans=x*y;
            break;
        case 4:
            ans=(float)x/y;
            break;
        default:
            printf("\n incorrect option!!!!");
            return ;
        }
        printf("\n Ans is :%f",ans);
        i++;
    }
    return 0;
}
*/
///================================================================================///
///---- using the switch case within infinite loop (using break to stop)----------///
/*
#include<stdio.h>
int main()
{
    int opt,i;
    float x,y,ans=0;
    i=0;
    while(1)
    {
        printf("\n ***Menu***");
        printf("\n 1.Add \n 2.sub \n 3.Multi \n 4.div \n 5.stop;");
        printf("\n choose the option :-");
        scanf("%d",&opt);
        if(opt==5)
        {
            break;
        }

        printf("\n Enter any Two No :-");
        scanf("%f%f",&x,&y);

        switch (opt)
        {
        case 1:
            ans=x+y;
            break;
        case 2:
            ans=x-y;
            break;
        case 3:
            ans=x*y;
            break;
        case 4:
            ans=x/y;
            break;
        default:
            printf("\n Incorrect option!!!!");

        }
        printf("\n ans is %f",ans);
        i++;
    }
    return 0;
}
*/
///=======================================================================///
///-// using the switch case within infinite loop (using exit() to stop)--///
/*
#include<stdio.h>
int main()
{
    int opt,i=0;
    float x,y,ans=0;
    while(1)
    {
        printf("\n ***Menu***");
        printf("\n 1.Add \n 2.sub \n 3.Multi \n 4.div \n 5.stop;");
        printf("\n choose the option :-");
        scanf("%d",&opt);

        printf("\n Enter Any No :-");
        scanf("%f%f",&x,&y);

        switch (opt)
        {
        case 1:
            ans=x+y;
            break;
        case 2:
            ans=x-y;
            break;
        case 3:
            ans=x*y;
            break;
        case 4:
            ans=x/y;
            break;
        case 5:
            exit(0);
            break ;
        default:
            printf("\n Incorrect option!!!!");
        }
        if(opt>=1&&opt<=4)
        {
            printf("\n Ans is %f",ans);
        }
        i++;
    }
    return 0;
}
*/
///=======================================================================///
///----using char as a option in the switch case-------------------------///
/*
#include<stdio.h>
int main()
{
    int opt;
    float x,y,ans=0;

    printf("\n ***Menu***");
    printf("\n a.Add \n b.sub \n c.Multi \n d.div \n");
    printf("\n choose the option :-");
    scanf("%c",&opt);

    printf("\n Enter any Two No :-");
    scanf("%f%f",&x,&y);

    switch (opt)
    {
    case 'a':
    case 'A':
         ans=x+y;
         break;
    case 'b':
    case 'B':
        ans=x-y;
        break;
    case 'c':
    case 'C':
        ans=x*y;
        break;
    case 'd':
    case 'D':
        ans=x/y;
        break;
    default:
        printf("\n Incorrect Option !!!!");
        return ;
    }
    printf("\n Ans is %f",ans);
    return 0;
}
*/
///===================================================================================///
///-- using default case if a different way------------------------------------------///
/*
#include<stdio.h>
int main()
{
    int opt;
    float x,y,ans=0;

    printf("\n ***Menu***");
    printf("\n a.Add \n b.sub \n c.Multi \n d.div \n");
    printf("\n choose the option :-");
    scanf("%c",&opt);

    printf("\n Enter any Two No :-");
    scanf("%f%f",&x,&y);

    switch (opt)
    {
    case 'a':
    case 'A':
         ans=x+y;
         break;
    case 'b':
    case 'B':
        ans=x-y;
        break;
    case 'c':
    case 'C':
        ans=x*y;
        break;
    default:
        printf("\n Incorrect Option !!!!");
        return ;
    case 'd':
    case 'D':
        ans=x/y;
        break;
    }
    printf("\n Ans is %f",ans);
    return 0;
}
*/
///=============================================================================///
///C program to read weekday number and print weekday name using switch.
///This program will read weekday number and print its corresponding week name switch case statement in C language.
/*
#include<stdio.h>
int main()
{
    int opt;
    printf("\n ****Welcome****");
    printf("\n 1.mon \n 2.Tue \n 3.wed \n 4.Thu \n 5.fri \n 6.sat \n 7.sun");

    printf("\n choose the option ");
    scanf("%d",&opt);

    switch (opt)
    {
    case 1:
        printf("\n Today is Monday");
        break;
    case 2:
        printf("\n Today is Tuesday");
        break;
    case 3:
        printf("\n Today is Wensday");
        break;
    case 4:
        printf("\n Today is Thursday");
        break;
    case 5:
        printf("\n Today is Friday");
        break;
    case 6:
        printf("\n Today is Saturday");
        break;
    case 7:
        printf("\n Today is Sunday");
        break;
    default:
        printf("\n  Sorry incorrect Option!!!!!!");
        return ;

    }
    printf("\n ****Thank you**** ");
    return 0;
}
*/
///=======================================================================================///
///----C program to read gender (M/F) and print corresponding gender using switch.
///This program will read gender in single character like 'M' or 'F' and print its corresponding complete word "Male" or "Female" using switch case statement in C language.
/*
#include<stdio.h>
int main()
{
    int opt;
    printf("\n ****WELCOME****");
    printf("\n M \n F");
    printf("\n  choose the gender :-  ");
    scanf("%c",&opt);

    switch (opt)
    {
    case 'M':
    case 'm':
        printf("\n Gender is Male");
        break;
    case 'f':
    case 'F':
        printf("\n Gender is Female");
        break;
    default:
        printf("\n Choose correct option!!!!!");
    }
    return 0;
}
*/
///===================================================================================================///
///---C program to check whether a character is VOWEL or CONSONANT using switch.
///This program will read a character and check whether it is VOWEL or CONSONANT using switch case statement in C language.
/*
#include<stdio.h>
int main()
{
    int opt;
    printf("\n Enter Charcter :-");
    scanf("%c",&opt);

    switch (opt)
    {
    case 'a':
    case 'A':
        printf("\n Its vowel");
        break;
    case 'e':
    case 'E':
        printf("\n Its vowel");
        break;
    default:
        printf("\n Its Consonant");
        break;
    case 'i':
    case 'I':
        printf("\n Its vowel");
        break;
    case 'o':
    case 'O':
        printf("\n Its vowel");
        break;
    case 'u':
    case 'U':
        printf("\n Its vowel");
        break;

    }
    return 0;
}
*/
///===================================================================================================///
///---C program to check whether number is EVEN or ODD using switch.
///--This program will read an integer number and check whether it is EVEN or ODD using switch case statement in C language.
/*
#include<stdio.h>
int main()
{
    int opt,no;
    printf("\n ***Welcome***");
    printf("\n 1.even or Odd");
    printf("\n choose the option  :-");
    scanf("%d",&opt);

    printf("\n Enter A number :- ");
    scanf("%d",&no);

    switch (opt)
    {
    case 1:
        if(no%2==0)
        {
            printf("\n It is Even No");
        }
        else
        {
            printf("\n Its Odd no");
        }
        break;
    default:
        printf("\n Incorrect option!!!!!");

      }
   return 0;
}
*/
///==================================================================================================///
///---C program to find number of days in a month using switch case.
///---This program will read month value and print total number of days in input month in C language.
/*
#include<stdio.h>
int main()
{
    int opt;
    printf("\n ***CALENDAR****");
    printf("\n 1.jan \n 2.feb \n 3.mar \n 4.april \n 5.may \n 6.jun");
    printf("\n 7.jul \n 8.aug \n 9.sep \n 10.oct \n 11.nov \n 12.dec");
    printf("\n Choose The option :-");
    scanf("%d",&opt);

    switch (opt)
    {
    case 1:
        printf("\n It is 31 Days  Month");
        break;
    case 2:
        printf("\n It is 29 Days  Month");
        break;
    case 3:
        printf("\n It is 31 Days  Month");
        break;
    case 4:
        printf("\n It is 30 Days  Month");
        break;
    case 5:
        printf("\n It is 31 Days  Month");
        break;

    case 6:
        printf("\n It is 30 Days  Month");
        break;
    case 7:
        printf("\n It is 31 Days  Month");
        break;
    case 8:
        printf("\n It is 31 Days  Month");
        break;
    case 9:
        printf("\n It is 30 Days  Month");
        break;
    case 10:
        printf("\n It is 31 Days  Month");
        break;
    case 11:
        printf("\n It is 30 Days  Month");
        break;
    case 12:
        printf("\n It is 31 Days  Month");
        break;
    default :
        printf("\n Please select correact option ");
        printf("\n Only 12 Month in Year ");
    }
    return 0;
}
*/
///=============================================================================///
///---C program to check whether number is POSITIVE or NEGATIVE using switch.
///--This program will read an integer number and check whether it is POSITIVE or NEGATIVE using switch case statement in C language.
/*
#include<stdio.h>
int main()
{
    int opt,no;
    printf("\n ***Menu***");
    printf("\n 1.Positive or Negative");
    printf("\n Choose option:- ");
    scanf("%d",&opt);

    printf("\n Enter Number :-");
    scanf("%d",&no);

    switch (opt)
    {
    case 1:
        if(no>0)
        {
            printf("\n Its positive Number");
        }
        else
        {
            printf("\n Its negative Number");
        }
        break;
    default:
        printf("\n Incorrect option!!!!");
    }
    return 0;
}
*/
///====================================================================================///
/*
#include<stdio.h>
int main()
{
    int no,rem,a,sum=0,i,temp,ans=0;
    printf("Enter Any No: ");
    scanf("%d",&no);
    temp=no;

    while(no!=0)
    {
        rem=no%10;
        a=1;
        for(i=1;i<=2;i++)
        {
            a=a*rem;
        }
        sum=sum+a;
        no=no/10;
    }
    printf("Sum is:%d",sum);
    printf("Ans is:%d",ans);

    return 0;
}
*/
///=======================================================================///

#include<stdio.h>
int main()
{
    char str1[20],str2[20];
    int i,j,k,len1,len2,flg;

    printf("Enter your first String: ");
    gets(str1);

    printf("Enter your second String: ");
    gets(str2);

    for(i=0;str1[i]!='\0';i++);
    len1=i;

    for(i=0;str2[i]!='\0';i++);
    len2=i;

    printf("%d %d",len1,len2);

    if(len1==len2)
    {
        flg=1;
        for(i=0;str1[i]!='\0';i++)
        {
            for(j=0;str2[j]!='\0';j++)
            {
                for(k=j;k<len2;k++)
                {
                    if(str1[i]==str2[k])
                    {
                        flg=1;
                    }
                    else
                    {
                        flg=0;
                    }
                }

            }

        }
    }
    else
    {
        flg=0;
    }
    if(flg==1)
    {
        printf("Valid Anagram");
    }
    else
    {
        printf("Unvalid Anagram");
    }
    return 0;
}









