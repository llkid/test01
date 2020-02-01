// test01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Myclass.h"
#include <vector>
#include "stddef.h"
using namespace::std;
using std::vector;

int main()
{
    cout << "Hello World!\n";
    MyClass myClass;
    //这里与qt的不一样，调用类的函数并不会自动添加（）
    myClass.func();

    const string s = "asfsafa";
    for (auto c : s) {
        cout << c << "\t";
    }
    cout << endl;

    vector<int> v(10, 42);
    vector<int> v1 = {42, 42, 42};

    vector<int> vp{1, 2, 3, 5, 5, 6, 7};
    vector<int>::iterator it = vp.begin();
    auto at = vp.end();
    cout << "at - it --> " << at - it << endl;
    /*auto it = vp.begin();*/
    cout << "*(it + 3) --> " << *(it + 3) << endl;
        
    while (it != vp.end()) {
        cout << *it++ << endl;
    }

    for (unsigned i = 0; i < vp.size() - 1; ++i) {
        cout << vp[i] + vp[i + 1] << "\t";
    }
    cout << "相邻两位数和↑" << endl;

    for (decltype(vp.size()) i = 0; i < (vp.size() + 1) / 2; ++i) {
        cout << vp[i] + vp[vp.size() - i - 1] << "\t";    
    }
    cout << "前后两位数和↑" << endl;

    string s1("some other");
    if (!s1.empty()) {
        cout << "execute here" << endl;
        auto it = s1.begin();
        *it = toupper(*it);
        cout << s1 << endl;
    }
    for (auto it = s1.begin(); it != s1.end() && !isspace(*it); ++it) {
        *it = toupper(*it);
        cout << s1 << endl;
    }

    //常量表达式
    constexpr unsigned size = 42;
    string strs[size];

    constexpr size_t array_size = 10;
    int array1[array_size];
    int array2[array_size];
    for (auto i = 0; i < array_size; ++i)
        array1[i] = i;
    for (auto i = 0; i < array_size; ++i)
        array2[i] = array1[i];

    int *array3 = new int[3];
    delete[] array3;

    int num1 = 1, num2 = 2;
    num1 += num2 * 4;
    cout << num1 << endl;

    
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
