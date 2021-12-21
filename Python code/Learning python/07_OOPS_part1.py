class Employe:
    no_of_leaves = 8

    def __init__(self, name, sallary, role):
        self.name = name
        self.sallary = sallary
        self.role = role

    def printDetails(self):
        return f"The name is {self.name}. His sallary is {self.sallary} and role is {self.role}"

    @classmethod
    def change_leaves(cls, newleaves):
        cls.no_of_leaves = newleaves

    @classmethod
    def from_dash(cls, string):
        return cls(*string.split(","))

anmol = Employe("Anmol", 24000, "Student")
harry = Employe.from_dash("Harry,12000000,Instructor")
anmol.change_leaves(10)
print(anmol.__dict__)
print(anmol.no_of_leaves)
print(harry.__dict__)
print(harry.no_of_leaves)
        