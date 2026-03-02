#include<stdio.h>
int main(){

    char c;
    int uppercase_vowel;
    int lowercase_vowel;

    printf("Enter an alphabet: ");
    scanf("%c", &c);

    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    
    if(lowercase_vowel || uppercase_vowel)
      printf("%c is a Vowel", c);

      else
      printf("%c is consonant", c);

return 0;

} 