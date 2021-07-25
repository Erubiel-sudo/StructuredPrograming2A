#Given an input string, reverse the string word byword. A word is defined as a sequence of characters without spaces

import sys

if __name__ == "__main__":
    print("Write two or more words: ")
    phrase=input()
    prhareInv=' '.join(reversed(phrase.split()))
    print("Reversed phrase: ", prhareInv)
    