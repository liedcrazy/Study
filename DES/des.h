#ifndef DES_H
#define DES_H

/*
class Des
{
public:
    Des();
};
*/
/*  DES Encryption & Decryption Code */

# include <stdio.h>
# include <fstream>
# include <string.h>
# include <conio.h>
# include <iostream>
# include <cstring>
# include <QString>


class Des
{
public:
int keyi[16][48], // ключ для каждого раунда
total[64],
left[32],
right[32],
ck[28], // С и D по 28 бит каждый
dk[28], //
expansion[48],
z[48],
xor1[48],
sub[32],
p[32],
xor2[32],
temp[64],
pc1[56],
ip[64],
inv[8][8];

int key[64]={
0,0,0,1,0,0,1,1,
0,0,1,1,0,1,0,0,
0,1,0,1,0,1,1,1,
0,1,1,1,1,0,0,1,
1,0,0,1,1,0,1,1,
1,0,1,1,1,1,0,0,
1,1,0,1,1,1,1,1,
1,1,1,1,0,0,0,1
};

//char final[1000];
QString final;
void IP();
void PermChoice1();
void PermChoice2();
void Expansion();
void inverse();
void xor_two();
void xor_oneE(int);
void xor_oneD(int);
void substitution();//int newParameter = 14
void permutation();
void keygen();
QString Encrypt(QString Text);
QString Decrypt(QString Text);
};


#endif // DES_H
