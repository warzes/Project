#include "stdafx.h"
#include "Engine/CoreContext.h"
//-----------------------------------------------------------------------------
#if defined(_MSC_VER)
#	pragma comment( lib, "3rdparty.lib" )
#	pragma comment( lib, "Engine.lib" )
#endif

https://github.com/dimi309/small3d
https://github.com/michaelh800/thinmatrix-game-engine
http://rpg-paper-maker.com/index.php/features
https://github.com/RPG-Paper-Maker/RPG-Paper-Maker
https://github.com/WickedNekomata/NekoEngine
https://github.com/lettier/3d-game-shaders-for-beginners/tree/master/sections
https://github.com/AndrewMeshekoff/Portfolio/tree/master/Graphics/Procedural%20Islands
https://axelsdiy.brinkeby.se/?page_id=1006
https://www.youtube.com/watch?v=HmFr7tbOsWY
https://www.youtube.com/watch?v=oJ0vrDTA0sA&t=7s
https://github.com/aoblet/luminolGL/
//-----------------------------------------------------------------------------
//inline EngineCreateInfo getEngineCreateInfo()
//{
//	EngineCreateInfo engineCreateInfo;
//	return engineCreateInfo;
//}
//-----------------------------------------------------------------------------
inline void ImplMain()
{
	//Engine engine;
	//if (engine.Create(getEngineCreateInfo()))
	//{
	//	GameApp game;
	//	if (game.Init(&engine))
	//	{
	//		while (engine.IsRun())
	//		{
	//			engine.BeginFrame();
	//			game.Frame(engine.GetDeltaTime());
	//			engine.EndFrame();
	//		}
	//	}
	//	game.Close();
	//}
	//engine.Destroy();
}
//-----------------------------------------------------------------------------
int main(
	[[maybe_unused]] int   argc,
	[[maybe_unused]] char* argv[])
{
	Context context;
	auto* s = context.GetSystem<LogSystem>();


	ImplMain();
	return 0;
}
//-----------------------------------------------------------------------------