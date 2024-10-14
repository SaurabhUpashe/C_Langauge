
///===================Valid Anagram===========================================///
/*
#include <stdio.h>
int main()
{
    char str1[50],str2[50],temp;
    int i,j,len1=0,len2=0,flg=0;

    printf("\n Enter your first word: ");
    gets(str1);

    printf("\n Enter your Second word: ");
    gets(str2);

    for(i=0;str1[i]!='\0';i++)
    {
        for(j=0;str1[j]!='\0';j++)
        {
            if(str1[i]<str1[j])
            {
                temp=str1[i];
                str1[i]=str1[j];
                str1[j]=temp;
            }
        }
    }
    printf("\n Sorted String First:- %s",str1);

    for(i=0;str2[i]!='\0';i++)
    {
        for(j=0;str2[j]!='\0';j++)
        {
            if(str2[i]<str2[j])
            {
                temp=str2[i];
                str2[i]=str2[j];
                str2[j]=temp;
            }
        }
    }
    printf("\n Sorted String Second:- %s",str2);

    for(i=0;str1[i]!='\0';i++);
    len1=i;


    for(i=0;str2[i]!='\0';i++);
    len2=i;

    if(len1==len2)
    {
        for(i=0;i<=len1;i++)
        {
            if(str1[i]!=str2[i])
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
        printf("\n Valid Anagram");
    }
    else
    {
        printf("\n Unvalid Anagram");
    }
}
*/
///============================================================================///
///================Panagram===================================================///
/*
#include<stdio.h>
#include<string.h>
char pangram(char s[])
{
    char s1[50],temp,res='y';
    int i,j,len=0;

    strcpy(s1,s);
    printf("\n string %s ",s1);

    for(i=0;s1[i]!='\0';i++)
     {
         if(s1[i]!=32)
         {
             len++;
         }
     }

    printf("\n lenght is : %d",len);


     for(i=0;s1[i]!='\0';i++)
     {
         for(j=0;s1[j]!='\0';j++)
         {
             if(s1[i]<s1[j])
             {
                 temp=s1[i];
                 s1[i]=s1[j];
                 s1[j]=temp;
             }
         }
     }
     printf("\n Sorted %s",s1);

     for(i=0;s1[i]!='\0';i++)
     {
        for(j=i+1;s1[j]!='\0';j++)
        {
            if(s1[i]!=s1[j]&&len==26)
            {
                if(s1[i]>65&&s1[i]<90 || s1[i]<97&&s1[122])
                {
                    return 'y';
                }
                else
                {
                    return 'n';
                }
            }
            else
            {
                return 'n';
            }

        }
     }

}
int main()
{
    char str[50],p;
    int i;

    printf("\n Enter The your String : ");
    gets(str);

    p=pangram(str);
    if(p=='y')
    {
        printf("\n true");
    }
    else
    {
        printf("\n false");
    }
}
*/
///============================================================================///
///====================Number of Good Pairs (easy)============================///
/*
#include<stdio.h>
#define SIZE 20
int pair(int s[],int cnt)
{
    int x[6],i,j,cn=0;
    for(i=0,j=0;i<cnt;i++)
    {
        x[j]=s[i];
        j++;
    }

    for(i=0;i<cnt;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            if(x[i]==x[j]&&x[i]<=x[j])
            {
                cn++;
            }
        }
    }

    return cn;


}
int main()
{
    int ar[SIZE],i,cnt,paircnt;

    printf("\n Enter you Count:");
    scanf("%d",&cnt);

    printf("\n Enter the %d Numbers: ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&ar[i]);
    }

    printf("\n Array: ");
    for(i=0;i<cnt;i++)
    {
        printf("\n %d",ar[i]);
    }

    paircnt=pair(ar,cnt);

    if(paircnt>0)
    {
        printf("\n good pairs count is %d",paircnt);
    }
    else
    {
        printf("\n No number is repeating.");
    }
}
*/
///============================================================================///


#include<stdio.h>
#define SIZE 20
int main()
{
    int x[SIZE],cnt=0,i,j,sum=0,k,tcnt=0;

    printf("\n enter your Count:- ");
    scanf("%d",&cnt);

    printf("\n Enter %d array Element : ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n array Element : ");
    for(i=0;i<cnt;i++)
    {
        printf("\n %d",x[i]);
    }

    for(i=0;i<cnt;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            for(k=j+1;k<cnt;k++)
            {
                if(x[i]+x[j]+x[k]==0)
                {
                    tcnt++;
                    printf("\n [%d,%d,%d],",x[i],x[j],x[k]);
                }
            }
        }
    }
    if(tcnt==0)
    {
        printf("\n No any Triplets");
    }
}

































































































