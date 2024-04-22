#include <bits/stdc++.h>
#include "algori.h"
using namespace std;

class singleton {                                   // 单例模式 懒汉类 + 智能指针 + 锁 。 双重检查锁定
public:
    typedef shared_ptr<singleton>ptr;               // 给智能指针定义别名ptr
    ~singleton() {
        cout<<"Destructor called !"<<endl;
    }
    singleton(singleton&) = delete;                 // 显式删除 拷贝构造函数
    singleton& operator = (const singleton&) = delete;
    static ptr get_instance() {                     // 静态成员函数 返回 智能指针
        if( m_instance_ptr == nullptr) {
            lock_guard<mutex> lk(m_mutex);       // 互斥锁
            if(m_instance_ptr == nullptr) {
                m_instance_ptr = shared_ptr<singleton>(new singleton);
            }
        }
        return m_instance_ptr;
    }

private:
    singleton() {
        cout<<"Constructor called !"<<endl;
    };
    static ptr m_instance_ptr;                      // 空的对象
    static mutex m_mutex;
};

singleton::ptr singleton::m_instance_ptr = nullptr;
mutex singleton::m_mutex;

int main() {
    vector<int>arr = {4,2,1,3,6,5};
    // topK t;
    // cout<<t.findKthLargest(arr,2)<<endl;
    // printVector(arr);
    // singleton s;
    singleton::ptr i1 = singleton::get_instance();
    singleton::ptr i2 = singleton::get_instance();
    return 0;
}

