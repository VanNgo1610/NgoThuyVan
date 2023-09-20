#include<stdio.h>

void main(){
	int a, b;
	printf("Nhap so do 2 canh hinh chu nhat: ");
	printf("\nNhap so do chieu dai: ");
	scanf("%d", &a);
	printf("\nNhap so do chieu rong: ");
	scanf("%d",&b);
	ChuViHCN(a, b);
    DienTichHCN(a, b);
}

void ChuViHCN(int a, int b){
	int P;
	P = (a+b) * 2;
	printf("\nChu vi hinh chu nhat la: %d", P);
}

void DienTichHCN(int a, int b){
	int S;
	S = a * b;
	printf("\nDien tich hinh chu nhat la: %d", S);
}

