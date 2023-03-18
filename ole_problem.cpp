#include <iostream>
#include <bits/stdc++.h>
#include <vector>


void sort(int lis[], int n){
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++)
            if (lis[j] > lis[j + 1])
                swap(lis[j], lis[j + 1]);
    }
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}


void add(vector<int> lis){
    for (int i = 0; i < 20; i++){
        lis.push_back(i);
    }
}

int main(){
    int listee[] = {1, 3, 55, 1, 7, 34, 20};
    int n = sizeof(listee)/sizeof(listee[0]);
    vector<int> lis;
    sort(listee, n);
    printArray(listee, n);
    add(lis);
    int m = sizeof(lis)/sizeof(lis[0]);
    std::cout << lis[3] << std::endl;
}