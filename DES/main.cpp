#include <QCoreApplication>
# include <iostream>
#include <des.h>

using namespace std;

void clrscr()
{
    for(int i = 0; i < 50; i++)
        cout<<endl;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Des d1,d2;
    char *str=new char[1000];
    char *str1=new char[1000];
    clrscr(); //чистка экрана
    //strcpy(str,"PHOENIX it & ece solutions.");
    cout<<"Enter a string : ";
    gets(str);
    str1=d1.Encrypt(str);
    cout<<"\ni/p Text: "<<str<<endl;
    cout<<"\nCypher  : "<<str1<<endl;
    //	 ofstream fout("out2_fil.txt"); fout<<str1; fout.close();
    cout<<"\no/p Text: "<<d2.Decrypt(str1)<<endl;
    //getch();

    return a.exec();
}


