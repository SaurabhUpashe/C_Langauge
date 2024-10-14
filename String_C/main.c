#include <stdio.h>
/*
#include<stdio.h>
int main()
{
    char ch[50]={'h','e','l','l','o','\0'};
    char str[20]="hello Every one";
    int i;
    printf("\n Display character 1 \n");
    for(i=0;ch[i]!='\0';i++)
    {
        printf(" %c",ch[i]);
    }


    printf("\n Display String \n %s",str);
   return 0;
}
*/
///============================================================================///
/*
#include<stdio.h>
int main()
{
    char ch[50]={'h','e','l','l','o','\0'};
    char str[20]="hello Every one";
    int i;

    for(i=0;ch[i]!='\0';i++)
    {
        printf("%c",ch[i]);
    }
    ///display 2
    printf("\n string is %c",ch);
    ///dispay 3
    printf("\n string is ");
    puts(str);

    printf("\n Another string %s",ch);
    return 0;

}
*/
///============================================================================///
///------------Input and display the string------------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[45];
    int i;
    printf("\n Enter String ");
    scanf("%s",&str);

    printf("\n string is %s",str);
    return 0;
}
*/
///==============================================================================///
///-------------using %[^\n] as a format specifier------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];

    printf("\n Enter String ");
    scanf("%[^\n]",&str);

    printf("\n String Is: %s",str);
    return 0;
}
*/
///=============================================================================///
///--------------using %[^\n] as a format specifier----------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];

    printf("\n Enter String ");
    scanf("%[^\nw]",&str);

    printf("\n String Is:-%s ",str);
    return 0;
}
*/
///============================================================================///
///--------using gets()-------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    char saurabh[50];

    printf("\n Enter String ");
    gets(saurabh);

    printf("\n String is :%s",saurabh);
    return 0;
}
*/
///==========================================================================///
///--------WAP to find the length of string (number of characters in it)----///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,cnt=0;

    printf("\n Enter String ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        cnt++;
    }
    printf("\n Count is : %d",cnt);
    return 0;
}
*/
///==========================================================================///
///-----WAP to find the length of string (witout using count)---------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i;

    printf("\n Enter String ");
    gets(str);

    for(i=0;str[i]!='\0';i++);

    printf(" Count is %d",i);
    return 0;
}
*/
///===========================================================================///
///---------WAP to convert the string into uppercase-------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i;

    printf("\n Enter String ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97&& str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }

    printf("\n String is :-");
    puts(str);
    return 0;
}
*/
///=================================================================================///
///--------- reverse copy, reverse at another location-----------------------------///
/*
#include<stdio.h>
int main()
{
    char str[20],ts[20],bs[20];
    int i,j;

    printf("\n Enter String ");
    gets(str);

    //printf("\n Copy String ");
    for(i=0;str[i]!='\0';i++)
    {
        ts[i]=str[i];
    }
    ts[i]='\0';
    //printf("\n Reverse string ");
    for(i=0;str[i]!='\0';i++);
    for(i--,j=0;i>=0;i--,j++)
    {
        bs[j]=str[i];
    }

    printf("\n orignal String %s",str);
    printf("\n Copied String %s",ts);
    printf("\n Reverse String %s",bs);

    return 0;
}
*/
///========================================================================================///
///------------WAP To reverse the string at same location---------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[20];
    int i,tmp,j;

    printf("\n Enter String ");
    gets(str);

    printf("\n String Before procesing %s",str);

    for(i=0;str[i]!='\0';i++);
    for(i--,j=0;j<=i;i--,j++)
    {
        tmp=str[i];
       str[i]=str[j];
        str[j]=tmp;
    }
    printf("\n After processing %s",str);
    return 0;
}
*/
///====================================================================================///
///-----------reverse string  using the stack (Application of stack)-----------------///
/*
#include<stdio.h>
int main()
{
    char str[50],top=-1,stack[50];
    int i;
    printf("\n Enter String \n");
    gets(str);
    printf("\n Before Processing String %s :- ",str);

    top=-1;
    i=0;
    while(str[i]!='\0')
    {
        top++;
        stack[top]=str[i];
        i++;
    }

    i=0;
    while(top>=0)
    {
        str[i]=stack[top];
        top--;
        i++;
    }
    printf("\n After Processing String %s :- ",str);
    return 0;
}
*/
///=====================================================================================///
///-----------word count in a simple way. (without any unwanted spaces)----------------///
/*

#include<stdio.h>
int main()
{
    char str[50];
    int i,cnt=0;
    printf("\n Enter String \n");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
        {
            cnt++;
        }
    }
    printf("\n string is:-\n %s \n Word Count is:- %d ",str,cnt+1);
    return 0;
}
*/
///==================================================================================================================///
///----WAP to display the starting character of each word from entered string and word count (with multiple spaces)--///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int cnt,i,sp,ep;

    printf("\n Enter String \n");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;
    printf("\n Ep Is:- %d ",ep);

    for(i=0;str[i]==32;i++);
    sp=i;
    printf("\n Sp Is:- %d ",sp);

    cnt=0;
    //printf("%c",str[sp]);
    while(sp<=ep)
    {
        if(str[sp]==32&&str[sp+1]!=32)
        {
            cnt++;
            printf(" %c",str[sp+1]);
        }
        sp++;
    }
    printf("\n String Is %s",str);
    printf("\n Word Count is %d ",cnt+1);
    return 0;
}
*/
///==================================================================================///
///----- WAP to convert the string in to title case(first and last charcter of word )----------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,sp,ep;

    printf("\n Enter String \n");
    gets(str);

    for(i=0;str[i]!='\0';i++);

    for(i--;str[i]==32;i--);
    ep=i;

    for(i=0;str[i]==32;i++);
    sp=i;

    while(sp<=ep)
    {
        if((str[sp]!=32 && str[sp-1]==32 ) || (str[sp]!=32 && str[sp+1]==32 || str[sp+1]==0))
        {
              if(str[sp]>=90&&str[sp]<=122)
              {
                  str[sp]=str[sp]-32;
              }
        }
        else if(str[sp]!=32 &&( str[sp]>=65&&str[sp]<=90))
        {
             str[sp]=str[sp]+32;
        }
        sp++;
        if(str[0]!=32 &&(str[0]>=97 && str[0]<=122))
        {
            str[0]=str[0]-32;
        }
    }

    printf(" String is %s",str);
   // puts(str);

    return 0;
}
*/
///=====================================================================================///
///---
/*
#include<stdio.h>
int main()
{
    char str[40];
    int i,ep,sp;

    printf("\n Enter the string: ");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i;
   // printf("\n sp is %c",str[sp]);

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    while(sp<=ep)
    {
        if(str[sp]!=32&&str[sp-1]==32)
        {
            if(str[sp]>=97&&str[sp]<=122)
            {
                str[sp]=str[sp]-32;
            }
        }
        else if(str[sp]>=65&&str[sp]<=90)
        {
            str[sp]=str[sp]+32;
        }
        sp++;
    }
    if(str[0]!=32 && (str[0]>=97&&str[0]<=122) )
    {
        str[0]=str[0]-32;
    }
    printf("\n Title case String : ");
    puts(str);

    return 0;
}
*/
///======================================================================================///
///-----WAP to interchange first and last character of each word from string-----------///
/*
#include<stdio.h>
int main()
{
    char str[50],tmp;
    int i,j;

    printf("\n Enter String \n");
    gets(str);

    printf("\n Before processing string ");
    puts(str);

    while(str[i]!='\0')
    {
        for(;str[i]==32;i++);

        for(j=i;str[j]!='\0'&&str[j]!=32;j++);

        tmp=str[i];
        str[i]=str[j-1];
        str[j-1]=tmp;

        i=j;
    }

    printf("\n After Processing String %s ",str);
    //puts(str);

    return 0;
}
*/
///==============================================================================================================///
///--------------------WAP to convert first and last lower case  and other convert upper case--------------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,sp,ep;

    printf("\n Enter string \n");
    gets(str);

    printf("\n Before processing String : ");
    puts(str);

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    for(i=0;str[i]==32;i++);
    sp=i;

    while(sp<=ep)
    {
        if((str[sp]!=32&&str[sp-1]==32) || (str[sp]!=32 && str[sp+1]==32 || str[sp+1]==0))
           {
               if(str[sp]>=65&&str[sp]<=90)
                {
                    str[sp]=str[sp]+32;

                }

           }
        else if(str[sp]>=90 && str[sp]<=122)
        {
            str[sp]=str[sp]-32;
        }
       sp++;
        if(str[0]!=32)
        {
            if(str[0]>=65 && str[0]<=90)
            {
                str[0]=str[0]+32;
            }
        }
    }
    printf("\n After processing String : ");
    puts(str);
    return 0;
}
*/
///==============================================================================///
///-------------Sepreate the word from string===================================///

