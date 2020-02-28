#include <iostream>
#include <math.h>

using namespace std;
int main() {
	
	int m,n;
	
	cout<<"suma de matrices mxn"<<endl;
	cout<<"ingrese m: "; cin>>m;
	cout<<"ingrese n: "; cin>>n;
	cout<<"$$$$$$$$$$$"<<endl;
	
	int mat1[m][n], mat2[m][n];
	cout<<"llenado de matriz 1"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"ingrese numero: ";
			cin<<mat1[i][j];
		}
	}
	cout<<"\n";
	cout<<"$$$$$$$$$$$$"<<endl;
	cout<<"llenado de matriz 2"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"ingrese numero: ";
			cin>>mat2[i][j];
		}
	}
	cout<<"n";
	cout<<"la matriz 1 es: "<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<mat1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
	cout<<"la matriz dos es: "<<endl;
	for(int i=0;i<m;i++){
		for(j=0;j<n;j++){
			cout<<mat2[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"\n";
	cout<<"la suma de las dos matrices es: "<<endl;
	for(int i=0;i<m;i++){
		for(j=0;j<n;j++){
			
		}
		cout<<endl;
	}
	return 0;
	
}
