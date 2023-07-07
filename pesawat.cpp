#include <iostream>
#include<fstream>
#include<string.h>
using namespace std;

int glob=0;
int global=10;

class d_booking {
protected:
    int pnr;
    char f_d[10],toja[7],tojd[7];
    long int doj;
    int choice,src,dest;
public:
    void d_pnr()
    {
        glob++; 
        pnr=glob;
    }
    int j_detail() 
    {
        cout << "\nMasukkan Tanggal Keberangkatan(DDMMYY)." << "Masukkan Sesuai hari keberangkatanmu." <<  endl;
        cin >> doj;
        cout << "\1.Jakarta(1) \t\2.Bandung(2) \t\3.Yogyakarta(3) \t\4.Bali(4)" << endl << endl;
        cout << "\tMasukkan Asal" << endl;
        cin >> src;
        cout << "\tMasukkan Tujuan" << endl;
        cin >> dest;
        if((src==1 && dest==2) || (src==2 && dest==1))
        {
            cout << "\t \t \tPenerbangan ditemukan" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t08:00\t\t11:05\t\tRp 1.250.000\t\tRefundable\n";
            cout << "\2.Batik Air(2)\t14:00\t\t17:05\t\tRp 950.000\t\tRefundable\n";
            cout << "\3.Lion Air(3)\t19:00\t\t22:05\t\tRp 650.000\t\tRefundable\n";
        }

        else if((src==1 && dest==3) || (src==3 && dest==1))
        {
            cout << "\t \t \tPenerbangan ditemukan" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t08:00\t\t11:05\t\tRp 1.250.000\t\tRefundable\n";
            cout << "\2.Batik Air(2)\t14:00\t\t17:05\t\tRp 950.000\t\tRefundable\n";
            cout << "\3.Lion Air(3)\t19:00\t\t22:05\t\tRp 650.000\t\tRefundable\n";
        }

        else if((src==1 && dest==4) || (src==4 && dest==1))
        {
            cout << "\t \t \tPenerbangan ditemukan" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t08:00\t\t11:05\t\tRp 1.250.000\t\tRefundable\n";
            cout << "\2.Batik Air(2)\t14:00\t\t17:05\t\tRp 950.000\t\tRefundable\n";
            cout << "\3.Lion Air(3)\t19:00\t\t22:05\t\tRp 650.000\t\tRefundable\n";
        }

        else if((src==2 && dest==3) || (src==3 && dest==2))
        {
            cout << "\t \t \tPenerbangan ditemukan" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t08:00\t\t11:05\t\tRp 1.250.000\t\tRefundable\n";
            cout << "\2.Batik Air(2)\t14:00\t\t17:05\t\tRp 950.000\t\tRefundable\n";
            cout << "\3.Lion Air(3)\t19:00\t\t22:05\t\tRp 650.000\t\tRefundable\n";
        }

        else if((src==2 && dest==4) || (src==4 && dest==2))
        {
            cout << "\t \t \tPenerbangan ditemukan" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t08:00\t\t11:05\t\tRp 1.250.000\t\tRefundable\n";
            cout << "\2.Batik Air(2)\t14:00\t\t17:05\t\tRp 950.000\t\tRefundable\n";
            cout << "\3.Lion Air(3)\t19:00\t\t22:05\t\tRp 650.000\t\tRefundable\n";
        }
        else if((src==3 && dest==4) || (src==4 && dest==3))
         {
            cout << "\t \t \tPenerbangan ditemukan" << endl << endl;
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t08:00\t\t11:05\t\tRp 1.250.000\t\tRefundable\n";
            cout << "\2.Batik Air(2)\t14:00\t\t17:05\t\tRp 950.000\t\tRefundable\n";
            cout << "\3.Lion Air(3)\t19:00\t\t22:05\t\tRp 650.000\t\tRefundable\n";
        }
        else if(src==dest)
        {
            cout << "\nAsal dan Tujuan tidak bisa sama.\nCoba Lagi\n\n\n" << endl;
            return j_detail();
        }
        else
        {
            cout <<"\nSalah dalam pemasukan\nCoba Lagi\n\n\n" << endl;
            return j_detail();
        }

    }

