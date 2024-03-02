#include "pch.h"
#include "RenderAPI.h"

#include "DirectX12/DXGI/DXGIFactory.h"

namespace Engine
{
	RenderAPI::~RenderAPI()
	{
	}

	void RenderAPI::Initialize(HWND hwnd)
	{
		DXGIFactory dxgiFactory;

		DXGIAdapter adapter = dxgiFactory.GetAdapter();

		DXGI_ADAPTER_DESC desc;
		adapter->GetDesc(&desc);

		PRINT_W_N("Selected GPU: " << desc.Description)

		mDevice.Initialize(adapter.Get());

		mDevice->SetName(L"Main virtual device");
	}
}



