#include <iostream>

using namespace::std;
struct kuliah {
string nama,nim,prodi;
};

kuliah nyata;


 int hasil;
    char huruf;

void n ()
{   cout<<" \nnama  ="; cin>>nyata.nama;
    cout<<"\nnim    =";   cin>>nyata.nim;
    cout<<"\nPRODI  ="; cin>>nyata.prodi;

    if (hasil>=81)
    huruf='a';
    else if (hasil>=61)
    huruf='b';
    else if (hasil>=41)
    huruf='c';
    else if (hasil>=11)
    huruf='d';

    else
        huruf='e';
    cout<<" grasde nilai "<<huruf;

}

double masukan (string kata)
{

    double nilai;
    cout<<"masukan nilai"<<kata; cin>>nilai;
}

main ()
{


    double uts, uas, tugas, absen;
    uts=masukan (" uts =");
    uas=masukan (" UAS =");
    tugas=masukan (" TUGAS =");
    absen=masukan (" ABSEN =");
    hasil=uts*0.2+uas*0.3+tugas*0.35+absen*0.15;


    cout<<" hasil =";
cout<<hasil;
n();
}
