from abc import ABC, abstractmethod
class Shape(ABC):
    @abstractmethod
    def area(self):
        return 0;

class Rectangle(Shape):
    def __init__(self):
        self.length = 6
        self.breadth = 4

    def area(self):
        return self.length*self.breadth

rect = Rectangle()
print(rect.area())