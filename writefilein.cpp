#include "writefilein.h"

    writefilein::writefilein(){}

    void writefilein::startwritefile(){
  
    ofstream outFile("file.in",ios::out);

    if(!outFile) {
      cerr<<"err\n";
      exit(1);
    }

    outFile <<8<<"\n";
    outFile <<420<<"\n";
    outFile <<370<<"\n";
    outFile <<332<<"\n"; 
    outFile <<450<<"\n";
    outFile <<391<<"\n";
    outFile <<278<<"\n";
    outFile <<401<<"\n";
    outFile <<342<<"\n";


    outFile.close();
  }
