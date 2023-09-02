#include<iostream>

class Singleton {
private:
    int data;
    static Singleton* obj;

    Singleton() : data(0) {
      
    }

    ~Singleton() {
      
    }

public:
    Singleton(const Singleton& obj) = delete;

    static Singleton* MakeObj() {
        if (!obj) {
            obj = new Singleton;
        }
        return obj;

    }
    static void ReleaseObj() {
        delete obj;
        obj = nullptr;
    }


    void setData(int data) {
        this->data = data;
    }

    int getData()const {
        return data;
    }
};


Singleton* Singleton::obj = nullptr;

int main() {
    Singleton* obj = Singleton::MakeObj();
    obj->setData(42);
    std::cout<<obj->getData()<<std::endl;

    
    return 0;
}
