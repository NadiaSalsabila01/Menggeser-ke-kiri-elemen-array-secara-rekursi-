#ifndef ARRAY1D_H
#define ARRAY1D_H

#include <iostream>
#include "ktp.h"
using namespace std;

const int MAX = 100;
static KTP dataArray[MAX];
static int jumlahData = 0;

void addArray(KTP data) {
    if (jumlahData < MAX) {
        dataArray[jumlahData] = data;
        jumlahData++;
    } else {
        cout << "Array penuh!" << endl;
    }
}

void tampilArray() {
    if (jumlahData == 0) {
        cout << "Belum ada data dalam Array!" << endl;
        return;
    }

    for (int i = 0; i < jumlahData; i++) {
        cout << "\n--- Data KTP ke-" << i + 1 << " ---" << endl;
        cout << "NIK : " << dataArray[i].nik << endl;
        cout << "Nama : " << dataArray[i].nama << endl;
        cout << "TTL : " << dataArray[i].tempatLahir << ", " << dataArray[i].tanggalLahir << endl;
        cout << "Jenis Kelamin : " << dataArray[i].jenisKelamin << endl;
        cout << "Golongan Darah : " << dataArray[i].golonganDarah << endl;
        cout << "Alamat : " << dataArray[i].alamat << " RT " << dataArray[i].rt 
             << " / RW " << dataArray[i].rw << endl;
        cout << "Kel/Desa : " << dataArray[i].kelurahan << endl;
        cout << "Kecamatan : " << dataArray[i].kecamatan << endl;
        cout << "Agama : " << dataArray[i].agama << endl;
        cout << "Status Perkawinan : " << dataArray[i].statusPerkawinan << endl;
        cout << "Pekerjaan : " << dataArray[i].pekerjaan << endl;
        cout << "Kewarganegaraan : " << dataArray[i].kewarganegaraan << endl;
        cout << "Berlaku Hingga : " << dataArray[i].berlakuHingga << endl;
    }
}

#endif
