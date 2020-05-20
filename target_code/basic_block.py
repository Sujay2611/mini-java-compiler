f=open("Optimised.txt","r")
no=1
leader=[]
file2=list(f)
labels=dict()
for line in range(len(file2)):
    if(':' in file2[line]):
        k=file2[line].split(" ")
        labels[k[0]]=line
#print(labels)
for line in range(len(file2)):
    q=file2[line].split(" ")
    if(line==0):
        leader.append(file2[0])
    if('goto' in q):
        e=(q[-1]).replace("\n","")
        if(e in labels):
            d=labels[e]
            #print(line,d)
            leader.append(file2[d])
        leader.append(file2[line+1])
#print(leader)

final_leader=[]
for i in leader:
    final_leader.append(i.replace("\n",""))
all_leaders=list(set(final_leader))
#print(all_leaders)
line_no=[]
for i in all_leaders:
    line_no.append(file2.index(i+"\n"))
p=dict()
for i in range(len(all_leaders)):
    p[line_no[i]]=final_leader[i]
    #print(f"Leader = {p[i]}")
    #print(f"Line number = {i}")
    #print('')
#print('\n')
q=list(p.keys())
q.sort()
c=1
for i in range(1,len(q)):
    print(f"Basic Block {c}")
    c+=1
    for j in range(q[i-1],q[i]):
        z=file2[j].replace("\n","")
        print(z)
    print('')
print(f"Basic Block {c}")
for k in range(q[-1],len(file2)):
    z=file2[k].replace("\n","")
    print(z)

print('')
