#include <iostream>
#include <string>
#include "Inventory.h"
#include "Item.h"

using namespace std;

int main() {
    // �޸� ���� ���� �ڵ�
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

    Inventory<Item> inv(5);

    inv.AddItem(Item("2", 13));
    inv.AddItem(Item("�ռҵ�", 50));
    inv.AddItem(Item("ü�� ����", 32));
    inv.AddItem(Item("1", 14));
    inv.AddItem(Item("���� ����", 55));
    inv.AddItem(Item("4", 11));
    inv.AddItem(Item("3", 12));

    cout << "===== ������ ��� =====" << endl;
    inv.PrintAllItems();

    inv.RemoveLastItem();

    cout << "\n===== ������ ���� �� =====" << endl;
    inv.PrintAllItems();

    // �����Ϸ��� �˾Ƽ� ���� �����ڸ� �������.
    // ���� ��ü�� ���ؼ� �� ��ü�� ���״�� ���� ����.
    Inventory<Item> inv1(inv);

    cout << "\n===== �� �κ��丮 ���� ���� �� =====" << endl;
    inv1.PrintAllItems();

    inv.Resize(10);

    cout << "\n===== �κ��丮 �뷮 ���� �� =====" << endl;
    inv.PrintAllItems();
    cout << "�κ��丮 �뷮: " << inv.GetCapacity() << endl;

    inv.SortItems();

    cout << "\n===== ������ ���� �� =====" << endl;
    inv.PrintAllItems();

    system("pause");

    return 0;
}