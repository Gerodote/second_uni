import pathlib

path = pathlib.Path("./file.txt")

with open(path, 'r') as f:
    lines = f.readlines()
    print(lines)

class Foo():
    def __init__(self, bar) -> None:
        self.__bar = bar
        
class Zoo(Foo):
    def __init__(self, foo:Foo, zoo) -> None:
        super().__init__(foo)
        self.__zoo = zoo
        

smth = Foo("bar")

smth_2 = Zoo(smth, "zoo")


