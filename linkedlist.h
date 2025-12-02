#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include "array1d.h"
using namespace std;

struct Node {
    KTP data;
    Node* next;
};

static Node* head = nullptr;

void addLinkedList(KTP data) {
    Node* baru = new Node();
    baru->data = data;
    baru->next = nullptr;

    if (!head) head = baru;
    else {
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = baru;
    }
}

void tampilLinkedList() {
    if (!head) {
        cout << "Belum ada data dalam Linked List!" << endl;
        return;
    }

    Node* temp = head;
    int i = 1;
    while (temp) {
        cout << "\n--- Data KTP ke-" << i++ << " ---" << endl;
        cout << "NIK : " << temp->data.nik << endl;
        cout << "Nama : " << temp->data.nama << endl;
        cout << "TTL : " << temp->data.tempatLahir << ", " << temp->data.tanggalLahir << endl;
        cout << "Jenis Kelamin : " << temp->data.jenisKelamin << endl;
        cout << "Golongan Darah : " << temp->data.golonganDarah << endl;
        cout << "Alamat : " << temp->data.alamat << " RT " << temp->data.rt 
             << " / RW " << temp->data.rw << endl;
        cout << "Kel/Desa : " << temp->data.kelurahan << endl;
        cout << "Kecamatan : " << temp->data.kecamatan << endl;
        cout << "Agama : " << temp->data.agama << endl;
        cout << "Status Perkawinan : " << temp->data.statusPerkawinan << endl;
        cout << "Pekerjaan : " << temp->data.pekerjaan << endl;
        cout << "Kewarganegaraan : " << temp->data.kewarganegaraan << endl;
        cout << "Berlaku Hingga : " << temp->data.berlakuHingga << endl;
        temp = temp->next;
    }
}

#endif
