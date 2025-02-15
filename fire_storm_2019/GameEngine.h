#ifndef GAMEENGINE_H
#define GAMEENGINE_H
#include<SDL.h>
#include<vector>
#include"Sprite.h"
namespace fs19 {
	//Declares the gameloop and adding Sprite components to the gameloop que
	class GameEngine
	{
	public:
		void clearQueue();
		void remove(Sprite* s);
		void add(Sprite* s);
		void run();
		const std::vector<Sprite*> getEventQueue() const { return eventQueue; }
		int size();
		~GameEngine();
	private:
		//Gameloop que 
		std::vector<Sprite*> eventQueue;
		// tempor�ra vectorer
		std::vector<Sprite*> added, removed;

	};

	extern GameEngine ge;

}
#endif // !GAMEENGINE_H


