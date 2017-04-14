# include "writefilein.h"
# include "calculate.h"

int main(void){

writefilein Writefilein;
calculate Calculate;
Writefilein.startwritefile();
Calculate.sum();

return 0;
}
