#include <iostream>
#include<windows.h>
#include<time.h>

using namespace std;



void gotoxy(int x, int y) {
	COORD p = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), p);
}

bool KEY[256];
void GetKEY()
{
	int i = 0;
	while (i < 256)
	{
		if (GetAsyncKeyState(i)) KEY[i] = 1; else KEY[i] = 0;
		i++;
	}
}


void perenos(int x, int y) {
	COORD position_1 = { x,y }; //позиция x и y
	HANDLE hConsole_1 = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hConsole_1, position_1);
}


void all() {
	setlocale(LC_ALL, "Ukrainian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));




	int what = 0;
	gotoxy(0, 30);
	cout << "виберіть режим 1 - одиночной 2- на двоих" << endl;
	gotoxy(0, 31);
	cin >> what;

	if (what == 1) {
		gotoxy(0, 0);
		int verh = 13;
		int right = 25;

		for (int i = 0; i < right; i++) {
			cout << "*";
		}
		cout << endl;
		for (int j = 0; j < verh; j++) {
			for (int i = 0; i < 24; i++) {
				cout << " ";
				if (i == 23) {
					cout << "*" << endl;
				}
			}
		}

		for (int i = 0; i < 25; i++) {
			cout << "*";
		}
		//верх
		perenos(2, 8);

		cout << "*";
		//середня
		perenos(2, 9);
		cout << "*";
		//низ
		perenos(2, 10);
		cout << "*";
		//мяч
		perenos(7, 8);
		cout << "o";


		//нічого
		perenos(25, 25);
		cout << " ";
		int i = 8;
		int i1 = 9;
		int i2 = 10;
		//обробка клавиш

		int obman_x = 7;
		int obman_y = 8;
		int k = obman_x;
		int perevirka = 1;
		int chochik = 0;
		gotoxy(80, 0);
		cout << "щочик балов:  ";
		gotoxy(93, 0);
		cout << chochik;
		gotoxy(90, 0);
		gotoxy(100, 0);

		cout << "ник:  ";
		int x_y = 0;
		//1 верх
		int predel = 0;
		x_y = 1 + rand() % (2);


		while (1)
		{





			//мяч
			if (perevirka == 1) {
				if (obman_x <= 22) {
					perenos(obman_x, obman_y);
					cout << " ";

					obman_x++;

					perenos(obman_x, obman_y);
					cout << "o";
					Sleep(50);
					if (obman_x == 22) {
						perevirka = 2;
					}
				}
			}

			else if (perevirka == 2) {



				if (x_y == 1) {
					if (obman_y >= 1) {


						perenos(obman_x, obman_y);
						cout << " ";

						obman_x--;
						obman_y--;
						perenos(obman_x, obman_y);
						cout << "o";

						Sleep(85);
					}
					if (obman_y == 1) {
						x_y = 2;

					}


				}

				if (x_y == 2) {
					if (obman_y != 12) {
						perenos(obman_x, obman_y);
						cout << " ";

						obman_x--;
						obman_y++;
						perenos(obman_x, obman_y);
						cout << "o";

						Sleep(85);
					}
					if (obman_y == 12) {
						x_y = 1;

					}



				}
				if (obman_x == i  & obman_x == i1 & obman_x == i2 & obman_y == i & obman_y == i1 & obman_y == i2) {
					perevirka = 1;


				}



















			}






			GetKEY();

			//обрлбка верх
			if (KEY[38])
			{

				if (i >= verh - 11) {
					//закраска старих
					i++;
					i1++;
					i2++;
					perenos(2, i);
					cout << " ";
					perenos(2, i1);
					cout << " ";

					perenos(2, i2);
					cout << " ";
					//+ в верх
					i--;
					i1--;
					i2--;

					i--;
					i1--;
					i2--;
					perenos(2, i);
					cout << "*";
					perenos(2, i1);
					cout << "*";

					perenos(2, i2);
					cout << "*";

				}


			}
			//обробка вниз
			else
				if (KEY[40])
				{
					if (i <= verh - 3) {
						//закраска старих
						i--;
						i1--;
						i2--;
						perenos(2, i);
						cout << " ";
						perenos(2, i1);
						cout << " ";
						perenos(2, i2);
						cout << " ";
						//+ в верх
						i++;
						i1++;
						i2++;

						i++;
						i1++;
						i2++;
						perenos(2, i);
						cout << "*";
						perenos(2, i1);
						cout << "*";

						perenos(2, i2);
						cout << "*";

					}



				}

		}
		//обробка мяча



	}


	else if (what == 2) {
		//начало
		//коробка
		gotoxy(0, 0);
		for (int i = 0; i < 25; i++) {
			cout << "*";
		}
		cout << endl;
		for (int j = 0; j < 13; j++) {
			for (int i = 0; i < 24; i++) {
				cout << " ";
				if (i == 23) {
					cout << "*" << endl;
				}
			}
		}

		for (int i = 0; i < 25; i++) {
			cout << "*";
		}
		//верх
		perenos(2, 8);

		cout << "*";
		//середня
		perenos(2, 9);
		cout << "*";
		//низ
		perenos(2, 10);
		cout << "*";
		//мяч
		perenos(7, 8);
		cout << "0";





		//верх
		perenos(20, 8);

		cout << "*";
		//середня
		perenos(20, 9);
		cout << "*";
		//низ
		perenos(20, 10);
		cout << "*";
		//мяч
		perenos(7, 8);
		cout << "o";


		//нічого
		perenos(25, 25);
		cout << " ";



		int i = 8;
		int i1 = 9;
		int i2 = 10;


		int i_1 = 8;
		int i1_1 = 9;
		int i2_1 = 10;

		int obman_x = 7;
		int obman_y = 8;
		int k = obman_x;
		int perevirka = 0;
		int chochik = 0;
		int igroki = 0;
		gotoxy(80, 0);
		cout << "щочик балов:  ";
		gotoxy(93, 0);
		cout << chochik;
		gotoxy(90, 0);
		gotoxy(100, 0);

		cout << "ник:  ";

		cout << "ник:  ";
		int rand1 = 1;
		int rand2 = 1;
		//1 right 2 left

		//1 up 2 down
		while (1) {


			if (rand1 == 1) {


				gotoxy(obman_x, obman_y);
				cout << "0";
				if (rand2 == 1) {
					if (obman_y != 2 and obman_x != 18) {
						obman_x++;
						obman_x++;
						obman_y--;
						gotoxy(obman_x, obman_y);
						cout << "o";



						obman_x--;
						obman_x--;
						obman_y++;
						gotoxy(obman_x, obman_y);
						cout << " ";
						obman_x++;
						obman_x++;
						obman_y--;
						Sleep(90);

					}

					if (obman_x >= 17) {
						rand2 = 2;
					}
				}

				else if (rand2 == 2) {
					if (obman_y != 12 and obman_x != 4) {
						obman_x--;
						obman_x--;
						obman_y++;
						gotoxy(obman_x, obman_y);
						cout << "o";



						obman_x++;
						obman_x++;
						obman_y--;
						gotoxy(obman_x, obman_y);
						cout << " ";
						obman_x--;
						obman_x--;
						obman_y++;
						Sleep(90);

					}

					if (obman_x >= 4) {
						rand2 = 1;
					}

				}



			}










			GetKEY();

			//обрлбка верх
			if (KEY[38]) //нажат ентер
			{

				if (i >= 3) {
					//закраска старих
					i++;
					i1++;
					i2++;
					COORD position_1 = { 2,i }; //позиция x и y
					HANDLE hConsole_1 = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole_1, position_1);
					cout << " ";
					COORD position_2 = { 2,i1 }; //позиция x и y
					HANDLE hConsole_2 = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole_2, position_2);
					cout << " ";

					COORD position_3 = { 2,i2 }; //позиция x и y
					HANDLE hConsole_3 = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole_3, position_3);
					cout << " ";
					//+ в верх
					i--;
					i1--;
					i2--;

					i--;
					i1--;
					i2--;
					COORD position = { 2,i }; //позиция x и y
					HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole, position);
					cout << "*";
					COORD position1 = { 2,i1 }; //позиция x и y
					HANDLE hConsole1 = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole1, position1);
					cout << "*";

					COORD position2 = { 2,i2 }; //позиция x и y
					HANDLE hConsole2 = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole2, position2);
					cout << "*";
					Sleep(50);
				}


			}
			//обробка вниз
			else
				if (KEY[40]) //нажат пробел
				{
					if (i <= 10) {
						//закраска старих
						i--;
						i1--;
						i2--;
						COORD position_1 = { 2,i }; //позиция x и y
						HANDLE hConsole_1 = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole_1, position_1);
						cout << " ";
						COORD position_2 = { 2,i1 }; //позиция x и y
						HANDLE hConsole_2 = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole_2, position_2);
						cout << " ";

						COORD position_3 = { 2,i2 }; //позиция x и y
						HANDLE hConsole_3 = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole_3, position_3);
						cout << " ";
						//+ в верх
						i++;
						i1++;
						i2++;

						i++;
						i1++;
						i2++;
						COORD position = { 2,i }; //позиция x и y
						HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole, position);
						cout << "*";
						COORD position1 = { 2,i1 }; //позиция x и y
						HANDLE hConsole1 = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole1, position1);
						cout << "*";

						COORD position2 = { 2,i2 }; //позиция x и y
						HANDLE hConsole2 = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole2, position2);
						cout << "*";
						Sleep(50);
					}



				}

			//1




			if (KEY[87]) //нажат ентер
			{

				if (i_1 >= 3) {
					//закраска старих
					i_1++;
					i1_1++;
					i2_1++;
					COORD position_1 = { 20,i_1 }; //позиция x и y
					HANDLE hConsole_1 = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole_1, position_1);
					cout << " ";
					COORD position_2 = { 20,i1_1 }; //позиция x и y
					HANDLE hConsole_2 = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole_2, position_2);
					cout << " ";

					COORD position_3 = { 20,i2_1 }; //позиция x и y
					HANDLE hConsole_3 = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole_3, position_3);
					cout << " ";
					//+ в верх
					i_1--;
					i1_1--;
					i2_1--;

					i_1--;
					i1_1--;
					i2_1--;
					COORD position = { 20,i_1 }; //позиция x и y
					HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole, position);
					cout << "*";
					COORD position1 = { 20,i1_1 }; //позиция x и y
					HANDLE hConsole1 = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole1, position1);
					cout << "*";

					COORD position2 = { 20,i2_1 }; //позиция x и y
					HANDLE hConsole2 = GetStdHandle(STD_OUTPUT_HANDLE);
					SetConsoleCursorPosition(hConsole2, position2);
					cout << "*";
					Sleep(50);
				}


			}
			//обробка вниз
			else
				if (KEY[83]) //нажат пробел
				{
					if (i_1 <= 10) {
						//закраска старих
						i_1--;
						i1_1--;
						i2_1--;
						COORD position_1 = { 20,i_1 }; //позиция x и y
						HANDLE hConsole_1 = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole_1, position_1);
						cout << " ";
						COORD position_2 = { 20,i1_1 }; //позиция x и y
						HANDLE hConsole_2 = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole_2, position_2);
						cout << " ";

						COORD position_3 = { 20,i2_1 }; //позиция x и y
						HANDLE hConsole_3 = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole_3, position_3);
						cout << " ";
						//+ в верх
						i_1++;
						i1_1++;
						i2_1++;

						i_1++;
						i1_1++;
						i2_1++;
						COORD position = { 20,i_1 }; //позиция x и y
						HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole, position);
						cout << "*";
						COORD position1 = { 20,i1_1 }; //позиция x и y
						HANDLE hConsole1 = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole1, position1);
						cout << "*";

						COORD position2 = { 20,i2_1 }; //позиция x и y
						HANDLE hConsole2 = GetStdHandle(STD_OUTPUT_HANDLE);
						SetConsoleCursorPosition(hConsole2, position2);
						cout << "*";
						Sleep(50);
					}



				}

			if (obman_x <= 3) {


				gotoxy(50, 100);
				cout << "игра окончена ви проиграли";
				cout << endl;

				gotoxy(50, 101);
				cout << "допобаченя";
				Sleep(5000);
				break;




			}
		}
		//обробка мяча

	}








}



//конец












int main()
{
	setlocale(LC_ALL, "Ukrainian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(NULL));
	
	all();


}



// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
