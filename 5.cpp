/*
Priority Queue -> Min Heap
 */

#include <bits/stdc++.h>

using namespace std;

template <class T>
class MinHeap
{
public:
    vector<T> nodes;

    MinHeap()
    {
    }

    // up_heapify
    void up_heapify(int indx)
    {
        int parent = (indx - 1) / 2;
        while (indx > 0 && nodes[indx] < nodes[parent])
        {
            swap(nodes[indx], nodes[parent]);
            indx = parent;
        }
    }

    // insert
    void INSERT(T val)
    {
        nodes.push_back(val);
        up_heapify(nodes.size() - 1);
    }

    // down_heapify
    void down_heapify(int indx)
    {
        while (1)
        {
            int lowest = indx;
            int l = 2 * indx + 1;
            int r = 2 * indx + 2;

            if (l < nodes.size() && nodes[l] < nodes[lowest])
            {
                lowest = l;
            }

            if (r < nodes.size() && nodes[r] < nodes[lowest])
            {
                lowest = r;
            }

            if (lowest == indx)
            {
                break;
            }

            swap(nodes[indx], nodes[lowest]);
            indx = lowest;
        }
    }

    // delete
    void DELETE(int indx)
    {
        if (indx >= nodes.size() || nodes.empty())
            return;
        swap(nodes[indx], nodes[nodes.size() - 1]);
        nodes.pop_back();
        down_heapify(indx);
    }

    // getMIn
    T GET_MIN()
    {
        if (nodes.empty())
        {
            T a;
            return a;
        }
        return nodes[0];
    }

    // size
    int SIZE()
    {
        return nodes.size();
    }
};

template <class T>
class PriorityQueue
{
public:
    MinHeap<T> hp;

    PriorityQueue()
    {
    }

    // push
    void push(T val)
    {
        hp.INSERT(val);
    }

    // pop
    void pop()
    {
        hp.DELETE(0);
    }

    // top
    T top()
    {
        return hp.GET_MIN();
    }

    // size
    int size()
    {
        return hp.SIZE();
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    PriorityQueue<int> pq;
    pq.push(5);
    pq.push(11);
    pq.push(20);
    pq.push(7);
    pq.push(2);
    pq.push(19);
    pq.push(3);

    cout << pq.top() << "\n";

    pq.pop();

    cout << pq.top() << "\n";

    while (pq.size())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    return 0;
}