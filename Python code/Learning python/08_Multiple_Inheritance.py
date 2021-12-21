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

    @classmethod
    def from_dash(cls, string):
        return cls(*string.split(","))

class Player:
    no_of_games = 4

    def __init__(self, name, game):
        self.name = name
        self.game = game
    def printDetails(self):
        return f"The name is {self.name}. Game is {self.game}"

class coolProgrammer(Player, Employe):
    language = "c++"
    def printlanguages(self):
        print(self.language)

anmol = Employe("Anmol", 24000, "Student")
harry = Employe.from_dash("Harry,12000000,Instructor")

karan = coolProgrammer("Karan", "Table Tennis")
print(karan.__dict__)
karan.printlanguages()
print(karan.printDetails())

