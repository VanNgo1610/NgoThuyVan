#include<stdio.h>

int ChuViHCN(int a , int b);
int DienTichHCN(int a , int b);
int main(){
	int a, b;
	printf("Nhap so do 2 canh hinh chu nhat: ");
	printf("\nNhap so do chieu dai: ");
	scanf("%d", &a);
	printf("\nNhap so do chieu rong: ");
	scanf("%d",&b);
	
	printf("\nChu vi hinh chu nhat la: %d", ChuViHCN(a,b));
	printf("\nDien tich hinh chu nhat la: %d", DienTichHCN(a,b));
    
    return 0;
}

int ChuViHCN(int a, int b){
	
	return (a+b)*2;
}

int DienTichHCN(int a, int b){
	
	return a*b;
}

