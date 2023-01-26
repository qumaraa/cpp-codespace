/*

Этот код представляет собой программу на C++, которая находит элемент, 
который появляется в массиве только один раз. Программа содержит две части: 
              функцию findSingle и основную функцию.

Функция findSingle принимает два входных сигнала: массив целых чисел и его размер.
Функция начинается с создания неупорядоченной карты с именем count. Это особый вид 
структуры данных, который может использоваться для хранения пар ключ-значение, 
         где ключ является целым числом, а значение - целым числом.

Затем функция использует цикл for для перебора массива. Для каждого элемента в массиве
он увеличивает значение соответствующего ключа в карте подсчета на 1. Это означает, что
после цикла for карта подсчета будет содержать количество раз, когда появляется каждый элемент в массиве.

Затем функция использует другой цикл for для повторной итерации по массиву. Для каждого элемента в массиве
он проверяет, равно ли значение соответствующего ключа в карте подсчета 1. Если это так, это означает, что 
      элемент появляется в массиве только один раз, поэтому функция возвращает этот элемент.

Если функция не находит никаких элементов, которые появляются только один раз, она возвращает -1.
Основная функция - это точка входа в программу. Он начинается с создания массива целых чисел с именем arr 
и инициализации его некоторыми значениями. Затем он вычисляет размер массива путем деления общего размера 
                 массива на размер одного элемента массива.
Затем он вызывает функцию findSingle, передавая ей массив и его размер в качестве входных данных. Функция 
возвращает элемент, который появляется в массиве только один раз, и он выводится на консоль с помощью инструкции cout с сообщением.


*/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


int findOnce(const vector<int>& vec)
{
	unordered_map<int, int> count;
	for (int i = 0; i < vec.size(); ++i)
	{
		count[vec[i]]++;
	}

	
	for (int i = 0; i < vec.size(); ++i)
	{
		if (count[vec[i]] == 1)
		{
			return vec[i];
		}
	}
	return -1;
}


int main(int argc, const char* argv[])
{


	vector<int> vec{ 1,1,1,2,2,2,3,3,3,4 };
	int res = findOnce(vec);
	cout << res;

	return 0;
}
