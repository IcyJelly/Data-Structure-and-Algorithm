lista = [1,3,5,7,8];
item = 10;
position = 4 ;
numelement = len(lista);
j = numelement - 1 
i = 0;
counter = 0;

print ("The original array:");

print ();

while i < numelement:
    print ("index: " , i , "","Value:", lista[i]);
    i = i + 1 ;

newnum = numelement + 1 ;

lista.append("");

print ();

print ("The appended array: ");

print ();

while ( j >= position):
    lista[j+1] = lista[j]
    j = j - 1 ;

lista[position] = item;

while counter < newnum:
    print ("index: " , counter , "", "Value:", lista[counter]);
    counter = counter + 1 ;

