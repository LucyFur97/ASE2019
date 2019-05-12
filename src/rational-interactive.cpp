#include <iostream>

#include "../headers/rational.h"
#include <gtest/gtest.h>
using namespace ExactArithmetic;



using std::cout;
using std::cin;
using std::endl;



TEST(ExactArithmeticTest, EA_AdditionTest1)
{
	Rational y;
	y.num = 5;
	y.denom = 2;

	Rational x;
	x.num = 9;
	x.denom = 2;

	Rational result;
	result = x + y;

	Rational correctAnswer = 7;
	EXPECT_EQ(correctAnswer, result);
}

TEST(ExactArithmeticTest, EA_AdditionTest2)
{
	Rational y;
	y.num = 52;
	y.denom = 33;

	Rational x;
	x.num = 23;
	x.denom = 27;

	Rational result;
	result = x + y;

	Rational correctAnswer;
	correctAnswer.num = 721;
	correctAnswer.denom = 297;
	EXPECT_EQ(correctAnswer, result);
}

TEST(ExactArithmeticTest, EA_AdditionTest3)
{
	Rational y;
	y.num = 156;
	y.denom = 819;

	Rational x;
	x.num = 892;
	x.denom = 922;

	Rational result;
	result = x + y;

	Rational correctAnswer;
	correctAnswer.num = 11210;
	correctAnswer.denom = 9681;
	EXPECT_EQ(correctAnswer, result);
}

TEST(ExactArithmeticTest, EA_SubtractionTest1)
{
	Rational x;
	x.num = 5;
	x.denom = 2;

	Rational y;
	y.num = 9;
	y.denom = 3;

	Rational result;
	result = x - y;

	Rational correctAnswer;
	correctAnswer.num = -1;
	correctAnswer.denom = 2;
	EXPECT_EQ(correctAnswer, result);
}

TEST(ExactArithmeticTest, EA_SubtractionTest2)
{
	Rational x;
	x.num = 24;
	x.denom = 35;

	Rational y;
	y.num = 86;
	y.denom = 21;

	Rational result;
	result = x - y;

	Rational correctAnswer;
	correctAnswer.num = -358;
	correctAnswer.denom = 105;
	EXPECT_EQ(correctAnswer, result);
}

TEST(ExactArithmeticTest, EA_SubtractionTest3)
{
	Rational x;
	x.num = 754;
	x.denom = 547;

	Rational y;
	y.num = 346;
	y.denom = 746;

	Rational result;
	result = x - y;

	Rational correctAnswer;
	correctAnswer.num = 186611;
	correctAnswer.denom = 204031;
	EXPECT_EQ(correctAnswer, result);
}

TEST(ExactArithmeticTest, EA_MultiplicationTest1)
{
	Rational x;
	x.num = 5;
	x.denom = 2;

	Rational y;
	y.num = 9;
	y.denom = 2;

	Rational result;
	result = x * y;

	Rational correctAnswer;
	correctAnswer.num = 45;
	correctAnswer.denom = 4;
	EXPECT_EQ(correctAnswer, result);
}

TEST(ExactArithmeticTest, EA_MultiplicationTest2)
{
	Rational x;
	x.num = 24;
	x.denom = 35;

	Rational y;
	y.num = 86;
	y.denom = 21;

	Rational result;
	result = x * y;

	Rational correctAnswer;
	correctAnswer.num = 688;
	correctAnswer.denom = 245;
	EXPECT_EQ(correctAnswer, result);
}

TEST(ExactArithmeticTest, EA_MultiplicationTest3)
{
	Rational x;
	x.num = 754;
	x.denom = 547;

	Rational y;
	y.num = 346;
	y.denom = 746;

	Rational result;
	result = x * y;

	Rational correctAnswer;
	correctAnswer.num = 130442;
	correctAnswer.denom = 204031;
	EXPECT_EQ(correctAnswer, result);
}


TEST(ExactArithmeticTest, EA_DivisionTest1)
{
	Rational x;
	x.num = 2;
	x.denom = 9;

	Rational y;
	y.num = 3;
	y.denom = 6;

	Rational result;
	result = x / y;

	Rational correctAnswer;
	correctAnswer.num = 4;
	correctAnswer.denom = 9;
	EXPECT_EQ(correctAnswer, result);
}

TEST(ExactArithmeticTest, EA_DivisionTest2)
{
	Rational x;
	x.num = 56;
	x.denom = 45;

	Rational y;
	y.num = 15;
	y.denom = 84;

	Rational result;
	result = x / y;

	Rational correctAnswer;
	correctAnswer.num = 1568;
	correctAnswer.denom = 225;
	EXPECT_EQ(correctAnswer, result);
}

TEST(ExactArithmeticTest, EA_DivisionTest3)
{
	Rational x;
	x.num = 346;
	x.denom = 746;

	Rational y;
	y.num = 156;
	y.denom = 819;

	Rational result;
	result = x / y;

	Rational correctAnswer;
	correctAnswer.num = 3633;
	correctAnswer.denom = 1492;
	EXPECT_EQ(correctAnswer, result);
}


int main(int argc, char* argv[])
{

	testing::InitGoogleTest(&argc, argv);

	/*
		cout << "Enter the left operand (e.g. 1/3): ";
		Rational x;
		cin >> x;

		cout << "Enter the operator (+, -, * or /): ";
		std::string op;
		cin >> op;

		cout << "Enter the right operand (e.g. 4/9): ";
		Rational y;
		cin >> y;

		Rational result;
		if (op == "+")
		{
			result = x + y;
		}
		else if (op == "-")
		{
			result = x - y;
		}
		else if (op == "*")
		{
			result = x * y;
		}
		else if (op == "/")
		{
			result = x / y;
		}
		else
		{
			cout << "Unrecognised operator" << endl;
			return 1;
		}
		cout << result << endl;
	*/
	return RUN_ALL_TESTS();
}

//
//
///
//
///
///
///
///
////
//
//
/
////
//
/
/
/
////
///
//
//
/
/
/
/
/
/
/
/
/
/
/
/
/
//
/

///
//

//
/
/
/
/
/
/
/
/
/
/

//
////
/