#include<stdio.h>
int main()
{
    char str[50],temp[50];
    int i,j,k;

    printf("\n enter your string:");
    gets(str);
    i=0;
    for(i=0;str[i]!='\0';i++)
    {
        k=0;
        for(j=i;str[j]!=32&&str[j]!='\0';j++)
        {
            temp[k]=str[j];
            k++;
        }
        temp[k]='\0';
        i=j;
        puts(temp);
    }

}

///========================================================================================================///
///-------------WAP to find missing character for give string---------------------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,flg=0;

    printf("\n Enter String ");
    gets(str);

    for(i=97;i<=122;i++)
    {
       flg=0;
        j=0;
        while(str[j]!='\0')
        {
            if(str[j]==i)
            {
                flg=1;
                break;
            }
            j++;
        }
        if(flg==0)
        {
            printf("\t %c",i);
        }
    }
    return 0;
}
*/
///======================================================================================///
///------WAP to check whether string are matching or not--------------------------------///
/*
#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    int i,flg=0,l1,l2;

    printf("\n Enter 1st String ");
    gets(s1);

    printf("\n Enter 2st String ");
    gets(s2);

    for(l1=0;s1[l1]!='\0';l1++);

    for(l2=0;s2[l2]!='\0';l2++);

    if(l1==l2)
    {
        flg=0;
        for(i=0;i<=s1;i++)
        {
            if(s1[l1]!=s2[l2])//if(s1[i]!=s2[i])you can also write this
            {
                flg=1;
                break;
            }
        }
    }
    else
    {
        flg=1;
    }

    if(flg==0)
    {
        printf("\n Is is  matching String ");
    }
    else
    {
        printf("\n Is is not matching String ");
    }
    return 0;
}

///===========================================================================================///
/*
#include<stdio.h>
int main()
{
    char str[50],sd[50];
    int i,j;

    printf("\n Enter string ");
    gets(str);

    for(i=0;str[i]!='\0';i++);

    for(i--,j=0;i>=0;i--,j++)
    {
        sd[j]=str[i];
    }
    printf("\n String is :-");
    puts(sd);
    return 0;
}
*/
///=================================================================================================///
///--------WAP to check given string is palindrome or not------------------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50],sd[50];
    int i,j,flg=0;

    printf("\n Enter String ");
    gets(str);

    for(i=0;str[i]!='\0';i++);

    for(i--,j=0;i>=0;i--,j++)
    {
        sd[j]=str[i];
    }
    sd[j]='\0';

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=sd[i])
        {
            flg=1;
        }
    }
    if(flg==0)
    {
        printf("\n %s is palindrome ",str);
    }
    else
    {
        printf("\n %s is not palindrome ",str);
    }
    return 0;
}
*/
///==========================================================================================///
///--------WAP to reverse every word of string at same location-----------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,pos,temp;

    printf("\n Enter String ");
    gets(str);

    i=0;
    while(1)
    {
        for(;str[i]==32;i++);

        for(j=i;str[j]!=32 && str[j]!='\0';j++);
        pos=j;

        for(j--;i<=j;i++,j--)
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
        i=pos;
        if(str[i]=='\0')
        {
            break;
        }
        i++;
    }
    printf("\n String is :- %s",str);
    return 0;
}
*/
///=================================================================================================///
///---------C Program to compare two strings------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50],sd[50];
    int c1,c2;

    printf("\n Enter 1st String :-");
    gets(str);

    printf("\n Enter 2st String :-");
    gets(sd);

    for(c1=0;str[c1]!='\0';c1++);
    str[c1]=c1;

    for(c2=0;sd[c2]!='\0';c2++);
    sd[c2]=c2;

    //for max length(cnt) string
    if(str[c1]>sd[c2])
    {
        printf("\n 1st string is greater than 2nd string ");
    }
    else if(sd[c2]>str[c1])
    {
        printf("\n 2nd string is greater than 1st string ");
    }
    else
    {
        printf("\n both string is equal");
    }


    return 0;
}
*/
///==========================================================================================///
///---C Program to reverse any string--------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,temp;

    printf("\n Enter Any String ");
    gets(str);

    printf("\n before processing string:- ");
    puts(str);

    for(i=0;str[i]!='\0';i++);

    for(i--,j=0;j<=i;i--,j++)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    printf("\n After processing string:- ");
    puts(str);
    return 0;
}
*/
///=====================================================================================///
///-----C Program to find frequency of characters---------------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,cnt=0;

    printf("\n Enter Any string ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=32)
        {
            cnt++;
        }
    }
    printf("\n Frequency of character is :- %d",cnt);
    return 0;
}
*/
///===============================================================================================///
///-----------------------C Program to concatenate two string------------------------------------///
/*
#include<stdio.h>
int main()
{
    char ab[50],bc[50];
    int i,j;

    printf("\n Enter 1st String :-");
    gets(ab);

    printf("\n Enter 2nd String :-");
    gets(bc);

    for(i=0;ab[i]!='\0';i++);

    for(j=0;bc[j]!='\0';j++)
    {
        ab[i]=bc[j];
        i++;
    }
    ab[i]='\0';
    printf("\n Concatenate String is :-%s",ab);
}
*/
///==================================================================================///
///----------C Program to count number of vowels in string--------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,cnt=0;

    printf("\n Enter String ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i'|| str[i]=='o' || str[i]=='u' ||str[i]=='A' || str[i]=='E' || str[i]=='I'|| str[i]=='O' || str[i]=='U')
        {
            cnt++;
        }
    }
    printf("\n Vowel count is :-%d",cnt);
    return 0;
}
*/
///===========================================================================================================///
///------------C program to delete vowels from a string------------------------------------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j;

    printf("\n Enter  String ");
    gets(str);

    for(i=0,j=0;str[i]!='\0';i++)
    {

        if(!(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'||str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'))
        {
            str[j]=str[i];
            j++;
        }
    }
    str[j]='\0';
    puts(str);
    return 0;
}
*/
///============================================================================================================///
///------------------Program to remove all alphabets from given alphanumeric string in C----------------------///
/*
#include<stdio.h>
int main()
{
    char str[50],ch[50];
    int i,j,k,len,flg=0;

    printf("\n Enter String ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
            flg=0;
            if((str[i]>=0&&str[i]<=47) || (str[i]>=58 &&str[i]<=256))
            {
                   flg=1;
            }
            else
            {
                ch[i]=str[i];
            }
            if(flg==0)
            {
                printf("%c",ch[i]);
            }
    }
    return 0;
}
*/
///=============================================================================================///
///--------C Program to reverse each words in string without reversing the characters----------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,pos,tmp;

    printf("\n Enter Any String :-");
    gets(str);

    printf("\n After processing string is :-");
    puts(str);

    while(1)
    {
        for(;str[i]==32;i++);///finding sp

        for(j=i;str[j]!=32&&str[j]!='\0';j++);
        pos=j;

        for(j--;i<=j;i++,j--)
        {
            tmp=str[i];
            str[i]=str[j];
            str[j]=tmp;
        }
        i=pos;
        if(str[i]=='\0')
        {
            break;
        }
        i++;
    }
    printf("\n After processing string is :-");
    puts(str);
    return 0;
}
*/
///=============================================================================================///
///-----------C Program to check whether string is palindrome or not---------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50],ch[50];
    int i,j,flg=0;

    printf("\n Enter Any String :-");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    for(i--,j=0;i>=0;i--,j++)
    {
        ch[j]=str[i];

    }
    //ch[j]='\0';
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=ch[i])
        {
            flg=1;
        }
    }
    if(flg==0)
    {
        printf("\n %s is palindrome string ",str);
    }
    else
    {
        printf("\n %s is not palindrome string ",str);
    }
    return 0;
}
*/
///=============================================================================================///
///------------C Program to Converting string from lowercase to uppercase and vice-versa-------////
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i;

    printf("\n Enter Any String :-");
    gets(str);

    printf("\n Before converting String is :-");
    puts(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97&&str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
    }
    if(str[i]!=32);
    {
        printf("\n After converting String is :-");
        puts(str);
    }
    return 0;
}
*/
///===============================================================================================///
///----------C Program to Counting the number of words in a given string-------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,cnt=0;

    printf("\n Enter Any String ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
        {
            cnt++;
        }
    }
    printf("\n Word count in Given String is :- %d ",cnt+1);
    return 0;
}
*/
///===============================================================================================///
///---------------C Program to Counting the number of character in a given string---------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,cnt=0;

    printf("\n Enter Any String :-");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        cnt++;
    }
    printf("\n Number of Character in given String Is :- %d",cnt);
    return 0;
}
*/
///====================================================================================///
///---------C Program to arrange the string in alphabetical order---------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i;

    for(i=65;i<=90;i++)
    {
        for(j=0;str[j]!='\0';j++)
        {

        }
    }
}
*/


