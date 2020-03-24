def iterator(chain):
    string=''
    for i in range(0,10):
        string=string+chain+str(i)+'\n'
    return string
file=open('test.txt','w+')
file.write(iterator("Hola"))
