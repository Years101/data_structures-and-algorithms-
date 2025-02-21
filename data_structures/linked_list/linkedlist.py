class node : 
    def __init__ (self, data):
        self.data = data 
        self.next = None 
        
        
class linked_list :
    def __init__ (self):
        self.head=None
        
    def append (self, data ):
        new = node(data)
        
        
        if not (self.head) :
            self.head = new
            return 
        traverse = self.head
        while traverse.next :
            traverse = traverse.next
        traverse.next = new
        
    def display (self):
        k = self.head
        while k :
            print (k.data , end = "-")
            k=k.next
        print ("none")
        
link1= linked_list()
link1.append(11)
link1.append(3)
link1.display()