#ifndef SPRITE_MANAGER_H
#define SPRITE_MANAGER_H

#include <unordered_map>
#include <string>

struct SDL_Texture;

class SpriteManager
{
public:
    SpriteManager();
    ~SpriteManager();
    static SpriteManager& instance()
    {
        static SpriteManager* instance = new SpriteManager();
        return *instance;
    }
    
    SDL_Texture* loadTexture(std::string path);
private:
    std::unordered_map<std::string, SDL_Texture*> sprite_sheets;
};

#endif