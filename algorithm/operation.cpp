#include <bits/stdc++.h>
#include "algori.h"
using namespace std;

class singleton {                                   // ����ģʽ ������ + ����ָ�� + �� �� ˫�ؼ������
public:
    typedef shared_ptr<singleton>ptr;               // ������ָ�붨�����ptr
    ~singleton() {
        cout<<"Destructor called !"<<endl;
    }
    singleton(singleton&) = delete;                 // ��ʽɾ�� �������캯��
    singleton& operator = (const singleton&) = delete;
    static ptr get_instance() {                     // ��̬��Ա���� ���� ����ָ��
        if( m_instance_ptr == nullptr) {
            lock_guard<mutex> lk(m_mutex);       // ������
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
    static ptr m_instance_ptr;                      // �յĶ���
    static mutex m_mutex;
};

singleton::ptr singleton::m_instance_ptr = nullptr;
mutex singleton::m_mutex;

void testSingleton() {
    singleton::ptr i1 = singleton::get_instance();
    singleton::ptr i2 = singleton::get_instance();
}

class a {
public:
    int v;
    a():v(1){}
    explicit a(int x):v(x){}
};

class cmp {
public:
    bool operator()(const a & a1, const a & a2) {
        return a1.v < a2.v;
    }
};

void customized_sort() {
    a a1(2);
    a a2(3);
    a a3(1);
    vector<a>v {a1,a2,a3};
    for(auto e : v) {
        cout<<e.v<<endl;
    }
    sort(v.begin(),v.end(),cmp());
    for(auto e : v) {
        cout<<e.v<<endl;
    }
}

int main() {
    int a = 10;
    int * p = &a;
    int **pp = &p;
    cout<< p <<" "<<pp<<endl;
    cout<< *p <<" "<<*pp<<endl;
    *p = 20;
    cout<<a<<endl;
    return 0;
}

