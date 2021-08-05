/*
 * Program  to print all input lines that are longer than 80 characters
 
 * Compilation : gcc problem7 
 * Execution : ./a.out
 *
 * Ankush Chhabra 1910990144 29/07/21
 * Assignment_1 -> C Foundation
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>   
//function to find the lenght of the string
int customstrlen(char* s)
{
    int size=0;
    while(s[size]!='\0')
    {
        size++;
    }
    return size;
}
int main(){

    char strings[302];

    FILE *file = fopen("file.txt", "r");
  
    // If file not found
    if(!file)
    {
        printf("File not Found");
        return 0;
    }

    //iterate till file reaches to its end f end of file 
    while(!feof(file)){
        
        fgets(strings, 302, file);
        
        if(customstrlen(strings) >= 80)
            printf("%s", strings);
            
    }
    
    // close the file
    fclose(file);
    
    return 0;
}
