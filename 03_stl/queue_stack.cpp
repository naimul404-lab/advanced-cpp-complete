#include <iostream>
#include <queue>
#include <stack>

int main() {
    std::queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);

    std::cout << "Queue front: " << q.front() << std::endl;
    q.pop();
    std::cout << "Queue front after pop: " << q.front() << std::endl;

    std::stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);

    std::cout << "Stack top: " << s.top() << std::endl;
    s.pop();
    std::cout << "Stack top after pop: " << s.top() << std::endl;

    return 0;
}
