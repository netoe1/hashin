#include "../include/hashin.hpp"
#include <ctime>

using std::time,std::srand,std::setlocale;

string Hashin::genFourBytesHash(){
    // 00000000-00000000-00000000-00000000
    std::string hashToReturn;
    srand(time(NULL));
    for(int i = 0; i = hashToReturn.size();i++){
        if((i + 1) % 8 == 0){
            hashToReturn += rand() % 255; 
        }
        else{
            hashToReturn+= "-";
        }
    }

    return hashToReturn;
}
string Hashin::genEightBytesHash(){
    // 00000000-00000000-00000000-00000000
    std::string hashToReturn;
    srand(time(NULL));
    for(int i = 0; i = hashToReturn.size();i++){
        if((i + 1) % 16 == 0){
            hashToReturn += rand() % 255; 
        }
        else{
            hashToReturn+= "-";
        }
    }

    return hashToReturn;
}
string Hashin::genRandomHash(int len){
    srand(time(NULL));
    if(len > 0 || &len != nullptr){
        string hash;

        for(int i = 0; i < len;i++){
            hash += rand() % 255;
        }
        return hash;
    }
}
Hashin::Hashin(){
    srand(time(NULL));
    setlocale(LC_ALL,"");
}
