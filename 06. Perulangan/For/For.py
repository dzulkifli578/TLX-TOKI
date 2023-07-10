kandang_bebek = int (input ())
jumlah_bebek = 0

bebek_list = input ().split ()

for i in range (kandang_bebek):
    bebek = int (bebek_list [i])
    jumlah_bebek += bebek

print (jumlah_bebek)