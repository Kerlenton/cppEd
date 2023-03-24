#include <iostream>

#define NOINLINE __attribute__((noinline))

struct Point {
	double x, y;
	void swapxy() NOINLINE {
		double tmp = x;
		x = y;
		y = tmp;
	}
};

void standalone_swapxy(struct Point* p) NOINLINE;

void standalone_swapxy(struct Point* p) {
	double tmp = p->x;
	p->x = p->y;
	p->y = tmp;
}

int main() {
	Point p{1, 2};
	p.swapxy();
	standalone_swapxy(&p);
	std::cout << p.x << " " << p.y << std::endl;
}
