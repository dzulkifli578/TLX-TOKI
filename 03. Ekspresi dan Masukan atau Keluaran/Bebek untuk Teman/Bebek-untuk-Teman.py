# map(int, ...)   = mengonversi nilai yang dipisahkan menjadi bilangan bulat.
# input().split() = memisahkan nilai A dan B yang dipisahkan oleh spasi.

# meminta user memasukkan jumlah bebek dan jumlah teman
bebek, teman = map (int, input ().split ())

# menghitung berapa banyak bebek yang didapat masing-masing
print ("masing-masing", int (bebek / teman))
# menghitung sisa bebek setelah dibagi rata
print ("masing-masing", bebek % teman)