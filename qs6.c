
#include <stdio.h>

void string_duplicates_removal(char *str);

int main() 
{
    char str[100];
    printf("Enter the string\n");
    scanf("%s", str);
    string_duplicates_removal(str);
    printf("After removing the duplicates:-\n");
    printf("%s", str);
    return 0;
}

void string_duplicates_removal(char *str)
{
    for(int i=0; str[i]!=0; i++)
    {
        for(int j=i+1; str[j]!=0; j++)
        {
            if(str[i] == str[j])
            {
                for(int k=j; str[k]!=0; k++)
                {
                    str[k] = str[k+1];
                }
                j--;
            }    
        }
    }    
}

