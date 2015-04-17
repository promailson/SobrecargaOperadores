#include <iostream>

using namespace std;

class ponto
{
	int x, y;
public:
	ponto(){
		x = 0;
		y = 0;
	}
	ponto(int a, int b)
	{
		x = a;
		y = b;
	}
	void imprimir(){
		cout << x << " " << y << endl;
	}
	int getx(){
		return x;
	}
	int gety(){
		return y;
	}
	ponto operator+(ponto p);
	ponto operator+(int i);
	friend ponto operator+(int i, ponto p);
	friend ostream &operator<< (ostream &, ponto);
	
};

ponto ponto::operator+(ponto p){
		int a, b;
		a = x+p.x;
		b = y+p.y;
		return ponto(a,b);
}
ponto ponto::operator+(int i){
	int a,b;
	a = x+i;
	b = y+i;
	return ponto(a,b);
}
ponto operator+(int i, ponto p){
	int a, b;
	a = p.x + i;
	b = p.y+i;
	return ponto(a,b);
	
}
ostream &operator<<(ostream &saida, ponto p)
{
	saida << p.x << "/" << p.y <<endl;
	return saida;
}
int main()
{
	ponto p1(1, 5);
	ponto p2(3, 4);
	p1.imprimir();
	p2.imprimir();
	ponto Soma;

	Soma = p1 + p2;
	Soma.imprimir();
	Soma = Soma +5;
	Soma.imprimir();
	Soma = 6 + Soma;
	cout << Soma;
	
	return 0;
}
