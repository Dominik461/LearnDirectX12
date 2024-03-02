#pragma once
#include "EngineMin.h"

#include <Windows.h>

#include "Render API/RenderAPI.h"

namespace Engine
{

	class RIFT_API Application
	{
	public:
		Application() = default;

		bool Initialize();

		void Update();

		void OnCreate(HWND hwnd);

		void OnDestroy();

		inline bool  IsRunning() { return mIsRunning; }

	private:
		RenderAPI mRenderer;

	private:
		HWND mWindowHandle = nullptr;
		bool mIsRunning = false;

	};
}

