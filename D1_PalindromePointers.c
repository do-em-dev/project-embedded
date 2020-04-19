/* This program checks whether the given string is a Palindrome or NOT using pointers*/

#include<stdio.h>

_Bool palindrome_check(char *);
static int stringlength = 0;

_Bool IsPalindrome(char * str)
{
    char *startPtr = str;
    char *endPtr = str + (stringlength - 1);
    char reverseString[100];
    int indx = 0;
    
    while(indx < stringlength)
    {
        reverseString[indx] = *endPtr;
        endPtr--;
        indx++;
    }
    
    reverseString[indx] = '\0';
    
	printf("String %s\n", str);
	printf("ReverseString %s\n", reverseString);
    
    int indx1; 
    for(indx1 = 0; indx1 < stringlength; indx1)
    {
        if(str[indx1] == reverseString[indx1])
        {
            indx1++;	
		}
		else
		{
            return 0;
		}
    }
    return 1;
}

int main(void)
{
    char input_string[] = "malaynalam";
    char *Ptr = input_string;
	
    /*Find the length of the given input string*/
    while(*Ptr != '\0')
    {
        stringlength++;
        Ptr++;
    }
  
    _Bool Palincheck;
    Palincheck = IsPalindrome(input_string);
  
    printf("%s", Palincheck ? "IsPalindrome" : "IsNotPalindrome");
    return 0;
}
