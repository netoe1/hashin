#include "./include/hashin.hpp"

using namespace std;
int main(void){
    Hashin hashin = Hashin();


    cout << "Hash:" << hashin.genRandomHash(10); 
    return 0;
}