bilangan = float (input ())

floor_positif, ceiling_positif, floor_negatif, ceiling_negatif = 0, 0, 0, 0

if bilangan == int (bilangan):
    bilangan = int (bilangan)
    print (bilangan)
elif bilangan > 0:
    floor_positif = int (bilangan)
    ceiling_positif = floor_positif + 1
    print (floor_positif, ceiling_positif)
elif bilangan < 0:
    ceiling_negatif = int (bilangan)
    floor_negatif = ceiling_negatif - 1
    print (floor_negatif, ceiling_negatif)
