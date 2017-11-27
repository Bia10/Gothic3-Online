#ifndef _PLAYERRPC_H
#define _PLAYERRPC_H
namespace PlayerRPC
{
	void OnJoin(BitStream* userData, Packet* packet);
	void OnDisconnect(Packet* packet); //To ma by� wywo�ywane ze switcha
	void OnMatrix(BitStream* data, Packet* packet);
	void OnAnim(BitStream* data, Packet* packet);
	void OnStats(BitStream* data, Packet* packet);
	void OnEquippedItems(BitStream* data, Packet* packet);
	void OnCombatMode(BitStream* data, Packet* packet);
	void OnHit(BitStream* data, Packet* packet);
};
#endif