from tkinter import *

WIDTH = 35
HEIGHT = 35
a = [[0, 0, 0, 0, 0] for i in range(5)]
b = [[0, 0, 0, 0, 0] for i in range(5)]

window = Tk()
window.title("Транспонирование матрицы ОНЛАЙН")
window.geometry('800x500')

buttons = [Entry(window, width=5) for i in range(5*5)]
for i in range(5):
    for j in range(5):
        buttons[j + i * 5].insert(0, "0")
        buttons[j + i * 5].place(x=i*WIDTH, y=j*HEIGHT, width=WIDTH, height=HEIGHT)


def transpose():
    for i in range(5):
        for j in range(5):
            a[i][j] = int((buttons[j + i * 5].get()))

    for i in range(5):
        for j in range(5):
            b[i][j] = a[j][i]

    for i in range(5):
        for j in range(5):
            buttons[j + i * 5].delete(0, 'end')
            buttons[j + i * 5].insert(0, str(b[i][j]))


transp_button = Button(window, text='Transpose', font=('Times New Roman', 20), command=transpose)
transp_button.place(x=0, y=HEIGHT*5)

window.mainloop()







