

#ifndef UUID_AB22D8C2D9C341A0BCC7B815004368B2
#define UUID_AB22D8C2D9C341A0BCC7B815004368B2
#include <iostream>
template<typename T,int size>
class Stack {
    T m_Buffer[size];
    int m_Top{ -1 };
public:
    Stack() = default;
    Stack(const Stack<T, size> &obj) {
        m_Top = obj.m_Top;
        for (int i = 0; i <= m_Top; ++i) {
            m_Buffer[i] = obj.m_Buffer[i];
        }
    }
    void Push(const T &elem) {
        m_Buffer[++m_Top] = elem;
    }
    void Pop();
    const T& Top()const {
        return m_Buffer[m_Top];
    }
    bool IsEmpty() {
        return m_Top == -1;
    }
    static Stack Create() {
        return Stack<T, size>();
    }
};

template<typename T, int size>
void Stack<T, size>::Pop() {
    --m_Top;
}
#endif //UUID_AB22D8C2D9C341A0BCC7B815004368B2
