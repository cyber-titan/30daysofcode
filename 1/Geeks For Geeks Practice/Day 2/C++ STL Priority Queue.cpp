void addElement(priority_queue<int> &A, int x)
{
    A.push(x);
}

// Function to remove the top element from a priority queue and print it
void remove_Element(priority_queue<int> &A)
{
    if (!A.empty())
    {
        cout << A.top() << "\n";
        A.pop();
    }
    else
    {
        cout << -1 << "\n";
    }
}

// Function to return the top element of a priority queue
int getElement_at_top(priority_queue<int> &A)
{
    // Return -1 if the queue is empty, otherwise return the top element
    return A.empty() ? -1 : A.top();
}

// Function to return the size of a priority queue
int getSize(priority_queue<int> &A)
{
    return A.empty() ? -1 : A.size();
}

// Function to print the elements in a priority queue without emptying the queue
void print(priority_queue<int> &A)
{
    if (A.empty())
    {
        cout << -1 << endl;
        return;
    }
    priority_queue<int> temp = A;
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}