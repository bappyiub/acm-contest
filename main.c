#include <stdio.h>
#include<stdlib.h>
int power(int p)
{
  int x=1;
  for(int j=1;j<=p;j++)
  {
    x=x*10;
  }
  
  return x;
}
void tidynumbers(int number)
{
  int tidy;
  int counter=0;
  int temp,k=0,pow=0;

  char str[10],res[10];
  for(int i=1;i<18;i++)
  {
  pow=power(i);
  temp=(int) (number%power(i));
  
  if(temp==number)
  {
  counter=i;
  break;
  }
  }

  
  
  k=0;
for(int t=counter-1;t>=0;t--)
  {
  pow=power(t);

  str[k++]=(number/pow)+48;
  number=number%pow;
  }

printf("%s\n",str);

  int t=0;
  t=k;
  
  str[k]='\0';
  res[k]='\0';
  int carray=0;
  res[--k]='9';
  t=k;
  k--;
 
 
      
     if((str[k]>str[t])&&(str[k]>=1))
     {
          res[k]=str[k]-1;
          carray=0;
     }
     else if(str[k]>str[t])
     {
       res[k]=10-str[k];
       carray=1;
     }
    else
    
    {
    res[k]=str[t];
    carray=0;
    }
  
   k--;
   t=k;
  for(int i=k;i>=0;i--)
  {
     if(carray==0) 
     
     {
     res[i]=str[t];
     carray=0;
      }
    
    
    else if((str[i]>carray)&&(carray==1))
    
     {
       res[i]=str[i]-carray;
       carray=0;
     }
     else if(str[i]<str[t])
     {
     res[i]=10-str[t];
     carray=1;
     }
    
     t--;

  }
  printf("%s",res);

}

int main(void) {
  tidynumbers(132);
  return 0;
}