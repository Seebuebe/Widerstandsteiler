#include <gtest/gtest.h>						//Google Test
//#include <QCoreApplication>
#include "../algorithm/Ecalc.cpp"  //Backend Code 


//TODO die Werte müssten noch mit dem TR nachgerechnet werden.


// Testen der E-Reihe
TEST(Ecalc, E3Reihe) 
{
	Ecalc obj;
  ASSERT_EQ(obj.calculate(10, 1, 3, 0), true);
  
  EXPECT_EQ(obj.getResistor1(), 22);
  EXPECT_EQ(obj.getResistor2(), 2.2);
  EXPECT_EQ(obj.getOutput(), 0.91);
  EXPECT_EQ(obj.getErrorRel(), 9.89);
}

TEST(Ecalc, E6Reihe)
{
	Ecalc obj;
  ASSERT_EQ(obj.calculate(100.4, 1, 6, 0), true);
  
  EXPECT_EQ(obj.getResistor1(), 100);
  EXPECT_EQ(obj.getResistor2(), 1);
  EXPECT_EQ(obj.getOutput(), 1.00);
  EXPECT_EQ(obj.getErrorRel(), 1.01);
}

TEST(Ecalc, E12Reihe)
{
	Ecalc obj;
  ASSERT_EQ(obj.calculate(10, 1.3, 12, 0), true);
  
  EXPECT_EQ(obj.getResistor1(), 10);
  EXPECT_EQ(obj.getResistor2(), 1.5);
  EXPECT_EQ(obj.getOutput(), 1.30);
  EXPECT_EQ(obj.getErrorRel(), 0.00);
}

TEST(Ecalc, E24Reihe)
{
	Ecalc obj;
  ASSERT_EQ(obj.calculate(1000.9, 1.9, 24, 0), true);
  
  EXPECT_EQ(obj.getResistor1(), 4300);
  EXPECT_EQ(obj.getResistor2(), 8.2);
  EXPECT_EQ(obj.getOutput(), 1.91);
  EXPECT_EQ(obj.getErrorRel(), 0.52);
}

TEST(Ecalc, E48Reihe)
{
	Ecalc obj;
  ASSERT_EQ(obj.calculate(1000.4, 1.4, 48, 0), true);
  
  EXPECT_EQ(obj.getResistor1(), 1270);
  EXPECT_EQ(obj.getResistor2(), 1.78);
  EXPECT_EQ(obj.getOutput(), 1.40);
  EXPECT_EQ(obj.getErrorRel(), 0.00);
}

TEST(Ecalc, E96Reihe)
{
	Ecalc obj;
  ASSERT_EQ(obj.calculate(1000.6, 1.6, 96, 0),true);
  
  EXPECT_EQ(obj.getResistor1(), 715);
  EXPECT_EQ(obj.getResistor2(), 1.15);
  EXPECT_EQ(obj.getOutput(), 1.61);
  EXPECT_EQ(obj.getErrorRel(), 0.62);
}

TEST(Ecalc, E192Reihe)
{
	Ecalc obj;  
  ASSERT_EQ(obj.calculate(549.1, 499.9, 192, 0), true);
  
  EXPECT_EQ(obj.getResistor1(), 1.24);
  EXPECT_EQ(obj.getResistor2(), 12.6);
  EXPECT_EQ(obj.getOutput(), 499.90);
  EXPECT_EQ(obj.getErrorRel(), 0.00);
}




//Testen der Exceptions
/*
* Hinweis: da der Compiler keine leere Übergabe, sowie keine Buchstaben akzeptiert,
* müsste dies im Gui abgefangen und getestet werden.
* Dies wird beim nächsten Workaround erledigt.
*/

TEST(Ecalc, UoutgreaterUin) {
	Ecalc obj;
  ASSERT_EQ(obj.calculate(1, 10, 3, 0), false); 
}

TEST(Ecalc, UinNegativ) {
	Ecalc obj;
  ASSERT_EQ(obj.calculate(-1, 10, 3, 0), false); 
}

TEST(Ecalc, UoutNegativ) {
	Ecalc obj;
  ASSERT_EQ(obj.calculate(1, -10, 3, 0), false); 
}

TEST(Ecalc, UinANDUoutNegativ) {
	Ecalc obj;
  ASSERT_EQ(obj.calculate(-1, -10, 3, 0), false); 
}

TEST(Ecalc, UinANDUoutequalZero) {
	Ecalc obj;
  ASSERT_EQ(obj.calculate(0, 0, 3, 0), false); 
}

TEST(Ecalc, UinDIFFUoutgreater5000) {
	Ecalc obj;
  ASSERT_EQ(obj.calculate(5002, 1, 3, 0), false); 
}



int main(int argc, char *argv[])
{
  //QCoreApplication a(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

