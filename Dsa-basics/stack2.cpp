#include <bits/stdc++.h>
using namespace std;
//        : SORT A STACK :
/*
void sortedinsert(stack<int> &s, int num)
{
    if (s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();

    sortedinsert(s, num);
    s.push(n);
}
void Sort(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int num = s.top();
    s.pop();

    Sort(s);
    sortedinsert(s, num);
}
*/
//             :REDUNDANT  BRACKETS:
/*
bool findredundant(string &s)
{
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            if (ch == ')')
            {
                bool isredundant = true;
                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '(' || top == '+' || top == '-' || top == '*' || ch == '/')
                    {
                        isredundant = false;
                    }
                    st.pop();
                }
                if (isredundant == true)
                    return true;
                st.pop();
            }
        }
    }
    return false;
}
*/
//           :MINIMUM COST TO MAKE STRING VALID:
/*
int findmin(string str)
{
    if (str.length() % 2 != 0)
    {
        return -1;
    }
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == '{')
        {
            s.push(ch);
        }
        else
        {
            if (!s.empty() && s.top() == '{')
            {
                s.pop();
            }
            else
            {
                s.push(ch);
            }
        }
    }
    int a = 0, b = 0;
    while (!s.empty())
    {
        if (s.top() == '{')
        {
            b++;
        }
        else
        {
            a++;
        }
        s.pop();
    }
    int ans = (a + 1) / 2 + (b + 1) / 2;
    return ans;
}
*/
//          :NEXT SMALLER EELMENT:
/*
vector<int> smallerelement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(curr);
    }
    return ans;
}
*/
//        :LARGEST RECTANGLE IN HISTOGRAM:
vector<int> nextsmallerelement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
vector<int> prevsmallerelement(vector<int> &arr, int n)
{
    stack<int> s;
    s.push(-1);
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        while (s.top() != -1 && arr[s.top()] >= curr)
        {
            s.pop();
        }
        ans[i] = s.top();
        s.push(i);
    }
    return ans;
}
int largestrectanglearea(vector<int> &height)
{
    int n = height.size();
    vector<int> next;
    next = nextsmallerelement(height, n);

    vector<int> prev(n);
    prev = prevsmallerelement(height, n);
    int area = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int l = height[i];

        if (next[i] == -1)
        {
            next[i] = n;
        }
        int b = next[i] - prev[i] - 1;
        int newarea = l * b;
        area = max(area, newarea);
    }
    return area;
}
int main()
{
    stack<int> s;
    s.push(23);
    s.push(17);
    s.push(45);
    s.push(2);
    s.push(10);
}