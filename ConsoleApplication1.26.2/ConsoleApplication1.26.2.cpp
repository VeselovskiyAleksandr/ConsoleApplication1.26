// ConsoleApplication1.26.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//Урок 23. Задача 2. Анализ заполненности вагонов в поезде.

#include <iostream>
#include <locale.h>
#include <vector>

#define TRAIN( wagon, number) wagon ##_## number
#define TRAIN( wagon, passengers) wagon ##_##passengers
#define NUMPAS for(int i=0;i<10;i++)
#define OVER(passengers, nominal) ((passengers) > (nominal)) 
#define EMPTY(passengers, nominal) ((passengers)< (nominal))
#define VECT(trainPas)
using namespace std;



int main()
{
	setlocale(LC_ALL, "Rus");
	int sum = 0, nominal = 20;
	int wagon_number, wagon_passengers;
	vector <int> trainPas;
	cout << "\nКоличество пассажиров \n";
	NUMPAS{
	cout << "в вагоне №";
		 TRAIN(wagon, number) = i + 1;
		 cout << TRAIN(wagon, number) << " ";
		 cin >> TRAIN(wagon, passengers);
		trainPas.push_back(TRAIN(wagon, passengers));
	}
	cout << "\nИзбыточное число пассажиров ";
	int count = 0;
	NUMPAS{
		TRAIN(wagon, number) = i + 1;
		TRAIN(wagon, passengers) = trainPas[i];
		if (OVER(TRAIN(wagon, passengers), nominal)) {
	  cout << "\n" << "в вагоне №" << TRAIN(wagon, number) << " " << TRAIN(wagon, passengers) << " человек";
	  count++;
}
	}
		if (count == 0) {
			cout << "\nВ поезде нет переполненных вагонов.";
		}
	cout << "\nНедостаточное количество пассажиров: ";
	count = 0;
	NUMPAS{
		TRAIN(wagon, number) = i + 1;
		TRAIN(wagon,passengers ) = trainPas[i];
		if (EMPTY(TRAIN(wagon, passengers), nominal)) {
	  cout << "\n" << "в вагоне №" << TRAIN(wagon, number) << " " << TRAIN(wagon, passengers) << " человек";
	  count++;
}
	}
		if (count == 0) {
			cout << "\nВ поезде нет вагонов c недостаточным количеством пассажиров.";
		}	
	NUMPAS{
		TRAIN(wagon, number) = i + 1;
		TRAIN(wagon,passengers) = trainPas[i]; 
		sum += TRAIN(wagon, passengers);
	}
	cout << "\nВсего в поезде " << sum << " пассажиров.";
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
