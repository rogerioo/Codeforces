#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int qtd;

    while(cin >> qtd){
        queue<int> queue;
        stack<int> stack;
        priority_queue<int> p_queue;

        bool q = true, s = true, pq = true;
        int op, elem;

        while(qtd--){
            cin >> op >> elem;

            switch (op)
            {
            case 1:
                if(q)
                    queue.push(elem);
                if(s)
                    stack.push(elem);
                if(pq)
                    p_queue.push(elem);
                break;

            default:
                if(queue.size() == 0 or queue.front() != elem)
                    q = false;
                else
                    queue.pop();

                if(stack.size() == 0 or stack.top() != elem)
                    s = false;
                else
                    stack.pop();

                if(p_queue.size() == 0 or p_queue.top() != elem)
                    pq = false;
                else
                    p_queue.pop();

                break;
            }
        }

        if (!q and !s and !pq)
            cout << "impossible" << endl;
        else if (q and !s and !pq)
            cout << "queue" << endl;
        else if (s and !q and !pq)
            cout << "stack" << endl;
        else if (pq and !q and !s)
            cout << "priority queue" << endl;
        else
            cout << "not sure" << endl;
    }

    return 0;
}