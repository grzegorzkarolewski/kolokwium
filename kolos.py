#Zadanie 1

#A
liczbyParzyste = [x for x in range(20) if x % 2 == 0]
print(liczbyParzyste)

#B
tekst = "Ala ma kota"
dlugoscSlow = [len(slowo) for slowo in tekst.split()]
print(dlugoscSlow)

#C
liczbyPodzielnePrzez3I5 = [x for x in range(100) if (x % 2 == 0) and (x % 5 == 0)]
print(liczbyPodzielnePrzez3I5)

#D
slowo1 = "kot"
slowo2 = "pies"
zbior_znakow = set(slowo1) | set(slowo2)
print(zbior_znakow)

#E
zdanie = "To jest przykładowe zdanie do przetworzenia."
slownik_dl = {slowo: len(slowo) for slowo in zdanie.split()}
print(slownik_dl)

#=======================================================================================
#Zadanie 2
import random
import statistics

random.seed(123456) #jaki mam numer indeksu?
lista= [random.randrange(1, 101) for i in range(200)]

#1
#Pierwsza wersja
minElement = min(lista)
print(minElement)

## Druga wersja
najmniejszy = lista[0]
for element in lista:
    if element < najmniejszy:
        najmniejszy = element

print(najmniejszy)

#2
mediana = statistics.median(lista)
print(mediana)

#3
iloczyn = 1
lista_liczb = [1, 2, 3, 4 ,5]
for element in lista_liczb:
    iloczyn *= element

print(iloczyn)

#4
liczba_dwucyfrowych = 0

for element in lista:
    if element >= 10 and element <= 99:
        liczba_dwucyfrowych += 1

print("Liczba dwucyfrowych elementów na liście: ", liczba_dwucyfrowych)

#5
liczba_wiekszych = 0

for element in lista:
    if element > 27:
        liczba_wiekszych += 1

print("Liczba elementów większych niż 27: ", liczba_wiekszych)

#6
licznik = {}
for element in lista:
    if element in licznik:
        licznik[element] += 1
    else:
        licznik[element] = 1

for element, liczba in licznik.items():
    print(str(element) + " występuje " + str(liczba) + " razy na liście.")

#7

posortowana_lista = sorted(lista)

print("Najmniejsze 20 elementów listy:")
for element in posortowana_lista[:20]:
    print(element)
