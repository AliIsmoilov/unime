#include <stdio.h>

int main() {

    FILE *fptr;

    // WRITING
    // Open a file in writing mode
    fptr = fopen("filename.txt", "w");
    // Write some text to the file
    fprintf(fptr, "Here you can write some text to the file");   
    fclose(fptr);

    // APPENDING
    // Open a file in append mode
    fptr = fopen("filename.txt", "a");
    // Append some text to the file
    fprintf(fptr, "\nHi everybody!");
    fclose(fptr);


    // READING
    fptr = fopen("filename.txt", "r");
    char myString[100];
    while(fgets(myString, 100, fptr)) {
        printf("%s", myString);
    }
    fclose(fptr);


    // If the file exist
    if(fptr != NULL) {
    
      // Read the content and print it
      while(fgets(myString, 100, fptr)) {
        printf("%s", myString);
      }
    
    // If the file does not exist
    } else {
      printf("Not able to open the file.");
    }


    return 0;
}