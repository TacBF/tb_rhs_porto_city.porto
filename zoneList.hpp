#include "tb_defines.hpp"
//Mission: tb_Anthrakia_Docks
zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY ,    {2}      	, {}    , 1      , {}        , 0    , "%3" },

{ 2, TEAM_RED, 	SPAWN_NEVER,    {3}      	, {}   	, 1      , {}        , 0    , "Village" },

{ 3, TEAM_RED, 	SPAWN_NEVER,    {4}  		, {}    , 1      , {}        , 0    , "Market" },

{ 4, TEAM_RED, 	SPAWN_NEVER,    {5}      	, {}   	, 1      , {}        , 0    , "Yusif's Safehouse" },

{ 5, TEAM_RED, 	SPAWN_NEVER,    {6}      	, {}   	, 1      , {}        , 0    , "Northern Stronghold" },

{ 6, TEAM_RED, 		SPAWN_NEVER,    {7}		, {}    , 1      , {}        , 0    , "Overwatch" },

{ 7, TEAM_RED, 		SPAWN_XRAY ,    {}      	, {}    , 1      , {}        , 0    , "Insurgent Main" },

{ 8, TEAM_RED, 		SPAWN_INSTANT,    {}		, {}    , 1      , {5,7}        , 1    , "Forward Base" },

{ 9, TEAM_BLUE, 		SPAWN_INSTANT ,    {}      	, {}    , 1      , {}        , 0    , "Forward Base" }
};
