#include <iostream>
#include <string>
using namespace std;

int main()
{
    int ncase;
    cin >> ncase;
    while(ncase--){
        string str;
        int len, soilder=0;
        cin >> len >> str;
		//看到需要守護的'.'就在他右邊放哨兵，然後跳到哨兵右邊的右邊繼續檢查
        for(int i=0; i<len; i++){
            if(str[i]=='.'){
                soilder++;
                i+=2;
            }
        }
        cout << soilder << endl;
    }
    return 0;
}
