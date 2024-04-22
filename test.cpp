#include "bits/stdc++.h"
#include <iostream>
using namespace std;

class father{
public:
    // father(): val(1) {
    //     cout<<"默认构造 基类 函数... "<<endl;
    // };
    explicit father(int v): val(v) {                          //  显式转换 防止 编译器的隐式转换
        cout<<"传入参数构造 基类 函数... "<<endl;
    };

    virtual ~father(){                              // 基类的析构函数为虚函数，则删除基类指针时，会动态（根据实际类型）调用派生类的析构函数
        cout<<"调用 基类 析构函数... val = "<<val<<endl;
    }
    virtual void print_father(){                            // 同作用域下 同名函数 with 不同数量和类型的参数， 重载 overload
        cout<<"father's val is "<<val<<endl;
    }
    static void print_father(const string& s){
        cout<<"传入参数为  "<<s<<endl;
    }

    void set_father(const int val) {
        this->val = val;
    }
private:
    int val ;
};

class child final : public father{
    public:
        int v;
        // child(){
        //     v = 0;
        //     cout<<"构造 子类 函数... "<<endl;
        // }
        // child(int x ){
        //     v = x;
        //     cout<<"构造 子类 函数... "<<endl;
        // }
        ~child(){
            cout<<"调用 子类 析构函数..."<<endl;
        }


        void print_father(){                                    // 基类函数为 virtual 派生类同名函数重写
            cout<<"child's val is "<<v<<endl;
        }
};

int main() {
    // auto *f = new father[10];
    // father f;
    int x = 47;
    int & y =x;
    cout<<y<<endl;
    cout<<&y<<endl;
    cout<<&x<<endl;
    return 0;
}
