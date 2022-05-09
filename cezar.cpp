#include <iostream>

using namespace std;

int main{
  setlocale(LC_ALL, "RUS"); // С днём локализации
  int step, i, j, choose;
  const char alphabet[] =  "abcdefghijklmnopqrstuvwxyz";
  const int poweralpha = 26; // мощность алфавита
  wchar_t message[2000]; // cимвольный широкий тип данных (С днём пробела)
  cout << "чё надо быдло? 1 - шифрование, 2 - дешифровка, 0 - выход" << endl;
  cin >> choose >> endl;
  switch(choose){
    case 0:
      exit(0);
    break;
    case 1:
      cout << "Введи сообщение" << endl;
      cin.ignore();
      wcin.getline(message, 2000);
      cout << "Введи шаг" << endl;
      cin >> step;
      for(i=0; i<2000; i++){
        for(j = 0; j<poweralpha; j++){
          if (message[i]==alphabet[j]){
          message [i] = alphabet[(j + step) % 26];
            break;
          }
        }
      }
      wcout<< L"зашифрованное сообщение " << message << endl;   // буковка L литерал из аски в юникод фигачим
      break;
    case 2:
      cout << "Введи сообщение" << endl;
      cin.ignore();
      wcin.getline(message, 2000);
      cout << "Введи шаг" << endl;
      cin >> step;
      for(i=0; i<2000; i++){
        for(j = 0; j<poweralpha; j++){
          if (message[i]==alphabet[j]){
            if ((j - step) < 0){
              j+=poweralpha // новое значение j = старое + павер альфа
              message [i] = alphabet[(j - step) % 26];
            }
            else
            message [i] = alphabet[(j - step) % 26];
            break;
          }
        }
      }
      wcout<< L"Расшифрованное сообщение " << message << endl;   // буковка L литерал из аски в юникод фигачим
      break;
  }
  system ("pause");
}
