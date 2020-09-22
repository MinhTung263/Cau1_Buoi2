#include <iostream>
#include <string>
using namespace std;
class Mang1C{
	public:
		void Nhap(int a[],int n){
			for(int i=0;i<n;i++){
				cout<<"Nhap phan tu a["<<i+1<<"]: ";
				cin>>a[i];
			}
		}
		void Xuat(int a[],int n){
			for(int i=0;i<n;i++){
				cout<<a[i]<<"\t";
			}
		}
		bool TimNguyenTo(int x){
 			int dem=0;
 			for(int i=1;i<=x;i++){
 				if(x%i==0){
 					dem++;
				 }
			 }
			 if(dem==2){
			 	return 1;
			 }else{
			 	return 0;
			 }
		 }
		 void PrintPrime(int a[], int n)
			{
				for (int i = 0; i < n; i++)
				{
				    if (TimNguyenTo(a[i])==1)
				    {
				        cout<<a[i]<<"\t";
				    }
				}
			}
 
};
int main(){
	
	Mang1C mang;
	int n;
	int a[100];
	cout<<"Nhap vao so phan tu trong mang: ";
	cin>>n;
	mang.Nhap(a,n);
	cout<<"Mang vua nhap la: ";
	mang.Xuat(a,n);
	cout<<"\nCac so nguyen to trong mang la: ";
	mang.PrintPrime(a,n);
}
