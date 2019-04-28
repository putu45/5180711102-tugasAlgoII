#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;
 main()
 {
 	struct digimon{
 		int dmg;
 		char nama[200];
 	
	 };
	 digimon dgm[10];
	 digimon temp;
	 int data,i,b,ketemu,ganti,baru,a;
	 int c,ban,x,z,y;
	 string cari;
	 
	 cout<<"\t\t\t\t============PROGRAM DATA DIGIMON============";
	 
	 cout<<"\nMasukan jumlah data:";cin>>data;
	for(int i=1;i<=data;++i){
		cout<<"Masukan nama digimon ke-"<<i<<":";cin>>dgm[i].nama;
		cout<<"Masukan attack Damage digimon ke-"<<i<<":";cin>>dgm[i].dmg;
		cout<<endl;
		}
	for(int i=1;i<=data;i++)
	{
		cout<<"\nNama digimon ke-"<<i<<":"<<dgm[i].nama;
		cout<<"\nDamage digimon ke-"<<i<<":"<<dgm[i].dmg;
	}system("CLS");	
	for(int i=1;i<=data;i++)
	{
		for(b=1;b<=(data-1);++b)
		{
		if(dgm[b].dmg > dgm[b+1].dmg)
		{
		temp.dmg=dgm[b].dmg;
		dgm[b].dmg=dgm[b+1].dmg;
		dgm[b+1].dmg=temp.dmg;
		
		strcpy(temp.nama,dgm[b].nama);
		strcpy(dgm[b].nama,dgm[b+1].nama);
		strcpy(dgm[b+1].nama,temp.nama);
		}
		}
	}
	cout<<endl;
	cout<<"\nDATA SETELAH DI SORTING DARI DAMAGE TERKECIL";
	cout<<"\n==============================================";
	for(int i=1;i<=data;++i)
	{
		cout<<"\nNama Digimon ke-"<<i<<":"<<dgm[i].nama;
		cout<<"\nAttack Damage Digimon ke-"<<i<<":"<<dgm[i].dmg;
		
	}
	cout<<"\nMasukan Nama Digimon yang di cari:";
	cin>>cari;
	ketemu=0;
	for(int i=1;i<=data;i++)
	
	if(dgm[i].nama==cari)
	{
	ketemu=1;
	cout<<"================================================";
	cout<<"\nNama Digimon  di temukan pada indeks ke-"<<i;
	cout<<"\n================================================";
	}
	if(ketemu=0)
    {
        cout<<"================================================";
		cout<<"nama tak di temukan";
		cout<<"\n================================================";
    }cout<<endl;
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout<<"\nNERF/BUFF DAMAGE DIGIMON";
    cout<<"\n++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout<<"\nMasukan Index Digimon Yang Ingin Di Nerf/Buff:";
    cin>>ganti;
    cout<<"\nMasukan Damage Baru:";
    cin>>baru;
    a=ganti;
    dgm[a].dmg=baru;
    cout<<"\n================================================";
    cout<<"\nData Digimon Setelah Damage Di Nerf/Buff:";
	for(int c=1;c<=data;c++)
	{
	cout<<"\nNama Digimon ke-"<<c<<":"<<dgm[c].nama;
	cout<<"\nAttack Damage Digimon ke-"<<c<<":"<<dgm[c].dmg;
	}
	cout<<"\n================================================";
	cout<<endl;
	cout<<"\n-------------------------------------------------";
	cout<<"\nBanned Digimon";
	cout<<"\n-------------------------------------------------";
	cout<<"\nMasukan Index Digimon Yang Ingin Di Banned:";
	cin>>ban;
	x=ban;
	cout<<"\nDigimon yang DiBanned:"<<dgm[x].nama<<" Pada Index ke-"<<x;
	cout<<"\nDigimon Tersisa:";
	for(x=ban;x<=data;x++)
	{
	dgm[x].dmg= dgm[x+1].dmg;	
	}
	for(z=1;z<=data-1;z++)
	{
	cout<<"\nNama Digimon ke-"<<z<<":"<<dgm[z].nama;
	cout<<"\nAttack Damage Digimon ke-"<<z<<":"<<dgm[z].dmg;
	}
}
