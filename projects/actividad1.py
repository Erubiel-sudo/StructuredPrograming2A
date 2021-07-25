import sys

phrase=None
prhareInv=None

if __name__ == "__main__":
    print("\n Write two or more words: ")
    phrase=input()
    prhareInv=' '.join(reversed(phrase.split()))
    print("\n Reversed phrase: ", prhareInv)
    