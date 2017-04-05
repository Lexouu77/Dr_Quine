#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
/*
Grace's comment.
*/
#define FID "#include <stdio.h>%c#include <fcntl.h>%c#include <unistd.h>%c/*%cGrace's comment.%c*/%c#define FID %c%s%c%c#define THD int main(){int fd;if((fd = open(%cGrace_kid%c,O_WRONLY|O_TRUNC|O_CREAT,0644)) == -1){return(1);}dprintf(fd,FID,10,10,10,10,10,10,34,FID,34,10,34,34,10,10);close(fd);return(0);}%c#define CC lala%cTHD"
#define THD int main(){int fd;if((fd = open("Grace_kid",O_WRONLY|O_TRUNC|O_CREAT,0644)) == -1){return(1);}dprintf(fd,FID,10,10,10,10,10,10,34,FID,34,10,34,34,10,10);close(fd);return(0);}
#define CC lala
THD
