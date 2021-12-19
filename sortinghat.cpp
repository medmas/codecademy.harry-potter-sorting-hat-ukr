#include <iostream>
#include <string>
using namespace std;

int main(){
setlocale (LC_ALL, "ua");

 int gryffindor = 0;
 int hufflepuff = 0;
 int ravenclaw = 0;
 int slytherin = 0;

 int answer1;
 int answer2;
 int answer3;
 int answer4;
 
 int max = 0;
 string house;
cout << "++++++++++++++++++++++++++++++++++" << endl;
cout << "\t" << "Сортування капелюхом!" << "\t" << endl;
cout << "++++++++++++++++++++++++++++++++++" << endl;

// Перше питання.
cout << "Коли я помру, я хочу щоб люди мене запам'ятали як: " << endl;
cout << "1) Хорошим" << endl << "2) Великим" << endl << "3) Мудрим" << endl << "4) Сміливим" << endl;

cout << "Введіть варіант відповіді: " << endl;
cin >> answer1;

if (answer1 == 1) {
  hufflepuff ++;
  } else if (answer1 == 2) {
    slytherin += 2;
  } else if (answer1 == 3) {
     ravenclaw += 3;
  } else if (answer1 == 4) {
     gryffindor += 4;
  } else {
   cout << "Некоректне введення!" << endl;
  }


// Друге питання.
 cout << "Світанок чи смерканок?: " << endl;
cout << "1) Світанок" << endl << "2) Смерканок" << endl;

cout << "Введіть варіант відповіді: " << endl;
cin >> answer2;

if (answer2 == 2) {
  hufflepuff ++;
  slytherin ++;
  } else if (answer2 == 1) {
     ravenclaw += 2;
     gryffindor += 2;
  } else {
   cout << "Некоректне введення!" << endl;
  }


// Третє питання.
cout << "Який музичний інструмент найбільш приємний твоєму слухові? : " << endl;
cout << "1) Скрипка" << endl << "2) Труба" << endl << "3) Піаніно" << endl << "4) Барабан" << endl;

cout << "Введіть варіант відповіді: " << endl;
cin >> answer3;

if (answer3 == 2) {
  hufflepuff + 5;
  } else if (answer3 == 1) {
    slytherin += 4;
  } else if (answer3 == 3) {
     ravenclaw += 3;
  } else if (answer3 == 4) {
     gryffindor += 2;
  } else {
   cout << "Некоректне введення!" << endl;
  }


// Питання четверте.
cout << "Яка дорога тобі найбільш імпонує? : " << endl;
cout << "1) Широка, сонячно трав'яниста" << endl << "2) Вузька, темна, заросша алея" << endl << "3) Звивиста, закинута, лісова" << endl << "4) Пряма, кам'яна, через місто" << endl;

cout << "Введіть варіант відповіді: " << endl;
cin >> answer4;

if (answer4 == 1) {
  hufflepuff ++;
  } else if (answer4 == 2) {
    slytherin ++;
  } else if (answer4 == 4) {
     ravenclaw ++;
  } else if (answer4 == 3) {
     gryffindor ++;
  } else {
   cout << "Некоректне введення!" << endl;
  }

cout << "Результат: " << endl << "Грифіндор \t" << gryffindor << endl << "Хуфелпуф \t" << hufflepuff << endl << "Слизерін \t" << slytherin << endl << "Рейвенкло \t" << ravenclaw << endl << endl;

if (gryffindor > max) {
 
  max = gryffindor;
  house = "Грифіндор";
 
}
 
if (hufflepuff > max) {
 
  max = hufflepuff;
  house = "Хуфелпуф";
 
}
 
if (ravenclaw > max) {
 
  max = ravenclaw;
  house = "Рейвенкло";
 
}
 
if (slytherin > max) {
 
  max = slytherin;
  house = "Слизерін";
 
}
 

cout << "Ти належиш до " << house << "!\n";
  return 0;
}
