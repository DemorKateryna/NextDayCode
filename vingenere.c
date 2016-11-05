#include <cs50.h> 
#include <stdio.h>
#include <ctype.h> 
#include <string.h> 
 
 int main(int argc, string argv[]) 
   { 
    // number of arguments
    if (argc != 2) 
      { 
       printf("You have missed a key or entered more than one"); 
       return 1; 
      } 
    string key = argv[1]; 
    //check whether the character is a letter
   for (int i = 0; i<key.size(); i++) 
   { 
    if (!isalpha(key[i])) 
     { 
      printf("The key isn't alphabetical"); 
      return 1; 
     } 
    else key[i] = toupper(key[i]); 
   } 
   string text = GetString(); 

   for (int i = 0, k = 0; i<text.size(); i++) 
    { 
     if (isalpha(text[i])) 
      { 
       if (isupper(text[i])) 
         text[i] = (((text[i] - 'A') + (key[(k++) % strlen(key)] - 'A')) % 26) + 'A'; 

       else
         text[i] = (((text[i] - 'a') + (key[(k++) % strlen(key)] - 'A')) % 26) + 'a';
      } 
    } 

   printf("%s\n", text); 
   }
