def split_words():
    op = open('test.txt', 'r') 
    
    string_op = op.read() # Turns op into a string
    
    split_op = string_op.rsplit() # Splits op into a list with string values
    
    for i in split_op:
        print i
    

def main():
    split_words()

if __name__ == '__main__':
    main()
    