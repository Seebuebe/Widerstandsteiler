#include <gtest/gtest.h>						//Google Test
#include <QCoreApplication>
#include "../algorithm/Ecalc.cpp"  //Backend Code 


TEST(Ecalc, Werte) 
{
	Ecalc obj;
  obj.calculate(10, 1, 3, 0);
  
  EXPECT_EQ(obj.getResistor1(), 22);
  EXPECT_EQ(obj.getResistor2(), 2.2);
  EXPECT_EQ(obj.getOutput(), 0.91);
  EXPECT_EQ(obj.getErrorRel(), 10);
}



/*
TEST(SquareRootTest, Werte) { 
    ASSERT_EQ(6, squareRoot(36.0));

}
*/



int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

