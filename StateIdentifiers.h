#pragma once

#ifndef STATEIDENTIFIERS_H
#define STATEIDENTIFIERS_H


namespace States
{
	enum ID
	{
		None,
		Title,
		Menu,
		Game,
		Loading,
		Pause,
		NetworkPause,
		Settings,
		GameOver,
		MissionSuccess,
		HostGame,
		JoinGame,
	};
}

#endif // STATEIDENTIFIERS_H