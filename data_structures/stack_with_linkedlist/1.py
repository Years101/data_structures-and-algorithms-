class node : 
    def __init__ (self, data):
        self.data = data 
        self.next = None 
        
        
class linkedlist :
    def __init__ (self):
        self.head=None
   

class stack :
    def __init__ (self):
        self.link=linkedlist()
        
    def findtop (self):
        if self.link.head == None :
            print ("stack is empty")
        else :
            print ("top element is :", self.link.head.data)
        
    def append (self, data ):
        new = node(data)
        new.next = self.link.head
        self.link.head = new
        
        
s = stack()
s.append(9)
s.append(10)
s.append(123)
s.append(0)
s.findtop()