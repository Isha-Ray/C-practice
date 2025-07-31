/* What is a string in C? How is it different from a character array?
Explain how strings are represented using character arrays ending with a null character ('\0').
------->
In C programming, a string is essentially a sequence of characters terminated by a special character: the null character ('\0').

Example--------------
char name[] = "ChatGPT";
Internally, this is stored as:
'C' 'h' 'a' 't' 'G' 'P' 'T' '\0'

Difference Between a String and a Character Array ----------------------------------------------------------------
Feature	                        Character Array	                                        String
Definition	                A collection of characters	                            A character array ending with '\0'
Null Terminator	                May or may not have '\0'	                        Always ends with '\0'
Treated As	                Just a group of characters	                Specially handled by string functions like strlen(), strcpy(), etc.
Example	                char arr[] = {'C', 'o', 'd', 'e'};	            char str[] = "Code"; → stored as 'C','o','d','e','\0'

*/

// --------------------------------------------------------------------------------------------------------------------------------------

/* How are strings stored in memory in C?
Discuss how strings are arrays of characters terminated by a null character, and how memory allocation works.
------>
In C programming, strings are stored in memory as arrays of characters, terminated with a null character ('\0').

Memory Representation of Strings---------------------------------
char str[] = "Code";

C stores it in memory like this:
Index	0	1	2	3	4
Value	C	o	d	e	\0
Each character occupies 1 byte, so "Code" requires 5 bytes in memory (4 characters + 1 for '\0').

*/

// ------------------------------------------------------------------------------------------------------------------------------------

/* What are the common string handling functions provided by the C standard library?
Mention functions like strlen(), strcpy(), strcat(), strcmp(), and their purposes.
---->
The C Standard Library provides several useful functions for manipulating strings. These functions are declared in the header:
#include <string.h>

1. strlen() – String Length
Purpose: Returns the length of a string (number of characters before '\0').

Syntax: 
size_t strlen(const char *str);
Example:
char name[] = "Isha";
printf("%lu", strlen(name)); // Output: 4

2. strcpy() – String Copy
Purpose: Copies a string (including '\0') from source to destination.

Syntax:
char *strcpy(char *dest, const char *src);
Example:
char src[] = "ChatGPT";
char dest[20];
strcpy(dest, src);

3. strcat() – String Concatenation
Purpose: Appends (adds) the source string to the end of the destination string.

Syntax:
char *strcat(char *dest, const char *src);

Example:
char str1[20] = "Hello ";
char str2[] = "World";
strcat(str1, str2);  // str1 becomes "Hello World"

4. strcmp() – String Comparison
Purpose: Compares two strings lexicographically.

Returns:
0 if both strings are equal
< 0 if first string is less than second
> 0 if first string is greater than second

Syntax:
int strcmp(const char *str1, const char *str2);

Example:
strcmp("abc", "abc");  // returns 0
strcmp("abc", "abd");  // returns negative
strcmp("abd", "abc");  // returns positive

5. strncpy() – Safe String Copy
Purpose: Copies up to n characters from one string to another.

Syntax:
char *strncpy(char *dest, const char *src, size_t n);
Safer than strcpy because you limit how many characters to copy.

6. strncat() – Safe Concatenation
Similar to strcat() but limits how many characters to append.

7. strchr() – Find Character
Finds the first occurrence of a character in a string.

char *strchr(const char *str, int c);

8. strstr() – Find Substring
Finds the first occurrence of one string inside another.

char *strstr(const char *haystack, const char *needle);

*/

// ------------------------------------------------------------------------------------------------------------------------------

/*What is the difference between strcpy() and strncpy()?
Compare how they work, including the risk of buffer overflow and how strncpy can limit the number of copied characters.
----->
Both strcpy() and strncpy() are used to copy strings, but they behave differently and are suited for different situations.

1. strcpy() – Basic String Copy

Syntax --------------------------
char *strcpy(char *dest, const char *src);

How It Works:
Copies characters from src to dest, including the null terminator '\0'.
Stops after copying the entire source string.

No bounds checking – if dest is too small, it causes buffer overflow (undefined behavior).

Example:
char src[] = "OpenAI";
char dest[10];
strcpy(dest, src);  // OK if dest is large enough

2. strncpy() – Bounded String Copy (Safer)

Syntax--------------------------------------
char *strncpy(char *dest, const char *src, size_t n);

How It Works:
Copies up to n characters from src to dest.
If src is shorter than n, it fills the rest of dest with '\0'.
If src is longer than or equal to n, it does not null-terminate automatically.

Caution: You must manually add '\0' if the source is longer or equal to n.

Example:
char src[] = "OpenAI";
char dest[4];
strncpy(dest, src, 3);
dest[3] = '\0';  // Manually terminate

*/

/* How do you take multi-word string input in C? Why is gets() unsafe?
Discuss safe alternatives like fgets() and explain why gets() is dangerous due to buffer overflow risk.
----->
In C, functions like scanf("%s", str) only read one word (i.e., they stop at whitespace like spaces, tabs, or newlines).
To read multi-word strings, you need a function that can read entire lines, including spaces.

1. gets() – Unsafe and Deprecated

Syntax --------------------------
gets(str);  // Don't use this!

Why is gets() dangerous?
Does not check the size of the destination array.
Can overwrite memory (buffer overflow) if user types more characters than the array can hold.
Example:
char str[10];
gets(str);  // User types "This is long" → buffer overflow!

2. Safe Alternative: fgets()

Syntax:
fgets(str, size, stdin);

Reads at most size - 1 characters, leaving space for the '\0' null terminator.
Can read spaces, unlike scanf("%s", ...).
Stops reading at a newline (\n) or end-of-file.
Example:
#include <stdio.h>

int main() {
    char input[100];

    printf("Enter a sentence: ");
    fgets(input, sizeof(input), stdin);

    printf("You entered: %s", input);
    return 0;
}

Output:
Enter a sentence: Hello OpenAI GPT
You entered: Hello OpenAI GPT

Note: fgets() includes the newline \n at the end if there’s space.
*/