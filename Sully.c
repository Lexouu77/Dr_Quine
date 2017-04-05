#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#define DEF "#include<stdio.h>%c#include<fcntl.h>%c#include<string.h>%c#include<unistd.h>%c#include<stdlib.h>%c#define DEF %c%s%c%cint main(int ac, char**av){%cint i=%d;%c(void)ac;if(!strcmp(av[0],%c./Sully%c))i++;%cchar s[100];sprintf(s,%cSully_%%d.c%c,i-1);int fd;if((fd=open(s,O_WRONLY|O_CREAT|O_TRUNC,0644))==-1){return(0);}dprintf(fd,DEF,10,10,10,10,10,34,DEF,34,10,10,i-1,10,34,34,10,34,34,34,34,34,34,10);close(fd);bzero(s,100);sprintf(s,%cgcc -Wall -Wextra -Werror Sully_%%d.c -o Sully_%%d%c,i-1,i-1);if(system(s)==-1){return(0);}if(i<=1){return(0);}bzero(s,100);sprintf(s,%c./Sully_%%d%c,i-1);system(s);}%c"
int main(int ac, char**av){
int i=5;
(void)ac;if(!strcmp(av[0],"./Sully"))i++;
char s[100];sprintf(s,"Sully_%d.c",i-1);int fd;if((fd=open(s,O_WRONLY|O_CREAT|O_TRUNC,0644))==-1){return(0);}dprintf(fd,DEF,10,10,10,10,10,34,DEF,34,10,10,i-1,10,34,34,10,34,34,34,34,34,34,10);close(fd);bzero(s,100);sprintf(s,"gcc -Wall -Wextra -Werror Sully_%d.c -o Sully_%d",i-1,i-1);if(system(s)==-1){return(0);}if(i<=1){return(0);}bzero(s,100);sprintf(s,"./Sully_%d",i-1);system(s);}
