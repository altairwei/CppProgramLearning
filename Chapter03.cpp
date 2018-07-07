#include <stdlib.h>
#include <vector>
#include <string>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::system;
using std::vector;
using std::printf;

int main()
{
	cout << "Hello World ! \nThis Program is for C++ Vector Learning \n" << endl;
	cout << "There are 4 programs, please choose one of them: " << endl;
	printf( "\nOptions:\n"
				"	1. Grades Statistics\n"
				"	2. Upper Words\n"
				"	3. Sum Ints\n"
				"	4. Double Vector\n" );

	unsigned int programID;
	cin >> programID;
	cin.clear();
	cin.ignore();

	switch (programID) {
		case 1:
		{
			//No.1 Grades Statistics
			cout << "\nNo.1 Grades Statistics\nPlease keyin some scores:" << endl;

			//统计各个分数段的频率
			vector<unsigned> scores(11, 0);
			unsigned grade;
			while (cin >> grade) {
				if (grade <= 100)
					++scores[grade / 10];
			}

			//输出结果
			for (auto p : scores) {
				cout << p << " ";
			}

			cout << endl;

			//清空缓冲区
			cin.clear();
			cin.ignore();

			break;
		}
			
		case 2:
		{
			//No.2 Upper Words
			cout << "\nNo.2 Upper Words\nPlease keyin some words:" << endl;

			vector<string> words;
			string word;
			while (cin >> word) {
				if (word == "\\") break;
				words.push_back(word);
			}

			for (string &w : words) {
				//将每个字大写
				for (char &a : w) {
					a = toupper(a);
				}

				cout << w << "\n";
			}

			cout << endl;

			//清空缓冲区
			cin.clear();
			cin.ignore();

			break;
		}
			
		case 3:
		{
			//No.3 Sum Ints
			cout << "\nNo.3 Sum Ints\nPlease keyin some ints:" << endl;

			vector<int> integers;
			int integer;
			while (cin >> integer) {
				integers.push_back(integer);
			}

			for (auto it = integers.begin(); it != integers.end() -1 ; ++it) {
				int sum = *it + *(it + 1);
				cout << sum << " ";
			}

			cout << endl;
			
			auto beg = integers.begin();
			auto end = integers.end() - 1;
			while (beg < end) {
				int sum = *(beg++) + *(end--);
				cout << sum << " ";
			}

			cout << endl;

			break;
		}

		case 4:
		{
			//No.4 Double×vector
			cout << "\n现在有一个含有10个整数2的向量:\n";
			vector<int> Nums(10, 2);

			for (auto it = Nums.begin(); it != Nums.end(); ++it) {
				cout << *it << " ";
				*it = 2 * *it;
			}

			cout << "\n\n接下来将每个元素扩大两倍……\n\n下面是扩大后的向量：\n";
			for (auto it = Nums.cbegin(); it != Nums.cend(); ++it) {
				cout << *it << " ";
			}

			cout << endl;

			break;
		}
			
	}

	system("pause");

    return 0;
}

