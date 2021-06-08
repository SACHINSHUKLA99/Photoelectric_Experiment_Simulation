








from monkeylearn import MonkeyLearn
import json

ml = MonkeyLearn('ddd4815d456a9a5ec65bdfc4227bca7678c3d6fe')


from tkinter import *
root = Tk()
root.title("GUI")
root.geometry('500x450')
#Create clear funtion
def clear():
    my_text.delete(1.0,END)

def retrieve_input():
        inputValue=my_text.get(1.0,END)
        classify(inputValue)


my_text = Text(root , width = 50 , height = 10, font = ('Helvetica' , 16))
my_text.pack(pady=20)

button_frame = Frame(root)
button_frame.pack()

clear_button = Button(button_frame , text = "Clear" , command = clear)
clear_button.grid(row=0,column=0)

get_text_button = Button(button_frame , text = "Get Text" , command = lambda: retrieve_input())
get_text_button.grid(row = 0 ,column =1 ,pady =20)

# my_label = Label(root , text ='')
# my_label.pack(pady=20)
def classify(value):
    data = [value]
    print(value)
    model_id = 'cl_hXBcJoad'
    result = ml.classifiers.classify(model_id, data)
    # print(result.body)
    data = result.body[0]['classifications']
    # print(data)
    print(data[0]['tag_name'],data[0]['confidence'])
    if len(data)>1:
        print(data[1]['tag_name'],data[1]['confidence'])





root.mainloop()
