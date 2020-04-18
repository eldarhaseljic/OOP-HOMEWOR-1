#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

bool sort_type ( const std::string& a, const std::string&  b)
{
  return a.size() > b.size();
}

int main(int argc, char *argv[])
{
  std::vector<std::string> list_of_words;
  std::string word;
  std::cout << "Enter a list of words: " << std::endl;
  while(std::cin >> word && word!=".")
  {
    list_of_words.push_back(word);
  }
  
  sort(list_of_words.begin(),list_of_words.end(),sort_type);

  char char_type = '*';
  for(auto i = 0; i < list_of_words.size(); ++i)
  {
    if(i == 0) 
      std::cout << std::string(list_of_words[i].size()+4, char_type) << std::endl;
    
    std::cout << char_type << ' ' << list_of_words[i];
    std::cout << std::string(list_of_words[0].size()-list_of_words[i].size()+1, ' ');
    std::cout << char_type << std::endl;
    
    if(i == list_of_words.size()-1)
      std::cout << std::string(list_of_words[0].size()+4, char_type) << std::endl;
  }
  return 0;
}
