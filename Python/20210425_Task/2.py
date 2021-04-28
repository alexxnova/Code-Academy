#passing integers
@dispatch(int,int)
def product(first,second):
    result = first+second
    print(result);
#passing strings
@dispatch(str,str)
def product(first,second):
    result  = first + second
    print(result);
#passing str and int
@dispatch(str,int)
def product(first,second):
    result  = first * second
    print(result);
product(1,2) # 3
product("Name","Milena") # NameMilena
product("Name",2) # NameName
