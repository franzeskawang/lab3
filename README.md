# lab3
Part A:

There are several files:main.cpp, writefilein.h, whilefilein.cpp, calculate.h, calculate.cpp, file.in and makefile.

Among them, writefilein.h and whilefilein.cpp will creat a file named "file.in", which contain the raw data telling us how many cows there is and how much heavy of them is. Then calculate.h and calculate.cpp will sort the raw data and give us the total weight of the top five
cows.

Put main.cpp, writefilein.h, whilefilein.cpp, calculate.h, calculate.cpp, makefile in the same folder. In command mode, type "make", and all of them will be compiled. Type "./main", and then file.in will be made, the total weight of the top five cows will be printed. You can use "cat" to check whether the result is correct. Type "make clean" to clean the .o and main.

Part B:

The result of experiment:

            sort()                insertion_sort()
            
1000:       0.000942 seconds      0.03584 seconds

10000:      0.010969 seconds      2.60395 seconds

100000:     0.138725 seconds      215.297 seconds

1000000:    1.055205 seconds      It runs for a long long long time.

Time complexity of sort() is O(n log n) while it of insertion_sort() is O(n^2). Accroding to result, we can find that O(n log n) spends less time than O(n^2). The time gap of two becomes larger as n increasing.
