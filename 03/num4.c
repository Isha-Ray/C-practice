// Take a character as input and display its ASCII value.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    printf("The ASCII value of '%c' is: %d\n", ch, ch);
    return 0;
}

/* Output ---> 
Enter a character: A
The ASCII value of 'A' is: 65  */

/* Agar humlog second printf wale me ek ch likhe toh output correct nhi aayega.

%c → prints the character (e.g., A)
%d → prints the ASCII value (e.g., 65)
We write ch twice because the first is for %c (character) and the second is for %d (number/ASCII).*/

/* -------------------------------------------
Letter	    ASCII                         
A	        65
B	        66
C	        67
D	        68
E	        69
F	        70
G	        71
H	        72
I	        73
J	        74
K	        75
L	        76
M	        77
N	        78
O	        79
P	        80
Q	        81
R	        82
S	        83
T	        84
U	        85
V	        86
W	        87
X	        88
Y	        89
Z	        90   */

/* ----------------------------------------
a   97
b	98
c	99
d	100
e	101
f	102
g	103
h	104
i	105
j	106
k	107
l	108
m	109
n	110
o	111
p	112
q	113
r	114
s	115
t	116
u	117
v	118
w	119
x	120
y	121
z	122
*/

/* -------------------------------------------------
Character	ASCII
0	        48
1	        49
2	        50
3	        51
4	        52
5	        53
6	        54
7	        55
8	        56
9	        57       */

/* --------------------------------------------------
Symbol	        ASCII	            Description
                32	                Space
!	            33	                Exclamation mark
"	            34	                Double quote
#	            35	                Hash
$	            36	                Dollar
%	            37	                Percent
&	            38	                Ampersand
'	            39	                Single quote
(	            40	                Left parenthesis
)	            41	                Right parenthesis
*	            42	                Asterisk
+	            43	                Plus
,	            44	                Comma
-	            45	                Minus/Hyphen
.	            46	                Period/Dot
/	            47	                Slash
:	            58	                Colon
;	            59	                Semicolon
<	            60	                Less than
=	            61	                Equal sign
>	            62	                Greater than
?	            63	                Question mark
@	            64	                At symbol         */





