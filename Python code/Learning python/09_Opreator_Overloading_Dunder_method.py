class Employe:
    no_of_leaves = 8
    _protected = 9
    __private = 10
    
    def __init__(self, name, sallary, role):
        self.name = name
        self.sallary = sallary
        self.role = role

    def printDetails(self):
        return f"The name is {self.name}. His sallary is {self.sallary} and role is {self.role}"

    @classmethod
    def change_leaves(cls, newleaves):
        cls.no_of_leaves = newleaves

    def __add__(self, other):
        return self.sallary + other.sallary

    def __repr__(self):
        return f"Employee('{self.name}', {self.sallary}, '{self.role}')"

    def __str__(self):
        return f"The Name is {self.name}. Salary is {self.sallary} and role is {self.role}"
        

emp1 = Employe("Harry", 45, "Programmer")
emp2 = Employe("Rohan", 10, "worker")

print(emp1.__add__(emp1))
print(repr(emp1))