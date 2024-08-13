from typing import List

def cellsInRange(s: str) -> List[str]:
    arr, oo = s.split(":")
    begin_number = int(arr[1])
    end_number = int(oo[1])
    
    begin_letter = arr[0]
    end_letter = oo[0]
    
    result = []
    
    for i in range(ord(begin_letter), ord(end_letter) + 1):
        for j in range(begin_number, end_number + 1):
            result.append(f"{chr(i)}{j}")
            
    return result

# Example usage
s = "K1:L2"
print(cellsInRange(s))
