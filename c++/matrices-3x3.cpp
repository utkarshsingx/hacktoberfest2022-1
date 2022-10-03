#include<iostream>
 
using namespace std;
 
int main()
{
	int matx[3][3], maty[3][3], i, j, matz[3][3];
	
	cout<<"Masukkan elemen matriks ordo 3x3 yang pertama \n";
	
	for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)
    cin>>matx[i][j];
    
    cout<<"Masukkan elemen matriks ordo 3x3 yang kedua \n";
	
	for(i = 0; i < 3; i++)
	for(j = 0; j < 3; j++)
    cin>>maty[i][j];
    
	printf("\nMatriks 1:");
	for(i = 0; i < 3; i++){
	cout<<"\n";
	for(j = 0; j < 3; j++)
	cout<<matx[i][j]<<"\t";
	}
	printf("\nMatriks 2:");
	for(i = 0; i < 3; i++){
	cout<<"\n";
	for(j = 0; j < 3; j++)
	cout<<maty[i][j]<<"\t";
	}
	
	for(i=0; i<3; i++)
    {
    for(j=0; j<3; j++)
	matz[i][j] = matx[i][j] + maty[i][j];
	}
	cout << endl << "Jumlah 2 matriks adalah: " << endl;
	for(i=0; i<3; i++)
    {
    for(j=0; j<3; j++)
	cout << matz[i][j]<<" ";
	cout<<endl;
	}
	return 0;
}
