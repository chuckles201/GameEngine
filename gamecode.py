import pygame
import sys

# always use to initialize
pygame.init()

# set screen and width
width = 800; height = 400
screen = pygame.display.set_mode((width,height))

# create a title
pygame.display.set_caption('Hello')

# timing and framerate (update screen)
clock = pygame.time.Clock()

'''
Creating a surface.
This is what is displayed
as the background.

'''
test_surface = pygame.Surface((100,100))
test_surface.fill('blue')

''' 
games are meant to continously update
# frames while taking input from user
'''

while True:
    
    # iterate over inputs...
    for event in pygame.event.get():
        # see if this action happens.
        if event.type == pygame.QUIT:
            pygame.quit()
            # close code
            sys.exit()
            
    # putting surface on
    # position in chords
    screen.blit(test_surface,(0,0))
    
    # continually draw display
    pygame.display.update()
    
    # tick 1/60 seconds (60 fps)
    clock.tick(60)