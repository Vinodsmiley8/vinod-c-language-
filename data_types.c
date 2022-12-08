#include<stdio.h>  
 int main()    
{    

	int a,b,c;
	float d,e,f;
	char g,h;
	
	a=1;   //int
	d=9.998; //float
	g='z';//char
	b=(int)d;//int
	e=(float)a;//float
	c=(int)g;//int
	f=(float)g;//float
	
	printf(" %d\n %d\n %d\n %f\n %f\n %f\n %c\n %c\n ",a,b,c,d,e,f,g,h);
	
return 0;  
}
