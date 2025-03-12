import pytest
from stackwithlinkedlist import stack

def test_stack_operations():
    s = stack()
    s.append(5)
    s.append(10)
    
    assert s.link.head.data == 10  # Last added element should be on top
    assert s.link.head.next.data == 5

def test_findtop(capfd):
    s = stack()
    s.append(50)
    s.findtop()

    captured = capfd.readouterr()
    assert "top element is : 50" in captured.out
