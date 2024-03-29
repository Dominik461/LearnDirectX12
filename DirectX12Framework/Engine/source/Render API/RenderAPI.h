#pragma once
#include "../EngineMin.h"
#include <Windows.h>

#include "DirectX12/Base/D12Device.h"

namespace Engine
{
	class RIFT_API RenderAPI
	{
	public:
		RenderAPI() = default;
		~RenderAPI();

		void Initialize(HWND hwnd);

	private:
		D12Device mDevice;
	};
}


