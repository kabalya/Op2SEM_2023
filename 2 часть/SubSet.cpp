#include "SubSet.h"
#include <cmath>
#include <iostream>
#include <algorithm>
#include <array>





namespace Subset
{
      SubSet::SubSet(vector<int> SubSet)
    {
        for (int i = 0; i < SubSet.size(); i++)
        {
            if (SubSet[i] < 0 || SubSet[i] > 9) 
            {
                throw exception ("Invalid value");
            }
        }
        newSubSet = std::move(SubSet);
    }

    void SubSet::printSubset() 
    {
        try 
        {
            newSubSet.empty();
        }
        catch (...) 
        {
            throw exception("SubSet is Empty");
        }
        for (int i = 0; i < newSubSet.size(); i++)
        {
            cout << newSubSet[i] << " ";
        }
    }

    SubSet* SubSet::operator+(SubSet other) 
    {
        for (int i = 0; i < other.newSubSet.size(); i++) 
        {
            if (newSubSet.end() == find(newSubSet.begin(), newSubSet.end(), other.newSubSet[i]))
            {
                newSubSet.push_back(other.newSubSet[i]);
            }
        }
        return this;
    }

    SubSet* SubSet::operator+=(int number) 
    {
        if (find(newSubSet.begin(), newSubSet.end(), number) == newSubSet.end())
        {
            newSubSet.push_back(number);
        }
        return this;
    }

    SubSet* SubSet::operator-=(int number)
    {
        if (find(newSubSet.begin(), newSubSet.end(), number) != newSubSet.end())
        {
            newSubSet.erase(find(newSubSet.begin(), newSubSet.end(), number));
        }
        return this;
    }

    bool SubSet::operator==(SubSet other) 
    {
        sort(newSubSet.begin(), newSubSet.end());
        sort(other.newSubSet.begin(), other.newSubSet.end());
        if (newSubSet == other.newSubSet)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool SubSet::operator!=(SubSet other) {
        if (!operator==(other))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}





