#include <iostream>
using namespace std;

// SOAL & JAWABAN
//
// 1. Jelaskan bagaimana algoritma Bubble Sort membandingkan serta menukar elemen-elemen.?
// 	  Jawab : Dengan cara diurutkan secara berulang dengan membandingkan pasangan elemen yang berdekatan dalam sebuah array dan menukarnya, sehingga elemen-elemen yang lebih besar bergerak ke arah akhir array. Proses ini berulang-ulang hingga tidak ada lagi pertukaran yang perlu dilakukan, yang menandakan bahwa array sudah terurut.
// 
// 2. Jelaskan bagaimana algoritma Shell Sort membandingkan serta menukar elemen-elemen.
// 	  Jawab : Shell Sort mengurutkan array dengan membandingkan elemen yang terpisah jauh dan kemudian membentuk beberapa sublist. Lalu kemudian mengaplikasikan insertion sort di tiap sublist untuk memindahkan elemen ke posisi yang benar.
// 
// 3. Dalam algorithma sortir, jika data sudah ada beberapa yang berurutan, maka algorithma mana yang harus dipilih? Jelaskan mengapa.
// 	  Jawab : Menggunakan algoritma Shell Sort, karena jika ada beberapa data yang sudah berurut, akan lebih efisien menggunakan Shell Sort
//
// 4. Konversi Algorithma berikut kedalam C++:
// 	  Jawab :

int Yurcel[72];
int n;

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 12)
            break;
        else {
            cout << "\nArray dpat mempunyai maksimal 12 elemen. \n";
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen Array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) { 
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> Yurcel[i];
    }
}

void insertionSort() {

    int i, temp, j;

    for (i = 1; i <= n - 1; i++) {
        temp = Yurcel[i];  
        j = i - 1; 
        while (j >= 0 && Yurcel[j] > temp)
        {
            Yurcel[j + 1] = Yurcel[j]; 
            j = j - 1;
        }
        Yurcel[j + 1] = temp;

    }
}

void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << Yurcel[j];
        if (j < n - 1) {
            cout << " ---> ";
        }
    }
    cout << endl;
    cout << endl;
    cout << " Jumlah Pass = " << n - 1 << endl;
    cout << endl;
    cout << endl;
}
int main()
{
 
    input();
    insertionSort();
    display();

    system("pause");
    return 0;
  
}

