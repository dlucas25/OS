lista=[5,1,4,8,2,9,3]
elementos=len(lista)
i=0
while (i<elementos):
	j=i
	while (j<elementos):
		if(lista[i]>lista[j]):
			temp=lista[i]
			lista[i]=lista[j]
			lista[j]=temp
		j=j+1
	i=i+1
print(lista)
