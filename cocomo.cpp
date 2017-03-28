#include<iostream>
using namespace std;
#include<locale.h>
#include<math.h>//Sayýnýn üssünü alan pow kodunu kullanabilmek için bu kütüphaneyi ekliyoruz.
main()
{
     setlocale(LC_ALL,"Turkish");
     double in,satirsayisi,satir,isgucu,zaman; int a,b,sec,sec2,ain,ain1,ain2,ain3,ain4,ain5,ain6,ain7,ain8,ain9,ain10,ain11,ain12,ain13,ain14,ain15,tkf,tkf1,tkf2,tkf3,tkf4,tkf5,tkf6,tkf7,tkf8,tkf9,tkf10; float sonuc;
    
    //Ayarlanmamýþ iþlev noktasýný hesaplamak için kullanýcýya sorular soruyoruz.
	 cout<<"AYARLANMAMIÞ ÝÞLEV NOKTASI HESAPLAMA:\n------\n";
	 cout<<"KULLANICI GÝRDÝ SAYISI (YALIN): "; cin>>ain1;
	 cout<<"KULLANICI GÝRDÝ SAYISI (ORTALAMA): "; cin>>ain2;
	 cout<<"KULLANICI GÝRDÝ SAYISI (KARMAÞIK): "; cin>>ain3;
	 cout<<"KULLANICI ÇIKTI SAYISI (YALIN): "; cin>>ain4;
	 cout<<"KULLANICI ÇIKTI SAYISI (ORTALAMA): "; cin>>ain5;
	 cout<<"KULLANICI ÇIKTI SAYISI (KARMAÞIK): "; cin>>ain6;
	 cout<<"KULLANICI SORGU SAYISI (YALIN): "; cin>>ain7;
	 cout<<"KULLANICI SORGU SAYISI (ORTALAMA): "; cin>>ain8;
	 cout<<"KULLANICI SORGU SAYISI (KARIÞIK): "; cin>>ain9;
	 cout<<"KÜTÜK SAYISI (YALIN): "; cin>>ain10;
	 cout<<"KÜTÜK SAYISI (ORTALAMA): "; cin>>ain11;
	 cout<<"KÜTÜK SAYISI (KARIÞIK): "; cin>>ain12;
	 cout<<"DIÞSAL ARAYÜZ SAYISI (YALIN): "; cin>>ain13;
	 cout<<"DIÞSAL ARAYÜZ SAYISI (ORTALAMA): "; cin>>ain14;
	 cout<<"DIÞSAL ARAYÜZ SAYISI (KARIÞIK): "; cin>>ain15;
	 
	 //Ayarlanmamýþ iþlem noktasý'nýn sayýsý hesaplayarak "ain" deðiþkenine eþitliyoruz.
	 ain=ain1+ain2+ain3+ain4+ain5+ain6+ain7+ain8+ain9+ain10+ain11+ain12+ain13+ain14+ain15;

	//Teknik karmaþýklýk formülünü hesaplamak için kullanýcýya sorular soruyoruz. 
	 cout<<"\nTEKNÝK KARMAÞIKLIK FORMÜLÜ  HESAPLAMA:" <<ain <<"\n-------\n";
	 
	 cout<<"AÞAÐIDAKÝ SORULARA 0-5 ARASINDA DEÐER GÝRÝNÝZ:\n------\n ";
	 cout<<"Uygulama, güvenilir yedekleme ve kurtarma gerektiriyor mu? : "; cin>>tkf1;
	 cout<<"Veri Ýletiþimi gerektiriyor mu? : "; cin>>tkf2;
	 cout<<"Daðýtýlmýþ iþlemler var mý? : "; cin>>tkf3;
	 cout<<"Performans kritik mi? : "; cin>>tkf4;
	 cout<<"Girdiler,çýktýlar,dosyalar ya da sorgular karýþýk mý? : "; cin>>tkf5;
	 cout<<"Ýçsel iþlemler var mý? : "; cin>>tkf6;
	 cout<<"Tasarlanacak kod yeniden kullanýlabilir mi? : "; cin>>tkf7;
	 cout<<"Dönüþtürme ve kurulum tasarýmda dikkate alýnacak mý? : "; cin>>tkf8;
	 
	 //Teknik karmaþýklýk sayýsýný hesaplayarak "tkf" deðiþkenine eþitliyoruz.
	 tkf=tkf1+tkf2+tkf3+tkf4+tkf5+tkf6+tkf7+tkf8;
	
	 // Ýþlev noktasý sayýsýný hesaplýyoruz ve "in" deðiþkenine eþitliyoruz.(Satýr sayýsýný bulmak için iþlev noktasýný bulmamýz gerekiyor.)
    in=ain*0.0065*tkf; 
	  cout<<"\nÝÞLEV NOKTASI SAYISI:"<<in;
     	cout<<"\n";
	 
	 //Kullanýcýdan kullanacaðý programlama dilini soruyoruz ve satýr sayýsýný hesaplýyoruz.(Çarptýðýmýz sayýlar formülden geliyor.)
     cout<<"\nKULLANACAÐINIZ PROGRAMLAMA DÝLÝNÝ SEÇÝNÝZ: \n------\n1-ASSEMBLY\n2-COBOL\n";
     cout<<"3-FORTRAN\n4-PASCAL\n5-C\n6-ADA\n7-NESNE KÖKENLÝ DÝLLER\n8-4.KUÞAK DÝLLER\n9-KOD ÜRETÝCÝLER\nSEÇENEÐÝNÝZ: ";
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
     //Yukarýda kod satýr sayýsýný bin tipinde hesapladýðýmýz için yeni bir deðiþkende kod sayýsýný bine bölüyoruz. Bu sayede gerçek kod satýr
     //sayýsý ortaya çýkýyor ve bunuda "satir" deðiþkenine eþitliyoruz.
     satir=satirsayisi/1000;
     	cout<<"\nKOD SATIR SAYISI:"<<satirsayisi;
     		cout<<"\n";
     
     //Kullanýcýya kullanacaðý proje tipini soruyoruz ve iþgücü ve zamaný hesaplýyoruz.(Deðerler Formülden geliyor.)
     cout<<"\nPROJE SINIFINI SEÇÝNÝZ: \n------\n1-AYRIK PROJELER\n2-YARI GÖMÜLÜ\n";
     cout<<"3-GÖMÜLÜ PROJELER\nSEÇENEÐÝNÝZ: ";
     cin>>sec;
     switch(sec)
     {			
                case 1: isgucu=pow(satir,1.05)*2.4; zaman=pow(isgucu,0.38)*2.5; break;
                case 2: isgucu=pow(satir,1.12)*3; zaman=pow(isgucu,0.35)*2.5; break;
                case 3: isgucu=pow(satir,1.2)*3.6; zaman=pow(isgucu,0.32)*2.5; break;   
                        
     }
     
     cout<<"\nÝþ Gücü: "<<isgucu;
     cout<<"\nZaman: "<<zaman;
     
     cout<<"\n\n"; system("pause");
}
