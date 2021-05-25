import sys 

##Variables Globales##
my_int = 0
my_str = ""
my_float = 0.0
my_bool = True ##False
my_list = [] ## list()


if __name__ == "__main__":

    my_int = sys.argv[1]
    my_str = sys.argv[2]
    my_float = sys.argv[3]
    my_bool = sys.argv[4]
    my_list = sys.argv

    print(  my_int      , my_str, my_float, my_bool, "|" , my_list  )