///================================================================================================///
///-------------C program to find the first occurrence of a character in a string-----------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,cnt=0,sp,flg;

    printf("\n Enter String :-");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i;
    printf(" First character in a string is :- %c",str[sp]);

    for(i=0;str[i]!='\0';i++)
    {

        for(j=i;j<=i;j++)
        {
            if(str[sp]==str[i])
            {
                cnt++;
            }
            else
            {
                flg=1;
                break;
            }
        }
    }
    printf("\n The first character %s occurs %d times in the string",str[sp],cnt);
    return 0;
}
*/
///=========================================================================================================///
///-----------------------C program to find last occurrence of a character in a string--------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,ep,flg,cnt,sp;

    printf("\n Enter String :-");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    printf("\n Last character in a string %c",str[ep]);

    for(i=ep;i>=0;i--)
    {
        flg=0;
        for(j=i;j>=i;j--)
        {
            if(str[ep]==str[j])
            {
                cnt++;
            }
            else
            {
                flg=1;
                break;
            }
        }
    }
    printf("\n The Last character %s occurs %d times in the string.",str[ep],cnt);
    return 0;
}
*/
///===========================================================================================///
///---------C program to search all occurrences of a character in a string-------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,cnt[256]={0},k,len;

    printf("\n Enter String :-");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=32)
            cnt[str[i]]++;
    }

    for(i=0;i<256;i++)
    {
        if(cnt[i]>0)
        {
            printf("\n The character %c occurs %d times in the string.",i,cnt[i]);
        }
    }
    return 0;
}
*/
///====================================================================================================///
///---------C program to search all occurrences of a character in a string-------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,cnt=0,lcnt=0,k;

    printf("\n Enter String ");
    //printf("\n stricly enter String upper case ");
    gets(str);

    for(i=65,k=97;i<=90,k<=122;i++,k++)
    {
        cnt=0;
        lcnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                cnt++;
            }
            else if(str[j]==k)
            {
                lcnt++;
            }
        }
        if(cnt>=1)
        {
            printf("\n The character %c is maximum %d time occure in string",i,cnt);
        }
        else if(lcnt>=1)
        {
            printf("\n The character %c is maximum %d time occure in string",k,lcnt);
        }
    }
    return 0;
}
*/
///========================================================================================================///
///------------------C program to find maximum occurring character in a string----------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50];
    int i,j,maxcnt=0,cnt=0,k,lcnt=0;

    printf("\n Enter Any String ");
    gets(str);

    for(i=65,k=97;i<=90,k<=122;i++,k++)
    {
        cnt=0;
        lcnt=0;
//        printf("\n Count is %d",cnt);
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                cnt++;
            }
            else if(str[j]==k)
            {
                lcnt++;
            }

        }
        if(maxcnt<cnt)
        {
            maxcnt=cnt;
            if(maxcnt>=1)
            {
                printf("\n the character  %c is maximum %d time occurure in string",i,maxcnt);
            }
        }
        else if(maxcnt<lcnt)
        {
            maxcnt=lcnt;
            if(maxcnt>=1)
            {
                printf("\n the character ss %c is maximum %d time occurure in string",k,maxcnt);
            }
        }
    }
    return 0;
}
*/
///====================================================================================================///
///-----------C program to remove first occurrence of a character from string-------------------------///
/*
#include<stdio.h>
int main()
{
    char str[50],ch[50];
    int i,j,sp,flg;

    printf("\n Enter Any String ");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i;

    for(i=0;str[i]!='\0';i++)
    {
        flg=0;
        if(str[sp]==str[i])
        {
            flg=1;
        }
        else
        {
            ch[i]=str[i];
        }

        if(flg==0)
        {
            printf("%c",ch[i]);
        }
    }

    return 0;
}
*/
///======================================================================================================///
///--------------------C program to remove last occurrence of a character from the string---------------///
/*
#include<stdio.h>
int main()
{
    char str[50],ch[50];
    int i,j,ep,flg=0;

    printf("\n Enter any String ");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    for(i=0;i<=ep;i++)
    {
        flg=0;
        if(str[ep]==str[i])
        {
            flg=1;
        }
        else
        {
            ch[i]=str[i];
        }

        if(flg==0)
        {
            printf(" %c",ch[i]);
        }
    }
    return 0;
}
*/
///===================================================================================================///
///-----------------C program to remove first occurrence of a character from string------------------///
/*
#include<stdio.h>
int main()
{
    char str[50],ch;
    int i,j,flg,len;

    printf("\n Enter Any String ");
    gets(str);

    printf("\n Enter Character You Want remove  ");
    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++);
    len=i;

    for(i=0;i<len&&str[i]!=ch;i++);

    while(i<len)
    {
        str[i]=str[i+1];
        i++;
    }
    printf(" %s",str);
    return 0;
}
*/
///=============================================================================================///
///--------------C program to remove last occurrence of a character from the string------------///
/*
#include<stdio.h>
int main()
{
    char str[50],ch;
    int i,j,ep,len,sp;

    printf("\n Enter String ");
    gets(str);

    printf("\n Enter Chracter you want to remove ");
    scanf("%[^\n]",ch);

    for(i=0;str[i]!='\0';i++);
    len=i;
    for(i=0;i<len;i++)
    {
       if(ch==str[i])
       {
           str[i]=str[i+1];
       }
    }
    printf("%s",str);
    return 0;

}
*/
///=========================================================================================================//
///---------------------------(2D character string)-------------------------------------------------------///

