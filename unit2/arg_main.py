import sys

my_int = 0
my_str= ""
my_float= 0.0
my_bool = True
my_list = []

if __name__ == "__main__":

    my_int = int(sys.argv [1])
    my_str= str(sys.argv[2])
    my_float= float(sys.argv[3])
    my_bool = bool(sys.argv[4]) 
    my_list = sys.argv


    print(my_int/3, my_str, my_float, my_bool, "    |    ", my_list)