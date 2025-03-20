#include <iostream>
#include <windows.h>
#include <numeric>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	Fraction operator+(Fraction other)
	{
		if (denominator_ == other.denominator_) { return Fraction(numerator_ + other.numerator_, denominator_); }
		else { return Fraction(numerator_ * other.denominator_ + other.numerator_ * denominator_, denominator_ * other.denominator_); }
	}

	Fraction operator-(Fraction other)
	{ 
		if (denominator_ == other.denominator_) { return Fraction(numerator_ - other.numerator_, denominator_); }
		else { return Fraction(numerator_ * other.denominator_ - other.numerator_ * denominator_, denominator_ * other.denominator_); }
	}

	Fraction operator*(Fraction other)
	{
		int new_numerator = (numerator_ * other.numerator_) / std::gcd(numerator_ * other.numerator_, denominator_ * other.denominator_);
		int new_denominator = (denominator_ * other.denominator_) / std::gcd(numerator_ * other.numerator_, denominator_ * other.denominator_);
		return Fraction(new_numerator, new_denominator);
	}

	Fraction operator/(Fraction other)
	{
		int new_numerator = (numerator_ * other.denominator_) / std::gcd(numerator_ * other.denominator_, denominator_ * other.numerator_);
		int new_denominator = (denominator_ * other.numerator_) / std::gcd(numerator_ * other.denominator_, denominator_ * other.numerator_);
		return Fraction(new_numerator, new_denominator);
	}

	Fraction operator++() { return Fraction(numerator_ + denominator_, denominator_); }

	Fraction operator--(int) { return Fraction(numerator_ - denominator_, denominator_); }

	Fraction operator-() { return Fraction(-numerator_, denominator_); }

	void print_fract() {
		std::cout << numerator_ << '/' << denominator_;
	}
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int user_numer = 0;
	int user_denom = 0;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> user_numer;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> user_denom;
	Fraction f1(user_numer, user_denom);

	std::cout << "Введите числитель дроби 2: ";
	std::cin >> user_numer;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> user_denom;
	Fraction f2(user_numer, user_denom);

	Fraction sum_f1_f2 = f1 + f2;
	f1.print_fract(); std::cout << " + "; f2.print_fract(); std::cout << " = "; sum_f1_f2.print_fract(); std::cout << std::endl;

	Fraction sub_f1_f2 = f1 - f2;
	f1.print_fract(); std::cout << " - "; f2.print_fract(); std::cout << " = "; sub_f1_f2.print_fract(); std::cout << std::endl;

	Fraction mult_f1_f2 = f1 * f2;
	f1.print_fract(); std::cout << " * "; f2.print_fract(); std::cout << " = "; mult_f1_f2.print_fract(); std::cout << std::endl;

	Fraction div_f1_f2 = f1 / f2;
	f1.print_fract(); std::cout << " / "; f2.print_fract(); std::cout << " = "; div_f1_f2.print_fract(); std::cout << std::endl;

	Fraction mult_pref_incr = (++f1) * f2;
	std::cout << "++"; f1.print_fract(); std::cout << " * "; f2.print_fract(); std::cout << " = "; mult_pref_incr.print_fract(); std::cout << std::endl;

	f1 = ++f1;
	std::cout << "Значение дроби 1 = "; f1.print_fract(); std::cout << std::endl;

	Fraction mult_post_decr = (f1--) * f2;
	f1.print_fract(); std::cout << "-- * ";  f2.print_fract(); std::cout << " = "; mult_post_decr.print_fract(); std::cout << std::endl;

	f1 = f1--;
	std::cout << "Значение дроби 1 = "; f1.print_fract(); std::cout << std::endl;

	f1 = -f1;
	std::cout << "Значение дроби 1 = "; f1.print_fract(); std::cout << std::endl;

	return 0;
}