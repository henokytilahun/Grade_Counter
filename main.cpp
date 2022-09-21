#include <iostream>
#include <fstream>
#include <string>

int main()
{

  //initalize variables
  int a_s = 0; //A counter for Sam
  int a_l = 0; //A conunter for Lydia
  double bonus = 10.0; //Bonus for getting straight A's


  //ask for the number of A's this quarter
  std::cout << "How many A's does Sam have this quarter?\n";
  std::cin >> a_s;

  //Calculate the money made
  double s_money = a_s;
  s_money *= 5;
  
  if(a_s > 4)
  {
    s_money += bonus;
    std::cout << "Sam made " << s_money << " this quarter\n";  
  } else
  {
    std::cout << "Sam made " << s_money << " this quarter\n";
  }

  //ask for the number of A's this quarter
  std::cout << "How many A's does Lydia have this quarter?\n";
  std::cin >> a_l;
  
  //Calculate the money made
  double l_money = a_l;
  l_money *= 5;
  
  if(a_l > 5)
  {
    l_money += bonus;
    std::cout << "Lydia made " << l_money << " this quarter\n";  
  } else
  {
    std::cout << "Lydia made " << l_money << " this quarter\n";
  }

  //write money made into .txt file

  std::ofstream outfile;

  outfile.open("Sam.txt");

  if (outfile.is_open())
  {
    outfile << "Sam's Money is " << s_money;

    outfile.close();
  } else
  {
    std::cout << "Error!\n";
  }


  //Lydia's file  
  std::ofstream outfile2;

  outfile2.open("Lydia.txt");

  if (outfile2.is_open())
  {
    outfile2 << "Lydia's Money is " << l_money;

    outfile2.close();
  } else
  {
    std::cout << "Error!\n";
  }
  return 0;
}