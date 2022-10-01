// TUGAS PEMROGRAMAN TETI LABSKILL 2022 //
// HAFIDH HUSNA_MAXWELL //

#include <iostream>

using namespace std;

int
main ()
{
//Variables Declaration
  float temp; //Since The Input Of The Data Are In Decimal, Variable Declaration in Float Data Type
  int sesak_napas, anosmia; //Since The Input Of The Data Are In Integers, Variable Declaration in Integer Data Type
//Program Starts
//User's Input
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
//Checking The Inputs From User
  if (temp >= 37.5) //First Condition
    if (anosmia == 1) //Second Condition
      if (sesak_napas == 1) //Third Condition
	cout << //If All Three Conditions Are Met
	  "Kesimpulan : Anda Memiliki Gejala COVID-19, Segera Lakukan Tes PCR dan Lakukan Konsultasi dengan Dokter\n";
      else //If Only The First and Second Conditions Are Met
	cout <<
	  "Kesimpulan : Anda Memiliki Gejala Ringan COVID-19, Segera Lakukan Tes PCR atau Isolasi Mandiri\n";
    else //If Only The First Condition Are Met
      cout <<
	"Kesimpulan : Suhu Tubuh Anda Tinggi, Pulihkan Diri dengan Istirahat di Rumah\n";
  else //If There's No Condition Are Met
    cout << "Kesimpulan : Aman";
  return 0;
}
