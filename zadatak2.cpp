#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

int get_random_number (int max)
{
  // + 1 u k l j u c u j e i b r o j max u
  // // i n t e r v a l k o j i c e v r a c a t i nasa f u n k c i j a .
  return rand() % (max +1);
}

int main(int argc, char *argv[])
{
  srand(time(NULL));

  int num_of_balls = 0;
  int num_of_balls_toShow = 0;
  
  std::cout << "Please enter the number of balls: ";
  std::cin >> num_of_balls;   
  std::cout << "How much ball want you: ";
  std::cin >> num_of_balls_toShow;
  
  std::vector<int> balls_toShow;
  for(auto i = 0; i < num_of_balls_toShow; ++i)
  {
    balls_toShow.push_back(get_random_number(num_of_balls));
  }
  
  std::vector<int> balls_toShow_sorted = balls_toShow;
  
  sort(balls_toShow_sorted.begin(),balls_toShow_sorted.end());
  
  std::cout << "Izvuceno" << "\t" << "Sorirano" << std::endl;
  for(auto i = 0; i < num_of_balls_toShow; ++i)
  {
    std::cout << balls_toShow[i] << "\t\t" << balls_toShow_sorted[i] << std::endl;
  }
  return 0;
}
