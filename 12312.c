#include<stdio.h>

//int sizeof_demo()
int main()
{
	float r,c,s;
	printf("Ban kinh cua hinh tron la r= ");
	scanf("%f",&r);
	c=6.28*r; //2*pi*r
	s=3.14*r*r; //pi*r binh phuong
	printf("\n");
	printf("Ket qua tinh chu vi va dien tich hinh tron: \n");
	printf("mmmmmmmmmmmmmmmmmmmmmmmmmmm \n")
    printf(" B�n k�nh h�nh tr�n:      r=%8.1f met \n ",r);
	printf(" Chu vi h�nh tr�n         c=%8.2f met \n",c);
	printf(" Dien tich hinh tron      s=%8.2f met vuong \n",s);
	printf("mmmmmmmmmmmmmmmmmmmmmmmmmmm n\n\");
//======vd2=======
    printf("Data Type    \t | Size of byte \n");
	printf("int          \t | %d byte \n",sizeof(int));
	printf("float        \t | %d byte \n",sizeof(float));
	printf("unsinged int \t | %d byte \n",sizeof(unsinged int));
	printf("short int    \t | %d byte \n",sizeof(short int));
	printf("long int     \t | %d byte \n",sizeof(long int));
	printf("double       \t | %d byte \n",sizeof(double));
	
	return 1;
	}
	
	
	
