from tkinter import *
import pygame

root = Tk()
root.title(' MP3 Player')
root.iconbitmap('C:/Users/rohit/rohit1')
root.geometry("1500x1400")

pygame.mixer.init()

# Create Playlist Box
song_box = Listbox(root, bg="black", fg="green", width=60)
song_box.pack(pady=20)


forward_btn_img = PhotoImage(file='images/forward50.png')
play_btn_img = PhotoImage(file='images/play50.png')
pause_btn_img = PhotoImage(file='images/pause50.png')
stop_btn_img = PhotoImage(file='images/stop50.png')

# Create Player Control frame
controls_frame = Frame(root)
controls_frame.pack()

# Creating Player Control Buttons

forward_button =Button(controls_frame, image=forward_btn_img, borderwidth=0)
play_button =Button(controls_frame, image=play_btn_img, borderwidth=0)
pause_button =Button(controls_frame, image=pause_btn_img, borderwidth=0)
stop_button =Button(controls_frame, image=stop_btn_img, borderwidth=0)


forward_button.grid(row=0, column=1)
play_button.grid(row=0, column=2)
pause_button.grid(row=0, column=3)
stop_button.grid(row=0, column=4)


root.mainloop()