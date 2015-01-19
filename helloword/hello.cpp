#include <iostream>
using namespace std;
//声明
class Point;
Point operator-(Point &a, Point &b);
Point &operator+(Point &a, Point &b);
//定义点类
class Point {
public:
	int x, y;
	char name;
	Point() {
	}
	Point(char n1, int xx, int yy) {
		name = n1;
		x = xx;
		y = yy;
	}
	void print() {
		cout << name << "=(" << x << "," << y << ")\n";
	}
	friend Point operator-(Point &a, Point &b);
	friend Point &operator+(Point &a, Point &b);
	Point operator++();
};
//重载-号操作(返回值)
Point operator-(Point &a, Point &b) {
	Point s('s', a.x - b.x, a.y - b.y);
	return s;
}
//重载+号操作(返引用)
Point &operator+(Point &a, Point &b) {
	a.x += b.x;
	a.y += b.y;
	return a;
}
Point Point::operator++() {
	cout<<"4 "<<this<<endl;
	Point tmp=*this;
	(this->x)++;
	(this->y)++;
	cout<<"3 "<<&tmp<<endl;
	return tmp;
}
int main() {
	Point a('a', 3, 20);
	cout<<"1 "<<&a<<endl;
	Point *p=&a;
	++a;
	cout<<"2 "<<&a<<endl;
	(*p).print();
}
