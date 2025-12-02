#ifndef KTP_H
#define KTP_H

#include <iostream>
using namespace std;

struct KTP {
    char nik[20];
    char nama[50];
    char tempatLahir[50];
    char tanggalLahir[20];
    char jenisKelamin[15];
    char golonganDarah[5];
    int rt, rw;
    char alamat[100];
    char kelurahan[50];
    char kecamatan[50];
    char agama[20];
    char statusPerkawinan[20];
    char pekerjaan[50];
    char kewarganegaraan[20];
    char berlakuHingga[20];
};

#endif
