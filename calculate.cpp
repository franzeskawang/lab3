# include "calculate.h"  

    calculate::calculate(){}
    void calculate::sum(){
    
    //宣告
    int i,j;//計數
    vector<int> weight;//大小不確定的向量:重量
    int number;//幾隻牛牛   
   
    ifstream inFile("file.in",ios::in);//打開輸入file.in

    //如果打開程式失敗，就輸出錯誤訊息
    if(!inFile){
      cerr<<"file.in fail";
      exit(1);
    } 
     
    
    inFile>>number;//讀讀看有幾隻牛牛
    
    //讀數據
    

   for(i=0;i<=number;i++){

        weight.push_back (i);
        inFile>>weight.at(i);
    }    
 

    
   //排序
    sort(weight.begin(), weight.end(), greater<int>());
  
    //輸出
    cout<< weight.at(0)
          +weight.at(1)
          +weight.at(2)
          +weight.at(3)
          +weight.at(4) 
          <<endl;    


    inFile.close();
    
  } 

    
   
