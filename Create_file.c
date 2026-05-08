#include<stdio.h>
#include<fcntl.h>
    
int main()
{
    int fd = 0;
    fd = creat("Marvellous.txt", 0777);

    if( fd == -1)
    {
        printf("The file was not created\n");
    }
    else
    {
        printf("The fd of created file is %d\n",fd);
    }

    return 0;
}
