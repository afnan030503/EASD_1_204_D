1.//sangat di butuhkan karna dari setiap masalah harus di analisa terlebih dahulu satu persatu supaya dapat menentukan penyelesaian yang sesuai dari masalah tersebut 
// 2.struktur data dibedakan menjadi dua yaitu 
  //-statik (ukuran tetap,tidak bisa berubah) array digunakan saat struktur datanya sudah tertentu atau valid
  //-dinamis (fleksibel bisa di tambah dan di kurang) belum di ketahui data nya 
// 3faktor faktor yang mempengaruhi efesiensi dalam suatu program
// - kecepatan prosesor
//-compiler yang bertugas sebagai menerjemahkan dari pmrograman menjadi bahasa komputer
//- operatting system
// - bahasa pemrograman
// - ukuran sesuai input 
// 4.buble sort bagi saya adalah yang paling mudah dipahami dan sederhana cocok jika mengurut kan data yang sedikit 
// 5.-kuadratic :bublesort,selectionsort,insertionsort,shellsort
  // -logliner  :mergesort,quicksort 

#include <iostream>
#include <string>

    using namespace std;

void input(int afnan[04], int & n) {
    cout << "Masukkan jumlah data (maksimum " << n << "): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> afnan[i];
    }
}

void selectionSort(int AM, int afnan[], int n) {
    int i, AM, min_idx; 
    for (i = 0; i < n - 1; i++)
    {
        min_idx = i;
        for (AM = i + 1; AM < n; AM++) {
            if (afnan[AM] < afnan[min_idx]) {
                min_idx = AM;
            }
        }
        int temp = afnan[i];
        afnan[i] = afnan[min_idx];
        afnan[min_idx] = temp;
    }
}
void display(int afnan[], int n) {
    cout << "Data yang telah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << afnan[i] << " ";
    }
    cout << endl;
}

int main() {
    int afnan[04], n;
    input(afnan, n);

    selectionSort('AM' + 'A', afnan, n);

    display(afnan, n);
    return 0;
}