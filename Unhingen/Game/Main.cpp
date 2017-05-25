#include "../Common/Types.h"
#include "../Display/Display.h"
//#include "../Common/Includes.h"
#include "../Common/Game/Entity/Entity.h"
#include "Entities/Player/Player.h"
#include "../Map.h"
#include <vector>

// Global for now
typedef struct GameState_t {
	Player player;
	std::vector<tuEntity> entities;
	Map map;
	boolean running;
} GameState;

// Initializes the game
void Init( GameState_t state ) {
	state.running = true;
	state.entities = std::vector<tuEntity>();
	//state.map = mapLoader.load("/map.mp");
}

// updates everything that can be updated
void Update( GameState_t state ) {

}

// renders everything that can be rendered
void Render( GameState_t state ) {

}

// Game goes here
int main( int argc, char* argv[] ) {
	GameState state;

	// create a player

	// initialize the game
	Init( state );

	while ( state.running ) {

		// update things
		Update( state );
		// render things
		Render( state );

	}

	return 0;
}
