#include <iostream>

template <typename T>
struct Point {
	double x, y;
};

template <typename U>
struct Triangle {
	Point<U> pts[3];
	U double_square() {
		U sq = pts[0].x * (pts[1].y - pts[2].y) + 
			   pts[1].x * (pts[2].y - pts[0].y) +
			   pts[2].x * (pts[0].y - pts[1].y); 
		return (sq > 0) ? sq : -sq;
	};
};

int main() {
	struct Triangle<double> t;
	t.pts[0] = {1.0, 1.0};
	t.pts[1] = {3.0, 3.0};
	t.pts[2] = {1.0, 2.0};
	double square = t.double_square() / 2.0;
	std::cout << square << std::endl;
}
