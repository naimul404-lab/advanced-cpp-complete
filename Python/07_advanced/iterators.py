class MyIterator:
    def __iter__(self):
        self.n = 0
        return self

    def __next__(self):
        if self.n <= 5:
            value = self.n
            self.n += 1
            return value
        raise StopIteration

for i in MyIterator():
    print(i)
