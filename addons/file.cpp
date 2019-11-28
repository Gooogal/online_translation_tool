#include <iostream>
#include <fstream>

using namespace std;

unsigned char buffer[10000];

int main() {
  FILE* ptr = fopen ("logo.png", "rb");
  
  fread(buffer,sizeof(buffer),1,ptr); 
  
  FILE *write_ptr;  
  write_ptr = fopen("logo2.png","wb");
  fwrite(buffer,sizeof(buffer),1,write_ptr);
  return 0;
}