    int  select_flight()
    {   cout << "\nMasukkan Pilihanmu" << endl;
        cin >> choice;
        switch(choice)
        {
          case 1:
                cout << "\nPenerbangan Dipilih:"<<endl;
                cout << "Garuda"<<endl;
                strcpy(f_d,"Garuda");
                cout << "Departure Time : 08:00"<<endl;
                cout<<"Arrival Time: 11:05"<<endl;
                strcpy(tojd,"8:00");
                strcpy(toja,"11:05");
                break;
          case 2:
                cout << "\nPenerbangan Dipilih:"<<endl;
                cout << "Batik Air"<<endl;
                strcpy(f_d,"Batik Air");
                cout << "Departure Time : 14:00"<<endl;
                cout<<"Arrival Time: 17:05"<<endl;
                strcpy(tojd,"14:00");
                strcpy(toja,"17:05");
                break;
          case 3:
                cout << "\nPenerbangan Dipilih:" << endl;
                cout << "Lion Air" << endl;
                strcpy(f_d,"Lion Air");
                cout << "Departure Time : 19:00" << endl;
                cout<<"Arrival Time: 22:05" << endl;
                strcpy(tojd,"19:00");
                strcpy(toja,"22:05");
                break;
          default:
                cout << "Kesalahan Pemilihan.\nCoba Lagi" << endl;
                return select_flight();
        }
    }
};

class i_booking
{
protected:
    int pnri;
    char f_i[10],tojai[7],tojdi[7];
    long int doji;
    int srci,desti,choicei;
public:
    void i_pnr()
    {
        global++;
        pnri=global;
    }
    
