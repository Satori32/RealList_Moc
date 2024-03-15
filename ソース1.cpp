#include <iostream>
#include <map>
#include <cstdint>

//this is moc of real thing Having and move.
//we needs unifyde call syntax.
//it is advance by the inherit.

template<class T>
class List {
public:
	typedef std::map<double, T> List_T;

	bool forWard() {
		X += M;
		return true;
	}
	bool BackWard() {
		X -= M;
		return true;
	}
	T& Take() {
		return L[X / M];
	}

	bool SetM(double V) {
		M = V;
		return true;
	}

	T& operator [](double In) {
		X += In;
		return L[(X / M)];
	}

protected:
	List_T L;
	double M = 10;
	double X = 0;
};

int main() {
	List<int> L;

	std::cout << L[10.5] << std::endl;

	return 0;
}