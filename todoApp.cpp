#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

vector<string> todoVector;

//menu for todo
void menuToDo()
{
    cout << "MENU\n";
    cout << "q - quit, n - new todo, l - list all todo \n";
}

//new todo item
void newToDo()
{
    string todoItemName, todoItemList;
    cout << "New ToDo item name? \n";
    getline(cin, todoItemName);
    cout << "List ToDo items: \n";
    getline(cin, todoItemList);
    todoVector.append(todoItemName, ": ", todoItemList)
}

//list all todo items
void listToDo()
{
    for (int i = 0; i < todoVector.size(); i++)
    {
        cout << todoVector[i] << endl;
    }
}

//edit specific todo item
void editToDo(int todoItem)
{
}

int main()
{
    char choose = 'i';
    while (choose != 'q')
    {
        menuToDo();
        cout << "Enter: ";
        cin.get(choose);
        if (choose == 'q')
        {
            exit(0);
        }
        else if (choose == 'n')
        {
            newToDo();
        }
        else
        {
            listToDo();
        }
    }
    return 0;
}