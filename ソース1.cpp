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

//god or faity is not use è¨êî on culc time. by histry.
//but fairy is use it. but it time is facebreakable time.so he hate it

template<class T>
class List2 {
public:
	typedef std::map <double, T > List_T;//world spec thing holder

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

	T& operator [](std::intmax_t In) {
		X += In;//why this need?
		return L[(X / M)];
	}

protected:
	List_T L;
	std::uintmax_t M = 10;
	std::uintmax_t X = 0;
};
template<class T>
class ListYaki {
public:
	//typedef std::map <double, T > List_T;//world spec thing holder
	typedef std::map <std::intmax_t, T > List_T;//refine and detune
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

	T& operator [](std::intmax_t In) {
		return L[(X / M)];
	}

protected:
	List_T L;
	std::uintmax_t M = 10;
	std::uintmax_t X = 0;
};
int main() {
	List<int> LA;

	std::cout << LA[10.5] << std::endl;

	List2<int> LB;
	std::cout << LB[10.5] << std::endl;

	ListYaki<int> LC;//little better fined list.
	LC[10.5] = 10;
	std::cout << LC[10.5] << std::endl;
	std::cout << LC[10] << std::endl;
	return 0;
}