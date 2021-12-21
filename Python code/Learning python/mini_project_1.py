from win32com.client import Dispatch
def speak(str):
    speak  = Dispatch("SAPI.SpVoice")
    speak.Speak(str)

class Library:
    def __init__(self, booklist, name):
        self.booklist = booklist
        self.name = name
        self.lendDict = {}

    def displayBook(self):
        print("The Books available in this library are:-")
        speak("The Books available in this library are:-")
        for book in self.booklist:
            print("-> ", book)
            speak(book)

    def lendBook(self, user, book):
        if book not in self.lendDict.keys():
            self.lendDict.update({book:user})
            print("Lender database has been updated")
            print("Thanks for using book form our Library. Please visit again")
            speak("Thanks for using book form our Library. Please visit again")
        else:
            print(f"Sorry, this book is already being used by {self.lendDict[book]}. Please search for another book.")
            speak(f"Sorry, this book is already being used by {self.lendDict[book]}. Please search for another book.")

    def addBook(self, book):
        self.booklist.append(book)
        speak("Thanks for your donation")
        print("Book has been added to the library")
        
    def returnBook(self, book):
        self.lendDict.pop(book)

if __name__ == '__main__':
    bookself = Library(['Harry Potter', 'Python for all', 'Rich Dad Poor Dad', 'Ikigai', 'Learn DSA'], "Anmol Foundation")

    while(True):
        print(f"Welcome to {bookself.name} Library")
        speak(f"Welcome to {bookself.name} Library")
        print("Enter your choice")
        speak("Enter your choice")
        print("1. Display Books")
        print("2. Lend a Book")
        print("3. Add a Book")
        print("4. Return a Book")
        speak("Press 1 to Display Books")
        speak("Press 2 to Lend a Book")
        speak("Press 3 to Add a Book")
        speak("Press 4 to Return a Book")
        
        take = (input())
        print("\n")
        if take not in ['1','2','3','4']:
            print("Enter a valid choice\n")
            continue
        else:
            take = int(take)

        if take == 1:
            bookself.displayBook()

        elif take == 2:

            speak("Enter the name of book you want to lend >  ")
            book = input("Enter the name of book you want to lend >  ")
            speak("Please enter your good name >  ")
            user = input("Please enter your good name >  ")
            bookself.lendBook(user, book)
            
        elif take == 3:
            speak("Enter the book you want to add >  ")
            book = input("Enter the book you want to add >  ")
            bookself.addBook(book)

        elif take == 4:
            speak("Enter the book you want to return >  ")
            book = input("Enter the book you want to return >  ")
            bookself.returnBook(book)
        else:
            print("Sorry try again")

        print("Press C to continue and Q to quit")
        take_input = ""
        while(take_input != 'c' and take_input != 'q'):
            take_input = input()
            print("\n")
            if take_input == 'q':
                exit()
            elif take_input == 'c':
                continue

'''      Things to be added later
    1. Putting description in the function
    2. Saving the history and display it when user wants to see it
       -> Putting time and day, date stamp
       -> Showing the no of books and which books user has lended
       -> Showing the no of books and which books user has returned
       -> Showing the no of books and which books user has added
    3. Setting the price to use the book 
       -> Day limit to use the book
       -> Fine for extra days
    4. Increasing the no of books of same kind
    5. Displaying the book present with no of availability   '''