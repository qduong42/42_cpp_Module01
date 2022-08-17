// read file data using associated buffer's members
#include <iostream>     // std::cout
#include <fstream>      // std::filebuf, std::ifstream

int main () {
  std::ifstream ifs ("test.txt");

  // get pointer to associated buffer object
  std::filebuf* pbuf = ifs.rdbuf();

  // get file size using buffer's members
  std::size_t size = pbuf->pubseekoff (0,ifs.end,ifs.in);
  pbuf->pubseekpos (0,ifs.in);

  // allocate memory to contain file data
//   std::string buffer;
   char* buffer=new char[size];

  // get file data
  pbuf->sgetn (buffer,size);

  ifs.close();

  // write content to stdout
  std::cout.write (buffer,size);

  delete[] buffer;

  return 0;
}

/**
 * Binary vs text line 6 https://stackoverflow.com/questions/20863959/difference-between-opening-a-file-in-binary-vs-text
 * text mode = newline translations \n -> newline
 * Binary ok for text, but wont translate newline, mostly prob on windows (carriage return + newline)
 */