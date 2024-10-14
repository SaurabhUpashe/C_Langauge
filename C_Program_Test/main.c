
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
/*
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
*/
///=========================================================================///
/*
#include<stdio.h>
#define SIZE 50
int target(int x[],int n,int cnt)
{
    int i,j,k,min=0,sum=0;
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",x[i]);
    }

    for(i=0;i<cnt;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            for(k=j+1;k<cnt;k++)
            {
                if(x[i]+x[j]+x[k]<n)
                {
                    printf("\n [%d,%d,%d],",x[i],x[j],x[k]);
                    sum=x[i]+x[j]+x[k];
                    min[0]=;
                    if(min>sum)
                    {
                        sum=min;
                        return sum;
                    }
                }
            }
        }
    }
}
int main()
{
    int x[SIZE],sum=0,cnt,ans=0;
    int i,no=0;

    printf("\n Enter your Count : ");
    scanf("%d",&cnt);

    printf("\n Enter the %d Array Element: ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    printf("\n Array Element: ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",x[i]);
    }

    printf("\n Enter your target: ");
    scanf("%d",&no);

    ans=target(x,no,cnt);
    printf("\n ans is %d",ans);
}
*/
///==========================================================================///
///---------Best Time to Buy and Sell Stocks III----------------------------///
/*
#include<stdio.h>
#define SIZE 100
int maxprofit(const int s[],int cnt)
{
    int i,min,max=0,len1=0,len=0,sum=0,ans=0;
    printf("\n Function Array Is: ");
    for(i=0;i<cnt;i++)
    {
        printf("\n %d",s[i]);
    }
    min=s[0];
    for(i=0;i<cnt;i++)
    {
        if(min>=s[i])
        {
            min=s[i];
            len++;
        }
    }
    printf("\n min is: %d",min);
    for(i=0;i<cnt;i++)
    {
        if(max<=s[i])
        {
            max=s[i];
            len1++;
        }
    }

    printf("\n max is: %d",max);


    printf("\n Lenth 1 %d",len1);
    printf("\n Lenth 2 %d",len);

    if((len>1&&len>1)&&(len==len1-1))
    {
        for(i=0;i<len;i++)
        {
            sum=0;
            sum=max-min;
            ans=ans+sum;
        }
        return ans;

    }
    else
    {
        return max-min;
    }

}
int main()
{
    int A[SIZE],i,cnt=0,ans;

    printf("\n Enter the your Count That is Minimum of 100: ");
    scanf("%d",&cnt);

    printf("\n Enter the %d Array Element: ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&A[i]);
    }

    printf("\n Array Element: ");
    for(i=0;i<cnt;i++)
    {
        printf("\n %d",A[i]);
    }

    ans=maxprofit(A,cnt);
    printf("max profit is: %d",ans);

}
*/
///==================================================================///
///====================MINIMUM JUMPS REQURIED=======================///
/*
#include<stdio.h>
#define SIZE 200

int jumps(int a[],int n)
{
    int i,j,cnt=0,tmp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {

            if(a[0]==1&&a[n-1]==1)
            {
                return -1;
            }
            else if(a[i]!=1&&a[n-1]==1)
            {
                cnt++;
                break;
            }
//            if(a[i]!=1&&a[j]==1)
//            {
//                if(a[i]!=1&&a[j+1]==1)
//                {
//                    continue;
//                }
//                else
//                {
//                    cnt++;
//                    break;
//                }
//
//            }
            else if(a[i]&&a[j]!=1)
            {
                cnt++;
                break;
            }
            else
            {
                break;
            }
        }
    }
    return cnt;
}
int main()
{
    int a[SIZE],i,cnt,jumpcnt;

    printf("\n enter your count : ");
    scanf("%d",&cnt);

    printf("\n Enter %d Array Element: ",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("\n Array Element: ");
    for(i=0;i<cnt;i++)
    {
        printf("\t %d",a[i]);
    }

    jumpcnt=jumps(a,cnt);

    if(jumpcnt>0)
    {
        printf("\n %d jumps are required",jumpcnt);
    }
    else
    {
        printf("\n we can not jumps last index: ");
    }

}
*/
///=================================================================///
///---Implement the class MovieTicket with the instance variables and methods mentioned below.

#include<stdio.h>
double movieticket(int movieid,int noofseats)
{
    double Totalamt=0.0;
    int i,costofTicket,Total=0;

    for(i=0;i<noofseats;i++)
    {
        if(movieid==111)
        {
            costofTicket=7;
            Total=Total+costofTicket;
            Totalamt=Total+(Total*0.02);
        }
        else if(movieid==112)
        {
            costofTicket=8;
            Total=Total+costofTicket;
            Totalamt=Total+(Total*0.02);
        }
        else if(movieid==113)
        {
            costofTicket=9;
            Total=Total+costofTicket;
            Totalamt=Total+(Total*0.02);
        }
        else
        {
            return 0;
        }
    }
    return Totalamt;
}
int main()
{
    double cost;
    int no,cnt;
    printf("\n Enter your movieid: ");
    scanf("%d",&no);

    printf("\n How many movie seats do you want : ");
    scanf("%d",&cnt);

    cost=movieticket(no,cnt);
    if(cost==0)
    {
        printf("\n Please!Enter valid Movie Id and Number of Seats ");
    }
    else
    {
        printf("\n Total Cost of Ticket is: %.2lf",cost);
    }

}

for(i=0;s[i]!='\0';i++)
        {
           if(s[i]==I)
           {
                sum=sum+I;
           }
           else if(s[i]==V)
           {
                if(s[i]==V&&s[i-1]!=I)
                {
                    sum=sum+V;
                }
                else if(s[i]==V&&s[i-1]==I)
                {
                    sum=sum+(V-I);
                }
           }
           else if(s[i]==X)
           {
                if(s[i]==X&&s[i-1]!=I)
                {
                    sum=sum+X;
                }
                else if(s[i]==X&&s[i-1]==I)
                {
                    sum=sum+(X-I);
                }
           }
           else if(s[i]==C)
           {
                if(s[i]==C&&s[i-1]!=I)
                {
                    sum=sum+C;
                }
                else if(s[i]==C&&s[i-1]==I)
                {
                    sum=sum+(C-I);
                }
           }
           else if(s[i]==L)
           {
                if(s[i]==L&&s[i-1]!=I)
                {
                    sum=sum+L;
                }
                else if(s[i]==L&&s[i-1]==I)
                {
                    sum=sum+(L-I);
                }
           }
           else if(s[i]==D)
           {
                if(s[i]==D&&s[i-1]!=I)
                {
                    sum=sum+X;
                }
                else if(s[i]==D&&s[i-1]==I)
                {
                    sum=sum+(D-I);
                }
           }
           else if(s[i]==M)
           {
                if(s[i]==M&&s[i-1]!=I)
                {
                    sum=sum+M;
                }
                else if(s[i]==M&&s[i-1]==I)
                {
                    sum=sum+(M-I);
                }
           }
           else
           {
                return 0;
           }

        }
        cout<<endl<<sum;

























































































