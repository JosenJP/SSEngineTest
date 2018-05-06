#include <iostream>
#include <SSEngine.hpp>
using namespace std;

int main()
{
    SSEngine* l_pSSEngine = SSEngine::GetInstance();

    const string l_TableName = "issues";
    const string l_NodeColumns = "columns";
    const string l_NodeKey = "key";
    string l_Columns = l_pSSEngine->GetColumns(l_TableName);
    string l_Key = l_pSSEngine->GetKey(l_TableName);

    cout << l_TableName << "." << l_NodeColumns << " : " << l_Columns << endl;
    cout << l_TableName << "." << l_NodeKey << " : " << l_Key << endl << endl;;

    char l_Buffer[200];
    memset(l_Buffer, 0, sizeof(l_Buffer));
    cout << "Please enter the table name:" << endl;
    while (cin >> l_Buffer)
    {
        l_Columns = l_pSSEngine->GetColumns(l_Buffer);
        l_Key = l_pSSEngine->GetKey(l_Buffer);

        cout << l_TableName << "." << l_NodeColumns << " : " << l_Columns << endl;
        cout << l_TableName << "." << l_NodeKey << " : " << l_Key << endl << endl;;

        memset(l_Buffer, 0, sizeof(l_Buffer));
        cout << "Please enter the table name:" << endl;
    }

    return 0;
}
