#include "simple_math.h"

//�����
double summ(double a, double b) {
	return a + b;
}
//���������
double sub(double a, double b) {
	return a - b;
}
//���������
double mult(double a, double b) {
	return a * b;
}
//�������
double div(double a, double b) {
	return a / b;
}
//���������� � �������
double power(double a, double b) {
	double tmp = 1;
	for (int i = 0; i < b; i++) {
		tmp = tmp * a;
	}
	return tmp;

}