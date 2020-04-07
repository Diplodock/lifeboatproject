#include "character.h"
#include "game_state.h"
#include "item.h"

class Action {
  public:
    Action(GameState* game_state);

    void UseWater(int id);
    void UseUmbrella(int id);
    void UseFirstAidKit(int id_first_aid_kit, int id_character);
    void UseCompass(int id);
    void UseBait(int id);
    void UsePaddle(int id);
    void UseLifelene(int id_lifeline, int id_character);
    void UseFlareGun(int id);

    void ChooseCharacterCard(int id);
    void TakeItems(std::vector<int> id);
    void TakeNavigationCard(int id);
    void ChooseItem(int id);
    void ChooseNavigationCard(int id);
    void Skip();

    void Row();
    void Fight(int id);
    void TryToSwap(int id);
    void TryToTakeGoods(int id_thing, int id_character);
    void TryToGiveGoods(int id_thing, int id_character);

    // void drinkWater(Character* thirsty);
    // void useUmbrella(Character* thirsty);
    // void healCharacter(Character* healed);
    // void addNavigation(GameState* current_game_state);
    // void baitSharks(GameState* current_game_state) {
    
    // void Paddle::row(GameState* current_game_state) {
    //     Navigation* current_navigation_card = (*current_game_state).GetNavigationCard();
    //     (*current_game_state).PutCardOnNavigationTable(current_navigation_card);
    // }

    // void Lifeline::useLifiline(Character* saved) {
    //     (*saved).SetWounds = (*saved).GetWounds - 1;
    // }

    // void FlareGun::addThreeNavigation(GameState* current_game_state) {
    //     for (std::size_t i = 0; i < 3; i++) {
    //         Navigation* current_navigation_card = (*current_game_state).GetNavigationCard();
    //         (*current_game_state).PutCardOnNavigationTable(current_navigation_card);
    //     }
    // }
  private:
    GameState* game_state_;
};