high level overview
game - has - active scene
scenes - have - entities
entities - have - components
entities - have - update, processInput, render
components - have - update, render, they shouldn't take input. Things like sprites, etc
all SDL details should be abstracted away from the programmer

🤔 Decisions:
[🦆] Should I make Graphics, Input, Game singletons? My thought process is: passing a reference of, say, Graphics to entity and then component, etc is dang annoying and kinda reminds me of prop drilling in React 🍝. But I also might regret using the Singleton pattern for some unforeseen reason I don't know of yet.

🌕 Moonshot goals:
DSL for programming games with carp
UI Editor

[✅] Input
[✅] Graphics
[✅] Entity
[✅] Component
[✅] Sprite
[✅] Frame-rate capping
[❌] Camera
[❌] Audio
[❌] Tilemaps
[❌] Scenes
[❌] Scene Load
[❌] File i/o
[❌] Integration with OpenGL / Vulkan
[❌] 2D Physics -> 3D Physics. I'm gonna do what Unity does and just do sth like BoxCollider2D vs BoxCollider

attempt to be declarative