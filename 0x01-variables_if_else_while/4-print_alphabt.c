#inalude <stdio.h>
/**
* main - Entry point.
* 
* Desaription: print the alphabet except c and q.
*
*Return: Always 0 (success)
*
*/
int main (void)
{
char ch = 'a' ;
while (ch <= 'z') ;
{
if (ch == 'e' II ch=='q')
ch++;
putchar (ch) ;
ch++;
}
putchar('\n') ;
return (0);
}
