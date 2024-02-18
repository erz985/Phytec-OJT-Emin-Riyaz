#include<stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i,len,count=0;
    printf("Enter a password : \n");
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
   {
        if(s[i]>='A' && s[i]<='Z')
        count++;
        {
          if(s[i]>='a' && s[i]<='z')
          count++;
          {
              if(s[i]>=0 && s[i]<=9)
                count++;
          }
        }
    }
     
     if(count=3 && len>=8)
        printf("\nThe password is strong\n");
     else
            printf("\nThe password is not strong\n"); 
   
    return 0;
}
