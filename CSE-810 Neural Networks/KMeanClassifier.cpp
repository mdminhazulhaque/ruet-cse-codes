#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

#define C1 'X'
#define C2 'O'

class Element
{
public:
    Element(int _x, int _y, int _l) : x(_x), y(_y), l(_l) {}
    Element(int _x, int _y) : x(_x), y(_y) {}
    int  x;
    int  y;
    char l; // type of the Element, either X or O
};

void printList(vector<Element>& eList)
{
    cout << "Group " << C1 << endl;

    for(int l=0; l<eList.size(); l++)
    {
        Element& e = eList.at(l);

        if(e.l == C1)
            cout << "[" << e.x << "," << e.y << "] ";
    }
    cout << endl;

    cout << "Group " << C2 << endl;

    for(int l=0; l<eList.size(); l++)
    {
        Element& e = eList.at(l);

        if(e.l == C2)
            cout << "[" << e.x << "," << e.y << "] ";
    }
    cout << endl;
}
int main()
{

    vector<Element> ElementList;

    ElementList.push_back(Element(35, 14, C1));
    ElementList.push_back(Element(33, 69, C1));
    ElementList.push_back(Element(99, 68, C1));
    ElementList.push_back(Element(77, 32, C1));

    ElementList.push_back(Element(297, 251, C2));
    ElementList.push_back(Element(320, 220, C2));
    ElementList.push_back(Element(365, 257, C2));
    ElementList.push_back(Element(351, 170, C2));

    double distC1 = 999; // distance from Class1
    double distC2 = 999; // distance from Class2

    while(true)
    {
        printList(ElementList);

        cout << "Enter (x,y): ";
        int x, y;
        cin >> x >> y;

        Element ne(x, y);

        for(int l=0; l<ElementList.size(); l++)
        {
            Element& e = ElementList.at(l);

            double d = sqrt(pow(e.x - ne.x, 2) + pow(e.y - ne.y, 2));

            if(e.l == C1 && d < distC1)
                distC1 = d;

            else if(e.l == C2 && d < distC2)
                distC2 = d;
        }

        if(distC2 > distC1)
            ne.l = C1;
        else
            ne.l = C2;

        ElementList.push_back(ne);
        cout << "Elemnt(" << ne.x << "," << ne.y << ") added to group " << ne.l << endl;
    }

    return 0;
}

