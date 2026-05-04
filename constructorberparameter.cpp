#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
public:
    mahasiswa(int nim, string name);
};

mahasiswa::mahasiswa(int nim, string name) {
    cout << "Contructor dengan parameter terpaanggil: " << endl;
    cout << "NIM: " << nim << endl;
    cout << "Name: " << name << endl;
}

int main() {
    mahasiswa mhs(12345, "pascal");
    return 0;
}