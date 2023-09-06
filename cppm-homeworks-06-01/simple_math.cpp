#include "simple_math.h"

//сумма
double summ(double a, double b) {
	return a + b;
}
//вычитание
double sub(double a, double b) {
	return a - b;
}
//умножение
double mult(double a, double b) {
	return a * b;
}
//деление
double div(double a, double b) {
	return a / b;
}
//возведение в степень
double power(double a, double b) {
	double tmp = 1;
	for (int i = 0; i < b; i++) {
		tmp = tmp * a;
	}
	return tmp;

}