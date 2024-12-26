direction=input()

typing_word=input()
keyboard_key="qwertyuiopasdfghjkl;'zxcvbnm,./"

original_message=""

for char in  (typing_word):
    for i in range(0,len(keyboard_key)):
        if keyboard_key[i]==char:
            if direction=="L":
                original_message+=keyboard_key[i+1]
            else:
                original_message+=keyboard_key[i-1]
            break

print(original_message)

    
