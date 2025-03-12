import pytest
from stack import StackArray

def test_stack_operations():
    s = StackArray()
    assert s.top() is None  # Stack should be empty initially

    s.add(10)
    s.add(20)
    assert s.top() == 20  # Top element should be 20

    popped = s.delete()
    assert popped == 20  # 20 should be removed
    assert s.top() == 10  # Now top should be 10

def test_display(capfd):
    s = StackArray()
    s.add(5)
    s.add(15)
    s.display()

    captured = capfd.readouterr()
    assert captured.out.strip() == "15 -> 5 -> end of stack"
