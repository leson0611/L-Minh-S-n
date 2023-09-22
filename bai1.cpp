#include <stdio.h>

int div(int a, int b);
int sum(int c, int d);
int mul(int a, int b);
int sub(int a, int b);
int main(){
	int x, y;
	printf("Enter number 1:");
	scanf("%d",&x);
	printf("Enter number 2:");
	scanf("%d",&y);
	int result1 = sum(x,  y);
	printf("Tong la:%d",result1);
	int result2 = div(x,  y);
	printf("Thuong la:%d",result2);
	int result3 = mul(x,  y);
	printf("hieu la:%d",result3);
	int result4 = sub(x,  y);
	printf("tich la:%d",result4);
	
}
 
int sum(int a, int b){
	printf("\n\n Thuc hien tinh tong: \n");
	return a + b;
}
int div(int a, int b){
	printf("\n\n Thuc hien tinh thuong: \n");
	return a / b;
}
int mul(int a, int b){
	printf("\n\n Thuc hien tinh hieu: \n");
	return a - b;
}
int sub(int a, int b){
	printf("\n\n Thuc hien tinh tich: \n");
	return a * b;
}
