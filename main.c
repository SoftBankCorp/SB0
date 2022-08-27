

#include <unistd.h>

rush (int x, int y);

rush (int x, int y)
{
    y =y-2;
    char corner ='o';
    char length ='|';
    char widthside ='-';
    char newline = '\n';

    write(1,&corner,1);
    while(x--)
        {
            write(1,&widthside,1);
			if( x==0)
				break;
        }
    write(1,&corner,1);  //첫가로끝
    write(1,&newline,1); //개행

    while (y--)
    {
        write(1,&length,1);
		if (y==0)
			break;
	    }
    //높이 끝


    write(1,&corner,1);

    while(x--)
        {
        write(1,&widthside,1)
		if (x==0)
			break;

        }
    write(1,&corner,1);
    write(1,&newline,1);

}


int main ()
{
 rush(5,3);
 return(0);

}