    int j_detaili()
    {
        cout << "\nMasukkan Tanggal Keberangkatan(DDMMYY)." << "Masukkan Sesuai hari keberangkatanmu." <<  endl;
        cin >> doji;
        cout << "\1.Indonesia(1) \2.Australia(2) \3.Malaysia(3) \4.Singapore(4) \5.Brunei(5) " << endl << endl;
        cout << "\tMasukkan Asal : " ;
        cin >> srci;
        cout << "\nMasukkan Tujuan : " ;
        cin >> desti;
        cout << "\t \t \tPenerbangan Ditemukan" << endl << endl;

        if((srci==1 && desti==3) || (srci==3 && desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t10:00\t\t14:05\t\tRp 2.250.000\t\tRefundable\n";
            cout << "\2.Adam Air(2)\t14:00\t\t18:05\t\tRp 1.950.000\t\tRefundable\n";
            cout << "\3.Sukhoi(3)\t18:00\t\t22:05\t\tRp 1.650.000\t\tRefundable\n";
        }

        else if((srci==1 && desti==4) || (srci==4 && desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t10:00\t\t14:05\t\tRp 2.250.000\t\tRefundable\n";
            cout << "\2.Adam Air(2)\t14:00\t\t18:05\t\tRp 1.950.000\t\tRefundable\n";
            cout << "\3.Sukhoi(3)\t18:00\t\t22:05\t\tRp 1.650.000\t\tRefundable\n";
        }

        else if((srci==1 && desti==5) || (srci==5 || desti==1))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t10:00\t\t14:05\t\tRp 2.250.000\t\tRefundable\n";
            cout << "\2.Adam Air(2)\t14:00\t\t18:05\t\tRp 1.950.000\t\tRefundable\n";
            cout << "\3.Sukhoi(3)\t18:00\t\t22:05\t\tRp 1.650.000\t\tRefundable\n";
        }

        else if((srci==2 && desti==3) || (srci==3 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t10:00\t\t14:05\t\tRp 2.250.000\t\tRefundable\n";
            cout << "\2.Adam Air(2)\t14:00\t\t18:05\t\tRp 1.950.000\t\tRefundable\n";
            cout << "\3.Sukhoi(3)\t18:00\t\t22:05\t\tRp 1.650.000\t\tRefundable\n";
        }

        else if((srci==2 && desti==4) || (srci==4 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t10:00\t\t14:05\t\tRp 2.250.000\t\tRefundable\n";
            cout << "\2.Adam Air(2)\t14:00\t\t18:05\t\tRp 1.950.000\t\tRefundable\n";
            cout << "\3.Sukhoi(3)\t18:00\t\t22:05\t\tRp 1.650.000\t\tRefundable\n";
		
		}

        else if(srci==2 && desti==5 || (srci==5 && desti==2))
        {
            cout << "Airline:\tDeparture:\tArrival:\tPrice:\t\t\tCategory:\n";
            cout << "\1.Garuda(1)\t10:00\t\t14:05\t\tRp 2.250.000\t\tRefundable\n";
            cout << "\2.Adam Air(2)\t14:00\t\t18:05\t\tRp 1.950.000\t\tRefundable\n";
            cout << "\3.Sukhoi(3)\t18:00\t\t22:05\t\tRp 1.650.000\t\tRefundable\n";

        }
        else if(srci==desti)
        {
            cout << "Kesalahan Input.\nCoba Lagi\n\n\n"<< endl;
            return j_detaili();
        }
        else
            {
            cout << "Kesalahan Input.\nCoba Lagi\n\n\n"<< endl;
            return j_detaili();
        }

    }

    int select_flighti()
    {
        cout << "\nMasukkan Pilihanmu" << endl;
        cin >> choicei;
        switch(choicei)
        {
        case 1:
            cout << "\nPenerbangan Dipilih:" <<endl;
            cout << "Garuda" << endl;
            strcpy(f_i,"Garuda");
            cout << "Departure Time: 10:00" << endl;
            cout << "Arrival Time: 14:05" << endl;
            strcpy(tojdi,"10:00");
            strcpy(tojai,"14:05");
            break;
        case 2:
              cout << "\nPenerbangan Dipilih:" <<endl;
               cout << "Adam Air" << endl;
               strcpy(f_i,"Adam Air");
               cout << "Departure Time: 14:00" << endl;
               cout << "Arrival Time: 18:05" << endl;
               strcpy(tojdi,"14:00");
                strcpy(tojai,"18:05");
                break;
        case 3:
            cout << "\nPenerbangan Dipilih:" <<endl;
            cout << "Sukhoi" << endl;
            strcpy(f_i,"Sukhoi");
            cout << "Departure Time : 18:00" << endl;
            cout << "Arrival Time: 22:05" << endl;
            strcpy(tojdi,"18:00");
            strcpy(tojai,"22:05");
            break;
        default:
            cout << "Kesalahan Input" << endl;
            return select_flighti();
        }
    }
};


class passenger: public d_booking,public i_booking
{
protected:
    char f_name[20],l_name[20],email[50];
    int age,gender;
    long int c_no;
public:
    void p_detail(int x)
    {   if(x==1)
        { j_detail();
          select_flight();
        }
          else
          {  j_detaili();
             select_flighti();
          }
        cout << "\n\n\nMasukkan identitas penumpang";
        cout << "\nNama Awalan : ";
        cin >> f_name;
        cout << "Nama Terakhir :";
        cin >> l_name;
    }
    int gender_check()
    {
        cout << "\nGender:\nLaki Laki-tekan:1::\nPerempuan-tekan:2::";
        cin >> gender;
        if(gender>2)
        {
            cout << "\n\nKesalahan Input.\nCoba Lagi\n\n" << endl;
            return gender_check();
        }
    }
       void more_details()
       {
        cout << "Umur : ";
        cin >> age;
        cout << "Alamat Email : ";
        cin >> email;
        cout << "Kontak No : ";
        cin >> c_no;
        
        cout << "\n\nDetail Ticket : \n";
        cout << "=================================================================================="<<endl;
        cout << " "<<endl;
        cout << "Nama       : " << f_name << " " << l_name << endl;
        cout << "Kelamin    : " << gender << endl;
        cout << "Umur       : " << age << endl;
        cout << "Email      : " << email << endl;
        cout << "Kontak No  : " << c_no << endl;
        cout << " "<<endl;
        cout << "=================================================================================="<<endl;
    }


     int getpnr()
        {
            return pnr;
        }

     int getpnri()
     {
         return pnri;
     }

     void disp()
     {
     	 cout << "=================================================================================="<<endl;
     	 cout << " "<<endl;
         cout<<"PNR            : " << pnr << endl;
         cout<<"Flight         : " << f_d << endl;
         cout<<"Name           : " << f_name << " " << l_name << endl;
         cout<<"DOJ            : " << doj << endl;
         cout<<"Departure Time : " << tojd << endl;
         cout<<"Arrival Time   : " << toja;
         cout << " "<<endl;
         cout << "=================================================================================="<<endl;
     }

      void dispi()
     {
     	 cout << "=================================================================================="<<endl;
     	 cout << " "<<endl;
         cout<<"PNR            : " << pnri << endl;
         cout<<"Flight         : " << f_i << endl;
         cout<<"Name           : " << f_name << " " << l_name << endl;
         cout<<"DOJ            : " << doji << endl;
         cout<<"Departure Time : " << tojdi << endl;
         cout<<"Arrival Time   : " << tojai;
         cout << " "<<endl;
         cout << "=================================================================================="<<endl;
     }
};



class payment
{
protected:
    long
    int choice1,bank,card,date,cvv,user_id;
    char password[10];
public:
    void pay_detail()
    {     cout << "\n\n\nIngin Membayar Menggunakan Apa?:\n";
        cout << "\n\1.Debit Card(1) \n\2.Credit Card(2) \n\3.Net Banking(3)";
        cout << "\n\nSilahkan Pilih";
        cin >> choice1;
        switch(choice1)
        {
        case 1:
            cout << "\nMasukkan card no.:";
            cin >> card;
            cout << "\nMasukkan expiry date:";
            cin >> date;
            cout << "\nMasukkan CVV no.:";
            cin >> cvv;
            cout << "\nTransaksi Berhasil\n";
            break;
        case 2:
            cout << "\nMasukkan card no.:";
            cin >> card;
            cout << "\nMasukkan expiry date:";
            cin >> date;
            cout << "\nMasukkan password:";
            cin >> password;
            cout << "\nTransaksi Berhasil\n";
            break;
        case 3:
            cout << "Bank Yang Tersedia : \1.Bank BRI (1) \2.Bank BCA (2) \3.Bank BNI(3) \4.Bank UOB (4) \5.Lainnya(5)";
            cout << "\nSilahkan Pilih Bankmu:";
            cin >> bank;
            cout << "\nAnda Memilih : " << bank;
            cout << "\nMasukkan user id:";
            cin >> user_id;
            cout << "\nMasukkan password:";
            cin >> password;
            cout << "\nTransaksi Berhasil\n";
            break;
        default://condition
            cout << "\nKesalahan Input.\nCoba Lagi\n\n";
            return pay_detail();
        }
    }

};

void createfile(passenger p)
{  ofstream fin("domestic.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}

void cancelticket(int x)
{  passenger p;
    int f=0;
   ifstream fout("domestic.txt",ios::binary|ios::app);
   ofstream fin("domestic1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.disp();
         cout<<"\nTiket di atas Anda sedang dibatalkan :\n" << "Jumlah yang dikembalikan: Rp 500.000\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"Tiket tidak ditemukan\n";
   fout.close();
   fin.close();
   remove("domestic.txt");
   rename("domestic1.txt","domestic.txt");

}

void checkticket(int x)
{  passenger p;
   int f=0;
   ifstream fout("domestic.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnr()==x)
     {p.disp();
      cout<<"\ntiketmu"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Tiket tidak ditemukan"<<endl;

}
void createfilei(passenger p)
{  ofstream fin("international.txt",ios::binary|ios::app);
   fin.write((char*)&p,sizeof(p));
   fin.close();
}
void cancelticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary|ios::app);
   ofstream fin("international1.txt",ios::binary|ios::app);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()!=x)
      fin.write((char *)&p,sizeof(p));
      else
     {
         p.dispi();
         cout<<"\nTiket di atas Anda sedang dibatalkan :\n" << "Jumlah yang dikembalikan: Rp 900.000\n";
         f++;
     }
     fout.read((char *)&p,sizeof(p));
   }
   if(f==0)
    cout<<"\nTiket tidak ditemukan\n";
   fout.close();
   fin.close();
   remove("international.txt");
   rename("international1.txt","international.txt");

}
void checkticketi(int x)
{  passenger p;
   int f=0;
   ifstream fout("international.txt",ios::binary);
   fout.read((char *)&p,sizeof(p));
   while(fout)
   {
     if(p.getpnri()==x)
     {p.dispi();
      cout<<"\nTiketmu"<<endl;
      f++;
      break;
     }
     fout.read((char *)&p,sizeof(p));

   }
   fout.close();
   if(f==0)
   cout<<"Tiket tidak ditemukan"<<endl;

}




int main()
{

    class d_booking d1;
    class i_booking i1;
    class passenger p1;
    class payment p2;
    int ch,ch1,n;
    char input;
    do
    {
    	system("CLS");
    cout << "\n\n \t\tSelamat Datang di Ticketing Pesawat" << endl << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>\n";
    cout << "\t   Pesan tiket Pesawat Anda dengan harga terjangkau!" << endl;
    cout <<"\t   <><><><><><><><><><><><><><><><><><><><><><><>";
    
    cout << "\n\n\t\t\t\1.Book Flight(1) \n\t\t\t\2.Cancel Fight(2) \n\t\t\t\3.Check Ticket(3) \n\t\t\t\4.Exit(4)" << endl;
    cout << "\n\t\t Silahkan Dipilih : ";
    cin >> ch;
      switch(ch)
      {
          case 1:
          system("CLS");
              cout << "\n\n\1.Penerbangan Domestic(1) \n\2.Penerbangan International(2)" << endl;
              cout << "\nSilahkan Pilih Penerbangan" << endl;
              cin >> ch1;
              switch(ch1)
              {
                   case 1:
                        p1.d_pnr();
                        p1.p_detail(1);
                        p1.gender_check();
                        p1.more_details();
                        p2.pay_detail();
                        p1.disp();
                        createfile(p1);
                        break;
                   case 2:
                           p1.p_detail(2);
                           p1.i_pnr();
                           p1.gender_check();
                           p1.more_details();
                           p2.pay_detail();
                           p1.dispi();
                           createfilei(p1);
                           break;
                   default:
                    cout << "Kesalahan input\nCoba Lagi\n\n\n" << endl;
                    return main();
              }
          break;
          case 2:
              system("CLS");
              	 cout << "\n\n\1.Penerbangan Domestic(1) \n\2.Penerbangan International(2)" << endl;
              	 cout << "\nSilahkan Pilih Penerbangan" << endl;
                 cin >> ch1;
                  if(ch1==1)
                {
                   cout << "Mohon masukkan PNR no.:" << endl;
                   cin>>n;
                   cancelticket(n);
                }
                 else if(ch1==2)
               {  cout << "Mohon masukkan PNR no.:" << endl;
                  cin>>n;
                  cancelticketi(n);
               }
               else
               {
                   cout << "Kesalahan Input\nCoba Lagi\n\n\n";
                   return main();
               }
               break;
          case 3:
          system("CLS");
                  cout << "\n\n\1.Penerbangan Domestic(1) \n\2.Penerbangan International(2)" << endl;
              	  cout << "\nSilahkan Pilih Penerbangan" << endl;
                  cin >> ch1;
                  if(ch1==1)
                  {cout << "Mohon masukkan PNR no.:" << endl;
                  cin>>n;
                  checkticket(n);}
                  else if(ch1==2)
                  {  cout << "Mohon masukkan PNR no.:" << endl;
                     cin>>n;
                     checkticketi(n);
                  }
                   else
               {
                   cout << "Kesalahan Input\nCoba Lagi\n\n\n";
                   return main();
               }
               break;
            case 4:
			system("CLS"); 
			return 0; 
          default:
            cout << "Wrong input entered\nTry again.\n\n\n\n" << endl;
            return main();
      }
    cout<<"\n\n\nApakah Ingin Melanjutkan : (y/Y)" << endl;
    cin >> input;
  }while(input=='Y' || input=='y');
return 0;
}

