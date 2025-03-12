import pytest
from linkedlist import linked_list

def test_append():
    ll = linked_list()
    ll.append(10)
    ll.append(20)

    assert ll.head.data == 10
    assert ll.head.next.data == 20

def test_display(capfd):
    ll = linked_list()
    ll.append(5)
    ll.append(15)
    ll.display()

    captured = capfd.readouterr()
    assert captured.out.strip() == "5-15-none"
