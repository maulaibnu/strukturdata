#include <iostream>
#include <stdio.h>
#include <iomanip>
#include <stdlib.h>

using namespace std;

struct Node
{
	long data;
	Node *next;
	Node *prev;
};

Node *head;
Node *tail;
Node *print;
Node *del;
Node *entry;

void inisialisasi()
{
	head = NULL;
	tail = NULL;
}

int isEmpty()
{
	if (head == NULL)
		return true;
	else
		return false;
}

void input(int *data)
{
	entry = new Node;
	entry->data = *data;
	entry->next = NULL;
	entry->prev = NULL;
	
	if(isEmpty())
	{
		head = entry;
		head->next = NULL;
		head->prev = NULL;
		tail = head;
	}
	else
	{
		tail->next = entry;
		entry->prev = tail;
		tail = entry;
	}
}

void hapus()
{
	int simpan;
	if (head != NULL)
	{
		if (head->next != NULL)
		{
			del = head;
			simpan = head->data;
			cout<<"\n"<<simpan<<" telah dihapus"<<endl;
			head = head->next;
			head->prev = NULL;
			delete del;
		}
		else
		{
			simpan = head->data;
			cout<<"\n"<<simpan<<" telah dihapus"<<endl;
			head = NULL;
		}
	}
	else
	cout<<"\nLinked list masih kosong"<<endl;
}

void cetak()
{
	print = head;
	if (head != NULL)
	{
		while (print != NULL)
		{
			cout<<"\n\t"<<print->data;
			print = print->next;
		}
	}
	else
		cout<<"\nTidak ada data yang ditampilkan"<<endl;
}

void menu ()
{
	char pilih,ulang;
	int data;
	do
	{
		system("cls");
		menu:
			cout<<"================"<<endl;
			cout<<"PROGRAM DOUBLE LINKED LIST"<<endl;
			cout<<"================"<<endl;
			cout<<"Pilih Menu"<<endl;
			cout<<"1. Entri Data"<<endl;
			cout<<"2. Hapus data"<<endl;
			cout<<"3. Tampilkan semua data"<<endl;
			cout<<"4. Keluar"<<endl;
			cout<<"================"<<endl;
			cout<<"Masukkan pilihan anda: "<<endl;
			cin>>pilih;
			
			switch (pilih)
			{
				case '1':
					cout<<"\nMasukkan data: ";
					cin>>data;
					input(&data);
					cout<<"\n"<<data<<" telah dimasukkan"<<endl;
					break;
				case'2':
					hapus();
					break;
				case '3':
					cetak();
					break;
				case '4':
					cout<<"\nTerima kasih telah menggunakan program ini"<<endl;
					exit(EXIT_SUCCESS); 
					break;
				default:
					system("cls");
					cout<<"\Pilih ulang"<<endl;
					cout<<endl;
					goto menu;
			}
			cout<<"\nKembali ke menu? (Y/N)? ";
			cin>>ulang;
			
	} while (ulang == 'y' || ulang == 'Y');
}

int main()
{
	inisialisasi();
	menu();
	return EXIT_SUCCESS;
}
