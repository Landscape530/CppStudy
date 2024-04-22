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

