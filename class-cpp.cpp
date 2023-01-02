#include <bits/stdc++.h>

using namespace std;

class Cuboid
{
private:
    int length;
    int width;
    int height;

public:
    Cuboid()
    {
        this->length = 0;
        this->width = 0;
        this->height = 0;
    }
    Cuboid(int length, int width, int height)
    {
        this->length = length;
        this->width = width;
        this->height = height;
    }
    void setData(int l, int w, int h)
    {
        this->height = h;
        this->length = l;
        this->width = w;
    }
    int getVolume()
    {
        return this->length * this->width * this->height;
    }
    int getSurfaceArea()
    {
        int a = 2 * this->length * this->width;
        int b = 2 * this->length * this->height;
        int c = 2 * this->height * this->width;

        return a + b + c;
    }
};

int main()
{
    vector<Cuboid> cub(4);

    for (int i = 0; i < 4; i++)
    {
        int l, w, h;
        cin >> l >> w >> h;
        cub[i].setData(l, w, h);
    }

    for (int i = 0; i < 4; i++)
    {
        cout << "Cube: " << i << " volume->" << cub[i].getVolume() << " & area->" << cub[i].getSurfaceArea() << "\n";
    }

    return 0;
}