///========================= WAP to search the name in the list of names=========================///
///================================{ask in coding rounds}=======================================///
/*
#include<stdio.h>
int main()
{
    char name[5][50],nm[50];
    int i,j,len1=0,len2=0,pos,flg;

    printf("\n Enter String :-");
    for(i=0;i<5;i++)
    {
        gets(name[i]);
    }

    printf("\n String are :-");
    for(i=0;i<5;i++)
    {
        puts(name[i]);
    }
    ///finding name
    printf("\n Enter Name do you want to Searach :-");
    gets(nm);

    for(j=0;nm[j]!='\0';j++);///find lenght of nm
    len1=j;

    ///searching processes
    for(i=0;i<5;i++)
    {
        for(j=0;name[i][j]!='\0';j++);
        len2=j;

        flg=0;

        if(len1==len2)
        {
            for(j=0;j<len2;j++)
            {
                if(name[i][j]!=nm[j])
                {
                    flg=1;
                    break;
                }
            }

        }
        else
        {
            flg=1;
        }
        if(flg==0)
        {
            printf("\n %s is present at %d position ",nm,i+1);
        }
    }
    return 0;
}
*/
///===============================================================================================///
///---------------------
/*
#include<stdio.h>
int main()
{
    int str[50],i,cnt=0,ep,sp;

    printf("\n Enter Any String :- ");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;
    for(i=0;str[i]==32;i++);
    sp=i;

    printf("\n %c",str[sp]);
    cnt=0;
    i=0;
    while(sp<=ep)
    {
        if(str[sp]==32 && str[sp+1]!=32)
        {
            cnt++;
            printf("%c",str[sp+1]);
        }
//        else if(str[sp]!=32)
//        {
//            printf("%c",str[sp]);
//        }
        sp++;
    }
    printf("\n %s",str);
    printf("\n Word Count Is :- %d",cnt+1);
    return 0;
}
*/
///============================================================================================///
///------WAP to sort string in Lexicographical order(dictionary order/alphabetical order)-----///
/*
#include<stdio.h>
int main()
{
    int i,j;
    char str[50],temp;
    printf("\n Enter your String :- ");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]<str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("\n Albhetical order String :- ");
    puts(str);
    return 0;

}
*/









