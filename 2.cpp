/*
 * Template Based Min Heap
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

    // print
    void PRINT()
    {
        if (nodes.empty())
            return;
        for (auto val : nodes)
            cout << val << " ";
        cout << "\n";
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

    // extract min
    T EXTRACT_MIN()
    {
        T mini = nodes[0];
        DELETE(0);
        return mini;
    }

    // build heap from array
    void BUILD_HEAP(vector<T> &v)
    {
        nodes = v;
        int n = nodes.size();
        int last_leaf_indx = n / 2 - 1;
        for (int i = last_leaf_indx; i >= 0; i--)
        {
            down_heapify(i);
        }
    }

    // heap sort
    vector<T> HEAP_SORT(vector<T> a)
    {
        MinHeap<T> h;
        h.BUILD_HEAP(a);

        vector<T> n;

        for (int i = 0; i < a.size(); i++)
        {
            n.push_back(h.EXTRACT_MIN());
        }

        // reverse(n.begin(), n.end()); -> descending
        return n;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /*-----------------------
    2.Insert, Delete, Get Min
     -----------------------*/
    MinHeap<int> hp;
    // hp.INSERT(6);
    // hp.INSERT(3);
    // hp.INSERT(10);
    // hp.INSERT(2);
    // hp.INSERT(5);
    // hp.INSERT(7);

    // hp.PRINT();
    // hp.DELETE(4);
    // hp.PRINT();
    // hp.DELETE(0);
    // hp.PRINT();
    // cout << hp.GET_MIN() << "\n";

    /*----------
    3. HEAP SORT
     ----------*/
    vector<int> t = {5, 10, 2, 9, 1, 3, 8, 21};

    vector<int> sorted = hp.HEAP_SORT(t);

    for (auto val : sorted)
        cout << val << " ";
    cout << "\n";

    return 0;
}