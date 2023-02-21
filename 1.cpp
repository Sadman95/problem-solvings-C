/*
 * Template Based Max Heap
 */

#include <bits/stdc++.h>

using namespace std;

template <class T>
class MaxHeap
{
public:
    vector<T> nodes;

    MaxHeap()
    {
    }

    // up_heapify
    void up_heapify(int indx)
    {
        int parent = (indx - 1) / 2;
        while (indx > 0 && nodes[indx] > nodes[parent])
        {
            swap(nodes[indx], nodes[parent]);
            indx = parent;
        }
    }

    // INSERT
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
            int largest = indx;
            int l = 2 * indx + 1;
            int r = 2 * indx + 2;

            if (l < nodes.size() && nodes[l] > nodes[largest])
            {
                largest = l;
            }

            if (r < nodes.size() && nodes[r] > nodes[largest])
            {
                largest = r;
            }

            if (largest == indx)
            {
                break;
            }
            swap(nodes[indx], nodes[largest]);
            indx = largest;
        }
    }

    // DELETE
    void DELETE(int indx)
    {
        if (nodes.empty() || indx >= nodes.size())
            return;
        swap(nodes[nodes.size() - 1], nodes[indx]);
        nodes.pop_back();
        down_heapify(indx);
    }

    // GET_MAX
    T GET_MAX()
    {
        if (nodes.empty())
        {
            T a;
            return a;
        }
        return nodes[0];
    }

    // PRINT
    void PRINT()
    {
        if (nodes.empty())
            return;
        for (auto val : nodes)
            cout << val << " ";
        cout << "\n";
    }

    // BUILD
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

    // EXTRACT MAX
    T EXTRACT_MAX()
    {
        T maxx = nodes[0];
        DELETE(0);
        return maxx;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /*------------------------
     1.Insert, Delete, Get Max
     -------------------------*/
    MaxHeap<char> hp;
    hp.INSERT('p');
    hp.INSERT('h');
    hp.INSERT('i');
    hp.INSERT('t');
    hp.INSERT('r');
    hp.INSERT('o');
    hp.INSERT('n');

    // hp.PRINT();

    // hp.DELETE(2);

    // hp.PRINT();

    // cout << hp.GET_MAX() << "\n";

    /*------------------------
     4.Find largest k elements
     -------------------------*/
    MaxHeap<int> h_int;

    int n, k;
    cin >> n;
    cin >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    h_int.BUILD_HEAP(a);
    // h_int.PRINT();

    vector<int> ext;
    for (int i = 0; i < k; i++)
    {
        ext.push_back(h_int.EXTRACT_MAX());
    }

    for (auto val : ext)
        cout << val << " ";
    cout << "\n";

    return 0;
}