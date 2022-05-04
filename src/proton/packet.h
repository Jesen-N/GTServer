#pragma once
#include <stdint.h>

enum : int32_t {
    NET_MESSAGE_UNKNOWN,
    NET_MESSAGE_SERVER_HELLO,
    NET_MESSAGE_GENERIC_TEXT,
    NET_MESSAGE_GAME_MESSAGE,
    NET_MESSAGE_GAME_PACKET,
    NET_MESSAGE_ERROR,
    NET_MESSAGE_TRACK,
    NET_MESSAGE_CLIENT_LOG_REQUEST,
    NET_MESSAGE_CLIENT_LOG_RESPONSE
};

enum : uint8_t {
    NET_GAME_PACKET_STATE,
    NET_GAME_PACKET_CALL_FUNCTION,
    NET_GAME_PACKET_UPDATE_STATUS,
    NET_GAME_PACKET_TILE_CHANGE_REQUEST,
    NET_GAME_PACKET_SEND_MAP_DATA,
    NET_GAME_PACKET_SEND_TILE_UPDATE_DATA,
    NET_GAME_PACKET_SEND_TILE_UPDATE_DATA_MULTIPLE,
    NET_GAME_PACKET_TILE_ACTIVATE_REQUEST,
    NET_GAME_PACKET_TILE_APPLY_DAMAGE,
    NET_GAME_PACKET_SEND_INVENTORY_STATE,
    NET_GAME_PACKET_ITEM_ACTIVATE_REQUEST,
    NET_GAME_PACKET_ITEM_ACTIVATE_OBJECT_REQUEST,
    NET_GAME_PACKET_SEND_TILE_TREE_STATE,
    NET_GAME_PACKET_MODIFY_ITEM_INVENTORY,
    NET_GAME_PACKET_ITEM_CHANGE_OBJECT,
    NET_GAME_PACKET_SEND_LOCK,
    NET_GAME_PACKET_SEND_ITEM_DATABASE_DATA,
    NET_GAME_PACKET_SEND_PARTICLE_EFFECT,
    NET_GAME_PACKET_SET_ICON_STATE,
    NET_GAME_PACKET_ITEM_EFFECT,
    NET_GAME_PACKET_SET_CHARACTER_STATE,
    NET_GAME_PACKET_PING_REPLY,
    NET_GAME_PACKET_PING_REQUEST,
    NET_GAME_PACKET_GOT_PUNCHED,
    NET_GAME_PACKET_APP_CHECK_RESPONSE,
    NET_GAME_PACKET_APP_INTEGRITY_FAIL,
    NET_GAME_PACKET_DISCONNECT,
    NET_GAME_PACKET_BATTLE_JOIN,
    NET_GAME_PACKET_BATTLE_EVENT,
    NET_GAME_PACKET_USE_DOOR,
    NET_GAME_PACKET_SEND_PARENTAL,
    NET_GAME_PACKET_GONE_FISHIN,
    NET_GAME_PACKET_STEAM,
    NET_GAME_PACKET_PET_BATTLE,
    NET_GAME_PACKET_NPC,
    NET_GAME_PACKET_SPECIAL,
    NET_GAME_PACKET_SEND_PARTICLE_EFFECT_V2,
    NET_GAME_PACKET_ACTIVE_ARROW_TO_ITEM,
    NET_GAME_PACKET_SELECT_TILE_INDEX,
    NET_GAME_PACKET_SEND_PLAYER_TRIBUTE_DATA
};