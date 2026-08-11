// library management system

#include <iostream>
using namespace std;

// base class (abstraction)
class LibraryItem
{
protected:
    string title;
    int id;

public:
    LibraryItem(string t, int i)
    {
        title = t;
        id = i;
    }
    // virtual function
    virtual void display()
    {
        cout << "\ntitle:" << title;
        cout << "\nID: " << id;
    }

    virtual void issueItem()
    {
        cout << "\nitem Issued\n";
    }

    virtual ~LibraryItem()
    {
        cout << "\nitem Destroyed\n";
    }
};

// Derived classs 1
class Book : public LibraryItem
{
private:
    string author;

public:
    Book(string t, int i, string a) : LibraryItem(t, i)
    {
        author = a;
    }

    void display() override
    {
        LibraryItem ::display();
        cout << " \nAuthor:" << author;
    }
    void issueItem() override
    {
        cout << "\nBook Issued succesfully\n";
    }
};
// Derived class 2
class Magazine : public LibraryItem
{
private:
    int issueNumber;

public:
    Magazine(string t, int i, int num) : LibraryItem(t, i)
    {
        issueNumber = num;
    }
    void display() override
    {
        LibraryItem::display();
        cout << "\nIssue No." << issueNumber;
    }
};
// friend funcction
class Helper
{
public:
    friend void showDetails(LibraryItem &item);
};
void showDetails(LibraryItem &item)
{
    cout << "\n[Friend Funcction Access]";
    item.display();
}
// Static Member
class Library
{
public:
    static int totalItems;

    Library()
    {
        totalItems++;
    }
    static void showTotal()
    {
        cout << "\ntotal items:" << totalItems << endl;
    }
};
int Library::totalItems = 0;
// main
int main()
{
    // Dynamic POlymorphism
    LibraryItem *item1;
    LibraryItem *item2;

    item1 = new Book("c++ programming", 101, "bjrane Stroustrup");
    item2 = new Magazine("Tecch MOnthly", 202, 45);

    // using object
    item1->display();
    item1->issueItem();

    item2->display();
    item2->issueItem();

    // function friend
    showDetails(*item1);

    // static Example
    Library I1, I2;
    Library::showTotal();

    delete item1;
    delete item2;

    return 0;
}