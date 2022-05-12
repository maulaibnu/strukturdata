#include <iostream>
using namespace std;

int main()
{
	int baris, kolom, matriksA[3][3], matriksB[3][3],jml=0,hasil[3][3];
	cout<<"PERKALIAN MATRIKS"<<endl;
	
	cout<<"Masukkan jumlah baris: ";
	cin>>baris;
	cout<<endl;
	
	cout<<"Masukkan jumlah kolom: ";
	cin>>kolom;
	cout<<endl;
	
	if (baris==kolom)
	{
		for(int i=0;i<baris;i++)
		{
			for(int j=0;j<kolom;j++)
			{
				cout<<"Masukkan elemen Matriks A baris "<<i<<" kolom "<<j<<" :";
				cin>>matriksA[i][j];
			}
		}
		cout<<endl;
		
		//utk menampilkan matriks
		cout<<"Elemen Matriks A"<<endl;
		for(int i=0;i<baris;i++)
		{
			for(int j=0;j<kolom;j++)
			{
				cout<< matriksA[i][j] <<"\t";
			}
		}
		cout<<endl;
		
		//input elemen matriks b
		for(int i=0;i<baris;i++)
		{
			for(int j=0;j<kolom;j++)
			{
				cout<<"Masukkan elemen Matriks B baris "<<i<<" kolom "<<j<<" :";
				cin>>matriksB[i][j];
			}
		}
		cout<<endl;
		
		//utk menampilkan matriks
		cout<<"Elemen Matriks B"<<endl;
		for(int i=0;i<baris;i++)
		{
			for(int j=0;j<kolom;j++)
			{
				cout<<matriksB[i][j]<<"\t";
			}
		}
		cout<<endl;
		
		//perkalian matriks
		for(int i=0;i<baris;i++)
		{
			for(int j=0;j<kolom;j++)
			{
				for(int k=0;k<baris;k++)
				{
					jml = jml + matriksA[i][k]*matriksB[k][j];
				}
				hasil[i][j]=jml;
				jml=0;
			}
		}
		cout<<endl;
		
		//menampilkan perkalian matriks
		cout<<"HASIL PERKALIAN MATRIKS A DAN B"<<endl;
		for(int i=0;i<baris;i++)
		{
			for(int j=0;j<kolom;j++)
			{
				cout<<" "<<hasil[i][j]<<" | ";
			}
		}
	}
	
	else //jika baris dan kolom tidak sama
	{
		cout<<"Ordo matriks tidak sama"<<endl;
	}
}
