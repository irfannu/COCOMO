#include<iostream>
using namespace std;
#include<locale.h>
#include<math.h>//Say�n�n �ss�n� alan pow kodunu kullanabilmek i�in bu k�t�phaneyi ekliyoruz.
main()
{
     setlocale(LC_ALL,"Turkish");
     double in,satirsayisi,satir,isgucu,zaman; int a,b,sec,sec2,ain,ain1,ain2,ain3,ain4,ain5,ain6,ain7,ain8,ain9,ain10,ain11,ain12,ain13,ain14,ain15,tkf,tkf1,tkf2,tkf3,tkf4,tkf5,tkf6,tkf7,tkf8,tkf9,tkf10; float sonuc;
    
    //Ayarlanmam�� i�lev noktas�n� hesaplamak i�in kullan�c�ya sorular soruyoruz.
	 cout<<"AYARLANMAMI� ��LEV NOKTASI HESAPLAMA:\n------\n";
	 cout<<"KULLANICI G�RD� SAYISI (YALIN): "; cin>>ain1;
	 cout<<"KULLANICI G�RD� SAYISI (ORTALAMA): "; cin>>ain2;
	 cout<<"KULLANICI G�RD� SAYISI (KARMA�IK): "; cin>>ain3;
	 cout<<"KULLANICI �IKTI SAYISI (YALIN): "; cin>>ain4;
	 cout<<"KULLANICI �IKTI SAYISI (ORTALAMA): "; cin>>ain5;
	 cout<<"KULLANICI �IKTI SAYISI (KARMA�IK): "; cin>>ain6;
	 cout<<"KULLANICI SORGU SAYISI (YALIN): "; cin>>ain7;
	 cout<<"KULLANICI SORGU SAYISI (ORTALAMA): "; cin>>ain8;
	 cout<<"KULLANICI SORGU SAYISI (KARI�IK): "; cin>>ain9;
	 cout<<"K�T�K SAYISI (YALIN): "; cin>>ain10;
	 cout<<"K�T�K SAYISI (ORTALAMA): "; cin>>ain11;
	 cout<<"K�T�K SAYISI (KARI�IK): "; cin>>ain12;
	 cout<<"DI�SAL ARAY�Z SAYISI (YALIN): "; cin>>ain13;
	 cout<<"DI�SAL ARAY�Z SAYISI (ORTALAMA): "; cin>>ain14;
	 cout<<"DI�SAL ARAY�Z SAYISI (KARI�IK): "; cin>>ain15;
	 
	 //Ayarlanmam�� i�lem noktas�'n�n say�s� hesaplayarak "ain" de�i�kenine e�itliyoruz.
	 ain=ain1+ain2+ain3+ain4+ain5+ain6+ain7+ain8+ain9+ain10+ain11+ain12+ain13+ain14+ain15;

	//Teknik karma��kl�k form�l�n� hesaplamak i�in kullan�c�ya sorular soruyoruz. 
	 cout<<"\nTEKN�K KARMA�IKLIK FORM�L�  HESAPLAMA:" <<ain <<"\n-------\n";
	 
	 cout<<"A�A�IDAK� SORULARA 0-5 ARASINDA DE�ER G�R�N�Z:\n------\n ";
	 cout<<"Uygulama, g�venilir yedekleme ve kurtarma gerektiriyor mu? : "; cin>>tkf1;
	 cout<<"Veri �leti�imi gerektiriyor mu? : "; cin>>tkf2;
	 cout<<"Da��t�lm�� i�lemler var m�? : "; cin>>tkf3;
	 cout<<"Performans kritik mi? : "; cin>>tkf4;
	 cout<<"Girdiler,��kt�lar,dosyalar ya da sorgular kar���k m�? : "; cin>>tkf5;
	 cout<<"��sel i�lemler var m�? : "; cin>>tkf6;
	 cout<<"Tasarlanacak kod yeniden kullan�labilir mi? : "; cin>>tkf7;
	 cout<<"D�n��t�rme ve kurulum tasar�mda dikkate al�nacak m�? : "; cin>>tkf8;
	 
	 //Teknik karma��kl�k say�s�n� hesaplayarak "tkf" de�i�kenine e�itliyoruz.
	 tkf=tkf1+tkf2+tkf3+tkf4+tkf5+tkf6+tkf7+tkf8;
	
	 // ��lev noktas� say�s�n� hesapl�yoruz ve "in" de�i�kenine e�itliyoruz.(Sat�r say�s�n� bulmak i�in i�lev noktas�n� bulmam�z gerekiyor.)
    in=ain*0.0065*tkf; 
	  cout<<"\n��LEV NOKTASI SAYISI:"<<in;
     	cout<<"\n";
	 
	 //Kullan�c�dan kullanaca�� programlama dilini soruyoruz ve sat�r say�s�n� hesapl�yoruz.(�arpt���m�z say�lar form�lden geliyor.)
     cout<<"\nKULLANACA�INIZ PROGRAMLAMA D�L�N� SE��N�Z: \n------\n1-ASSEMBLY\n2-COBOL\n";
     cout<<"3-FORTRAN\n4-PASCAL\n5-C\n6-ADA\n7-NESNE K�KENL� D�LLER\n8-4.KU�AK D�LLER\n9-KOD �RET�C�LER\nSE�ENE��N�Z: ";
     cin>>sec;
     switch(sec)
     {			
                case 1: satirsayisi=in*300; break;
                case 2: satirsayisi=in*100; break;
                case 3: satirsayisi=in*100; break;
                case 4: satirsayisi=in*90; break;
                case 5: satirsayisi=in*90; break;
                case 6: satirsayisi=in*70; break;
                case 7: satirsayisi=in*30; break;
                case 8: satirsayisi=in*20; break;
                case 9: satirsayisi=in*15; break;       
                        
     }
     //Yukar�da kod sat�r say�s�n� bin tipinde hesaplad���m�z i�in yeni bir de�i�kende kod say�s�n� bine b�l�yoruz. Bu sayede ger�ek kod sat�r
     //say�s� ortaya ��k�yor ve bunuda "satir" de�i�kenine e�itliyoruz.
     satir=satirsayisi/1000;
     	cout<<"\nKOD SATIR SAYISI:"<<satirsayisi;
     		cout<<"\n";
     
     //Kullan�c�ya kullanaca�� proje tipini soruyoruz ve i�g�c� ve zaman� hesapl�yoruz.(De�erler Form�lden geliyor.)
     cout<<"\nPROJE SINIFINI SE��N�Z: \n------\n1-AYRIK PROJELER\n2-YARI G�M�L�\n";
     cout<<"3-G�M�L� PROJELER\nSE�ENE��N�Z: ";
     cin>>sec;
     switch(sec)
     {			
                case 1: isgucu=pow(satir,1.05)*2.4; zaman=pow(isgucu,0.38)*2.5; break;
                case 2: isgucu=pow(satir,1.12)*3; zaman=pow(isgucu,0.35)*2.5; break;
                case 3: isgucu=pow(satir,1.2)*3.6; zaman=pow(isgucu,0.32)*2.5; break;   
                        
     }
     
     cout<<"\n�� G�c�: "<<isgucu;
     cout<<"\nZaman: "<<zaman;
     
     cout<<"\n\n"; system("pause");
}
