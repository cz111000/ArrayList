#include "ArrayList.cpp"

class A
{
private:
	int a;
public:
	A(int a = 3):a(a) {}
	friend ostream& operator<<(ostream& out, A a);
};

ostream& operator<<(ostream& out, A a)
{
	out << a.a;
	return out;
}

int main(int argc,char* argv[])
{


	return 0;
}