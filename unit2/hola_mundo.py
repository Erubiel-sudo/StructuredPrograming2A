from sys import argv as ag 

def palindrome(string): 
    a = ""

    string = string.lower()
    stringList = string.split(" ")
    string = "".join(stringList)
    print(stringList)
    print(string)

if __name__ == "__main__":
    print(palindrome("  AMor a Roma"))