#include<iostream>
using namespace std;

class SubSytemOne{
public:
	void MethodOne(){
		cout << "SubSytem 1" << endl;
	}
};

class SubSytemTwo{
public:
	void MethodTwo(){
		cout << "SubSytem 2" << endl;
	}
};

class SubSytemThree{
public:
	void MethodThree(){
		cout << "SubSytem 3" << endl;
	}
};

class Facade{
public:
	Facade(){
		pOne = new SubSytemOne();
		pTwo = new SubSytemTwo();
		pThree = new SubSytemThree();
	}

	void MethodA(){
		cout << "Facade::MethodA" << endl;
		pOne->MethodOne();
		pTwo->MethodTwo();
	}

	void MethodB(){
		cout << "Facade::MethodB" << endl;
		pTwo->MethodTwo();
		pThree->MethodThree();
	}

private:
	SubSytemOne *pOne;
	SubSytemTwo *pTwo;
	SubSytemThree *pThree;

};


int main(){

	Facade *pFacade = new Facade();
	pFacade->MethodA();
	pFacade->MethodB();

	system("pause");
	return 0;
}