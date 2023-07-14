import serial
import time
import pygame

pygame.init()
pygame.joystick.init()
joystick = pygame.joystick.Joystick(0)
joystick.init()

ser = serial.Serial(port ='COM6', baudrate=115200, timeout=0.000000000000000000001)

while True:
    pygame.event.pump()
    pygame.event.get()
    buttons = [joystick.get_button(i) for i in range(joystick.get_numbuttons())]

    r2 = round(joystick.get_axis(5), 2)
    r2_v= int((r2+1) * 127.5)  #-1,1 to 0,255
    
    l2 = round(joystick.get_axis(4), 2)
    l2_v= int((l2+1) * 127.5) #-1,1 to 0,25
    

#**********************************************************************************************************     
    if buttons[0]:
        ser.write(b'a')

    elif   buttons[11]:
        ser.write(b'1') 


    elif   buttons[11]:
        ser.write(b'2')       
        
    elif r2_v>0 and buttons[11]:
        

        if r2_v >0 and r2_v<=30:
            ser.write(b'A') 
            print('A') 

        elif r2_v >30 and r2_v<=60:
            ser.write(b'S')    
        
        elif r2_v >60 and r2_v<=90:
            ser.write(b'D')        

        elif r2_v >90 and r2_v<=120:
           ser.write(b'F')            

        elif r2_v >120 and r2_v<=150:
           ser.write(b'G')            

        elif r2_v >150 and r2_v<=180:
            ser.write(b'H')                

        elif r2_v >180 and r2_v<=210:
            ser.write(b'J')             

        elif r2_v >210 and r2_v<=240:
           ser.write(b'K')                    

    elif r2_v>0  :
        

        if r2_v >0 and r2_v<=30:
             ser.write(b's') 
             print('s') 

        elif r2_v >30 and r2_v<=60:
             ser.write(b'd')    
      
        elif r2_v >60 and r2_v<=90:
            ser.write(b'f')        

        elif r2_v >90 and r2_v<=120:
           ser.write(b'g')            

        elif r2_v >120 and r2_v<=150:
           ser.write(b'h')            

        elif r2_v >150 and r2_v<=180:
            ser.write(b'j')                

        elif r2_v >180 and r2_v<=210:
            ser.write(b'k')             

        elif r2_v >210 and r2_v<=240:
           ser.write(b'l')                    


#************************************************************************************************************
     

    if l2_v>0 and  buttons[11]:
        

        if l2_v >0 and l2_v<=30:
             ser.write(b'Z')  
             print('Z')

        elif l2_v >30 and l2_v<=60:
             ser.write(b'X')    
      
        elif l2_v >60 and l2_v<=90:
            ser.write(b'C')        

        elif l2_v >90 and l2_v<=120:
           ser.write(b'v')            

        elif l2_v >120 and l2_v<=150:
           ser.write(b'Q')            

        elif l2_v >150 and l2_v<=180:
            ser.write(b'B')                

        elif l2_v >180 and l2_v<=210:
            ser.write(b'N')             

        elif l2_v >210 and l2_v<=240:
           ser.write(b'M')                    




    elif l2_v>0 :
        

        if l2_v >0 and l2_v<=30:
             ser.write(b'z')
             print('z')  

        elif l2_v >30 and l2_v<=60:
             ser.write(b'x')    
      
        elif l2_v >60 and l2_v<=90:
            ser.write(b'c')        

        elif l2_v >90 and l2_v<=120:
           ser.write(b'v')            

        elif l2_v >120 and l2_v<=150:
           ser.write(b'b')            

        elif l2_v >150 and l2_v<=180:
            ser.write(b'n')                

        elif l2_v >180 and l2_v<=210:
            ser.write(b'm')             

        elif l2_v >210 and l2_v<=240:
           ser.write(b'y')                    



#************************************************************************************************************

    
         



     

   


    