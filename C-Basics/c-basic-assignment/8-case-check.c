#include<stdio.h>
int main()
{
        char a;
        printf("Enter an alphabet to check the case : \n");
        scanf("%c",&a);
        if(a>='A' && a<='Z')
                printf("Entered alphabet is in Uppercase\n");
        else if(a>='a' && a<='z')
                printf("Entered alphabet is in Lowercase\n");
        else
                printf("Not an alphabet \n");
        
        return 0;
}
