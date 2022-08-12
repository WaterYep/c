#include <bitset>
#include <iostream>

using namespace std;

int main()
{
    /* 最低位置0 */
    bitset<32>bitvec(1U);
    cout << bitvec << endl;
    /* 比初始值小，高位被抛弃 */
    bitset<13>bitvec1(0xbeef);
    cout << bitvec1 <<endl;

    /* 比初始值小，高位被置0 */
    bitset<23>bitvec2(0xbeef);
    cout << bitvec2 <<endl;

    /* string 初始化bitset */
    bitset<32> bitset3("1110");
    cout << bitset3 <<endl;

    /* 选取str[16]后四个进行初始化 */
    string str = "00000000000000000011111111111111";
    bitset<32> bitset4(str, 16, 4);
    cout << bitset4 <<endl;
    return 0;
}