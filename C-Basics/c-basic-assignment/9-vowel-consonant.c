#include<stdio.h>
int main()
{
        char c;
        printf("Enter an alphabet to check if it's a vowel or a consonant ; \n");
        scanf("%c",&c);
        
      
                switch(c)
                {
                        case 'A':
                        case 'E':
                        case 'I':
                        case 'O':
                        case 'U':
                        case 'a':
                        case 'e':
                        case 'i':
                        case 'o':
                        case 'u':
                                printf("Entered alphabet is a vowel\n");
                        break;
                        default:
                                printf("Entered alphabet is a consonant\n");
                }
     
        return 0;
}
