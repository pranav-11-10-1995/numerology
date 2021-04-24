#include <iostream>
#include <cstring>
using namespace std;

int sum,rem;
 int infiniteloop(int num)
 {

    num=sum;
    while(1)            /* infinite loop */
    {
        sum=0;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    if(sum==1)
    {
        return 1;
    }
    else if(sum==2)
    {
        return 2;
    }
     else if(sum==3)
    {
        return 3;
    }
     else if(sum==4)
    {
        return 4;
    }
     else if(sum==5)
    {
        return 5;
    }
     else if(sum==6)
    {
        return 6;
    }
     else if(sum==7)
    {
        return 7;
    }
     else if(sum==8)
    {
        return 8;
    }
     else if(sum==9)
    {
        return 9;
    }
    else
        num=sum; /*if sum is non-unit digit number(multi-digit number), then loop has to be repeated*/
    }
 }
int main()
{
    char name[30],gender[10];
    int i;
    char a;
    /*cout<<"YOU ARE ENTERING INTO FASCINATING JOURNEY OF ASTROLOGY & NUMEROLOGY "<<endl;
    cout<<"ENTER y TO CONTINUE : "<<endl;
    cin>>a;
    if(a=='y')
    {*/

    cout<<"enter your name : ";
    cin.getline(name,30);
    cout<<endl<<"enter your gender : ";
    cin.getline(gender,10);
    int len1=strlen(name);

    cout<<"length : "<<len1<<endl;

    for(i=0;i<len1;i++)
    {
      cout<<(int)name[i]<<"\t"; /* explicit conversion */
    }
     cout<<endl;

     int k[len1];
     for(i=0;i<len1;i++)
    {
        k[i]=(int)name[i]-96;
      cout<<k[i]<<"\t"; /* implicit conversion */
    }
     cout<<endl;

     for(i=0;i<len1;i++)
     {
         if(k[i]==-64)/* to remove space ASCII*/
         {
             k[i]=0;
         }
     }
    for(i=0;i<len1;i++)
    {
     if(k[i]==1 || k[i]==9 || k[i]==10 || k[i]==17 ||k[i]==25)
     {
         k[i]=1;
     }
     else if(k[i]==2 || k[i]==11 || k[i]==18)
     {
         k[i]=2;
     }
     else if(k[i]==3|| k[i]==7|| k[i]==12|| k[i]==19)
     {
         k[i]=3;
     }
     else if(k[i]==4|| k[i]==13|| k[i]==12|| k[i]==20)
     {
         k[i]=4;
     }
     else if(k[i]==5|| k[i]==8|| k[i]==14|| k[i]==24)
     {
         k[i]=5;
     }
     else if(k[i]==21|| k[i]==22|| k[i]==23)
     {
         k[i]=6;
     }
     else if(k[i]==15|| k[i]==26)
     {
         k[i]=7;
     }
     else if(k[i]==6|| k[i]==16)
     {
         k[i]=8;
     }
    }
    sum=0;
    for(i=0;i<len1;i++)
    {
        cout<<k[i]<<"\t";
        sum=sum+k[i];
    }
    cout<<endl;
    cout<<"Compound Name Number (Sanyuktha Nama Sankhya) : "<<sum<<endl;
    cout<<"Name Number (Nama Sankhya) : "<<infiniteloop(sum)<<endl;

    char dob[11];
    cout<<"\nenter your date of birth ( dd/mm/yyyy format ) : ";
    cin.getline(dob,11);
    for(i=0;i<=10;i++)
    {
      cout<<(int)dob[i]<<"\t"; /* implicit conversion */
    }
     cout<<endl;

    int p[11];
     for(i=0;i<11;i++)
    {
        p[i]=(int)dob[i]-48;
      cout<<p[i]<<"\t"; /* implicit conversion */
    }
     cout<<endl;

     for(i=0;i<11;i++)
     {
         if(p[i]==-1)/* to remove / ASCII*/
         {
             p[i]=0;
         }
         if(p[i]==-48)/* to remove / ASCII*/
         {
             p[i]=0;
         }

     }
     sum=0;
     for(i=0;i<11;i++)
    {
        sum=sum+p[i];
      cout<<p[i]<<"\t";
    }
     cout<<endl;
      int sum1=0;
     for(i=0;i<2;i++)
    {
        sum1=sum1+p[i];
    }
     cout<<"\nBirth Number (Janma Sankhya) : "<<sum1<<endl;
     cout<<"Compound Fate Number (Sanyuktha Vidhi Sankhya) : "<<sum<<endl;
     cout<<"Fate Number (Vidhi Sankhya) : "<<infiniteloop(sum)<<endl;
   /* }*/
    return 0;
}

