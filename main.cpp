def paieskaIPloti(grafas, start, obj):
    aplankyta = set() 
    eile = [start]  

    aplankyta.add(start)
    
    while eile:
        virsune = eile.pop(0) 
        print(f"Aplankyta virsune: {virsune}")  
        
        if virsune == obj:
            print(f"Rasta virsune: {virsune}")
            return virsune
        
        for i in grafas[virsune]:
            if i not in aplankyta:
                aplankyta.add(i)
                eile.append(i)
    
    print(f"Virsune {obj} nerasta.")
    return None
                
grafas = {
    'A': ['B', 'C'],
    'B': ['A', 'D', 'E'],
    'C': ['A', 'F'],
    'D': ['B'],
    'E': ['B', 'F'],
    'F': ['C', 'E']
}
paieskaIPloti(grafas, 'A', 'F')  
