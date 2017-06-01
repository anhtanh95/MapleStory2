/*!
* \file Enum.h
* \date 2017/04/28 15:33
*
* \author Administrator
* Contact: user@company.com
*
* \brief
*
* TODO: long description
*
* \note
*/

#ifndef Enum_h__
#define Enum_h__

enum SCENEID { SCENE_LOGO, SCENE_STAGE, SCENE_PARTYROOM, SCENE_PARTYFALL, SCENE_PARTYMAZE, SCENE_BATTLEGROUND, SCENE_END };

enum LAYERID { LAYER_ENVIROMENT, LAYER_GAMELOGIC, LAYER_UI };

enum eCUBESEQUENCE { CUBE_FIRST, CUBE_SECOND, CUBE_FINAL, CUBE_END};

enum ePORTALID { PORTAL_PARTYROOM_TO_PARTYFALL, PORTAL_PARTYROOM_TO_PARTYMAZE, PORTAL_PARTYROOM_TO_BATTLEGROUND };

enum eBULLETID { BULLET_NORMAL, BULLET_END};

enum eITEMID { ITEM_PORTION, ITEM_END };

enum PLAYER_DIR {
	DIR_B, DIR_R, DIR_RB, DIR_RT, DIR_T,
	DIR_L, DIR_LB, DIR_LT,
};

enum PLAYER_STATE { PLAYER_STAND, PLAYER_WALK, PLAYER_JUMP };

enum eObserverMessage { 
	// PartyRoom
	MESSAGE_PORTAL_CREATE,

	// PartyFall
	MESSAGE_PARTYFALLCUBE_CREATE, MESSAGE_PLAYER_POSITION,
	MESSAGE_PARTYFALLITEM_CREATE, MESSAGE_PLAYER_DATA,
	MESSAGE_PARTYFALLPLAYER_CREATE, MESSAGE_PLAYER_FALL,

	// PartyMaze
	MESSAGE_PARTYMAZEWALL_CREATE, MESSAGE_PARTYMAZELIGHT_CREATE,

	// BattleGround
	MESSAGE_BULLET_CREATE, MESSAGE_BATTLE_PLAYER_DATA, MESSAGE_BULLET_PLAYER_INDEX, // Bullet
	MESSAGE_ITEM_CREATE, MESSAGE_BATTLE_PLAYER_DATA_ITEM, // Item
	MESSAGE_METEOR_CREATE, // Meteor
};

enum eGameState { ROUND_READY,  ROUND_PROGRESS, ROUND_END,  GAME_END };
				// ���� �غ�, ���� ������,  ���� ���� ���� ������ ����

enum WALL_DIR { WALL_LEFT, WALL_RIGHT, WALL_BACK, WALL_FRONT, WALL_END };

enum FLOOR_ID { PARTYROOM_FLOOR, PARTYMAZE_FLOOR, BATTLEGROUND_FLOOR, FLOOR_END};

enum SKYBOX_ID { STAGE_SKYBOX, PARTYMAZE_SKYBOX, BATTLEGROUND_SKYBOX, SKYBOX_END };


#endif // Enum_h__