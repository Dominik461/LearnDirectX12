#include "pch.h"
#include "RenderAPI.h"

#include "DirectX12/DXGI/DXGIFactory.h"
#include "DirectX12/DXGI/DXGIAdapter.h"

#include "DirectX12/Debug/D12Debug.h"

namespace Engine
{
	RenderAPI::~RenderAPI()
	{
		if (mDevice.Get())
		{
			mDevice.Reset();
		}
	}

	void RenderAPI::Initialize(HWND hwnd)
	{
		D12Debug::Get().Enable();

		DXGIFactory dxgiFactory;
		DXGIAdapter adapter = dxgiFactory.GetAdapter();

		DXGI_ADAPTER_DESC desc;
		adapter->GetDesc(&desc);

		PRINT_W_N("Selected GPU: " << desc.Description)

		mDevice.Initialize(adapter.Get());

		mDevice->SetName(L"Main virtual device");
	}
}



