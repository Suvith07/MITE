/*The program will recieve 3 English words inputs from STDIN
    These three words will be read one at a time, in three separate line
    The first word should be changed like all vowels should be replaced by %
    The second word should be changed like all consonants should be replaced by #
    The third word should be changed like all char should be converted to upper case
    Then concatenate the three words and print them*/



#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char word1[50],word2[50],word3[50];
    char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
    char consonants[]={'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V', 
                        'W','X','Y','Z','b','c','d','f','g','h' ,'j','k','l','m','n','o','p',
                        'q','r','s','t','v','w','x','y','z'};
    printf("Enter First Word\n");
    scanf("%s",word1);
    printf("Enter Second Word\n");
    scanf("%s",word2);
    printf("Enter Third Word\n");
    scanf("%s",word3);
    int length1=strlen(word1);
    int length2=strlen(word2);
    int length3=strlen(word3);
    for(int i=0;i<length1;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(word1[i]==vowels[j])
            word1[i]='%';
        }
    }
    for(int i=0;i<length2;i++)
    {
        for(int j=0;j<42;j++)
        {
            if(word2[i]==consonants[j])
            word2[i]='#';
        }
    }
    for(int i=0;i<=length3;i++)
    {
        word3[i]=toupper(word3[i]);
    }
    strcat(word1,word2);
    strcat(word1,word3);
    printf("%s",word1);
    return 0;
}

   