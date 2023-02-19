input
graphics
entity
component
sprite
audio

tilemaps

scenes -> scene load 
saving files -> i/o

integration with OpenGL / Vulkan
2D Physics -> 3D Physics. I'm gonna do what Unity does and just do sth like BoxCollider2D vs BoxCollider

attempt to be declarative

high level overview
game - has - active scene
scenes - have - entities
entities - have - components
entities - have - update, processInput, render
components - have - update, render, they shouldn't take input. Things like sprites, etc