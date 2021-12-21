class Emoplyoee:
    def __init__(self, fname, lname):
        self.fname = fname
        self.lname = lname

    def explain(self):
        return f"The user is {self.fname} {self.lname}"

    @property
    def email(self):
        if self.fname == None and self.lname == None:
            return f"Email not found"
        return f"{self.fname}.{self.lname}@gmail.com"

    @email.setter
    def email(self, string):
        name = string.split("@")[0]
        self.fname = name.split(".")[0]
        self.lname = name.split(".")[1]

    @email.deleter
    def email(self):
        self.fname = None
        self.lname = None

anmol = Emoplyoee("Anmol", "Raj")
print(anmol.explain())
print(anmol.email)

anmol.email = "Anmol.Soni@gmail.com"
print(anmol.email)
del anmol.email
print(anmol.email)
