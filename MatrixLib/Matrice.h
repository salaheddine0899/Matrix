#pragma once
#include <iostream>
using namespace std;
namespace LA {
	class Matrice
	{
	private:
		int ligne;
		int col;
		int** mat = nullptr;
	public:
		Matrice(int, int);
		void Remplissage(int);
		Matrice& operator+(const Matrice& m);
		Matrice& operator-(const Matrice& m);
		Matrice& operator*(const Matrice& m);
		Matrice& operator*(const int& m);
		~Matrice();
		void print() const;
	};
}
