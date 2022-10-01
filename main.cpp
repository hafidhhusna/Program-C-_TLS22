/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  float temp, batuk, sesak_napas, anosmia;
  cout << "Silahkan Masukkan Suhu Tubuh Anda : \n";
  cin >> temp;
  cout <<
    "Apakah Anda Memiliki Kesulitan dalam Mencium Aroma atau Mengecap Rasa?\n";
  cout << "1. Ya\n";
  cout << "2. Tidak\n";
  cin >> anosmia;
  cout << "Apakah Anda Memiliki Gejala Sesak Napas?\n";
  cout << "1. Ya\n";
  cout << "2. Tidak\n";
  cin >> sesak_napas;
  if (temp >= 37.5)
    if (anosmia == 1)
      if (sesak_napas == 1)
	cout <<
	  "Kesimpulan : Anda Memiliki Gejala COVID-19, Segera Lakukan Tes PCR dan Lakukan Konsultasi dengan Dokter\n";
      else
	cout <<
	  "Kesimpulan : Anda Memiliki Gejala Ringan COVID-19, Segera Lakukan Tes PCR atau Isolasi Mandiri\n";
    else
      cout <<
	"Kesimpulan : Suhu Tubuh Anda Tinggi, Pulihkan Diri dengan Istirahat di Rumah\n";
  else
    cout << "Kesimpulan : Aman";
  return 0;
}
