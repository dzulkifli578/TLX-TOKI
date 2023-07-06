bilangan = int (input ())

if bilangan > 0 and bilangan < 10:
    print ("satuan")
elif bilangan < 100:
    print ("puluhan")
elif bilangan < 1000:
    print ("ratusan")
elif bilangan < 10000:
    print ("ribuan")
elif bilangan < 100000:
    print ("puluhribuan")