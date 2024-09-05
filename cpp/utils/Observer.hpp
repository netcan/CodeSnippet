/*************************************************************************
    > File Name: Observer.hpp
    > Author: Netcan
    > Blog: https://netcan.github.io/
    > Mail: 1469709759@qq.com
    > Created Time: 2019/07/29 22:45
************************************************************************/
#ifndef __OBSERVER_H__
#define __OBSERVER_H__
namespace utils {
class Observable;
class Observer {
    public:
        virtual void Update() = 0;
        void Observe(Observable* s);
        virtual ~Observer() {}
    private:
};

class Observable {
    public:
        void Register(Observer* obs);
        void UnRegister(Observer* obs);
        void NotifyObservers();
    private:
};
}
#endif
