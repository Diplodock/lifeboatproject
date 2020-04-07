#include "goods.h"


void Water::DrinkWater(Character* thirsty) {
    (*thirsty).SetThirst(false);
}

void Umbrella::HoldUmbrella(Character* thirsty) {
    (*thirsty).HoldUmbrella(true);
}

void FirstAidKit::HealCharacter(Character* healed) {
    (*healed).SetWounds((*healed).GetWounds() - 1);
}

void Compass::AddNavigation(GameState* current_game_state) {
    Navigation* current_navigation_card = (*current_game_state).GetNavigationCard();
    (*current_game_state).PutCardOnNavigationTable(current_navigation_card);
}

void Bait::BaitSharks(GameState* current_game_state) {
    std::size_t current_size = (*current_game_state).GetSizeOfOutboard();
    for (std::size_t i = 0; i < current_size; i++) {
        Character* outboard_character = (*current_game_state).GetCharacterOutboard(i);
        (*outboard_character).SetWounds((*outboard_character).GetWounds() + 1);
    }
}

void Lifeline::UseLifiline(Character* saved) {
    (*saved).SetWounds ((*saved).GetWounds() - 1);
}