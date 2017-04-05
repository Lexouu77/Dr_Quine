#include <stdio.h>

void	function(char *s)
{
	printf(s,10,10,9,32,10,10,9,10,10,10,10,10,10,9,34,s,34);
}
/*
** It's a comment.
*/

int	main(void){char*a="#include <stdio.h>%c%cvoid%cfunction(char%c*s)%c{%c%cprintf(s,10,10,9,32,10,10,9,10,10,10,10,10,10,9,34,s,34);%c}%c/*%c** It's a comment.%c*/%c%cint%cmain(void){char*a=%c%s%c;function(a);/*Here's another one.*/return(0);}";function(a);/*Here's another one.*/return(0);}
