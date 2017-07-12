/*给定Ｎ张扑克牌和一个随机函数，设计一个洗牌算法*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;


void shuffle(int cards[],int n)
{
    if(cards == NULL)
        return;
    
    srand(time(0));

    for(int i=0;i<n-1;i++)
    {
        /*保证每次第ｉ位的值不会涉及到第i位以前*/
        int index = i + rand()%(n-i);
        cout << "index:" << index <<endl;
        int temp = cards[i];
        cards[i] = cards[index];
        cards[index] = temp;
    }
}

int main()
{
    int cards[] = {1,2,3,4,5,6,7};
    shuffle(cards,7);
    for(int i=0;i<7;i++)
        cout<<cards[i]<<",";
    cout<<endl;
    return 0;
}