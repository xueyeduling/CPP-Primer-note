#include <iostream>

using std::string;

typedef string Type;
// string
Type initVal();
class Exercise {
public:
	typedef double Type;
	// double double
	Type setVal(Type);
	// double
	Type initVal();
private:
	int val;
};
// string double
//Type Exercise::setVal(Type parm) {
Exercise::Type Exercise::setVal(Type parm) {
	// ExerciseÖÐµÄinitVal
	val = parm + initVal();
	return val;
}

Exercise::Type Exercise::initVal()
{
	return 1;
}

int main()
{
	system("pause");
	return 0;
}