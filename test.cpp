#include "bits/stdc++.h"
#include <iostream>
using namespace std;

class father{
    public:
        int val ;
        father(){
            val = 1;
            cout<<"默认构造 基类 函数... "<<endl;
        };
        father(int v){
            val = v;
            cout<<"传入参数构造 基类 函数... "<<endl;
        };

        virtual ~father(){                              // 基类的析构函数为虚函数，则删除基类指针时，会动态（根据实际类型）调用派生类的析构函数
            cout<<"调用 基类 析构函数..."<<endl;
        }



        virtual void print_father(){                            // 同作用域下 同名函数 with 不同数量和类型的参数， 重载 overload
            cout<<"father's val is "<<val<<endl;
        }
        void print_father(string s){
            cout<<"传入参数为  "<<s<<endl;
        }
};

class child : public father{
    public:
        int v;
        child(){
            v = 0;
            cout<<"构造 子类 函数... "<<endl;
        }
        child(int x ){
            v = x;
            cout<<"构造 子类 函数... "<<endl;
        }
        ~child(){
            cout<<"调用 子类 析构函数..."<<endl;
        }


        void print_father(){                                    // 基类函数为 virtual 派生类同名函数重写
            cout<<"child's val is "<<v<<endl;
        }
};

int main() {

    child* c = new child(100);



//    cout<<" "<<c->val <<endl;
    c->print_father();
//    c->print_father("parameter");
//    c->father
    delete c;
    c = nullptr;




    return 0;
}
