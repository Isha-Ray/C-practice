/* 7. fopen() and fclose()

FILE *fptr;
fptr = fopen("file.txt", "w");   // open file for writing
if(fptr == NULL) {
    printf("Error opening file!");
    return 1;
}
fclose(fptr);   // close file

*/

/* 8. getc() and putc()

Example: Write and read characters

#include <stdio.h>

int main() {
    FILE *fp;
    char c;

    // Writing character
    fp = fopen("test.txt", "w");
    putc('A', fp);
    putc('B', fp);
    fclose(fp);

    // Reading character
    fp = fopen("test.txt", "r");
    while((c = getc(fp)) != EOF) {
        printf("%c ", c);
    }
    fclose(fp);

    return 0;
}


*/

/* 9. Program: Write & Read Character from File

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    // Writing to file
    fp = fopen("charfile.txt", "w");
    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }
    printf("Enter a character: ");
    scanf("%c", &ch);
    putc(ch, fp);
    fclose(fp);

    // Reading from file
    fp = fopen("charfile.txt", "r");
    ch = getc(fp);
    printf("Character read from file: %c\n", ch);
    fclose(fp);

    return 0;
}


*/