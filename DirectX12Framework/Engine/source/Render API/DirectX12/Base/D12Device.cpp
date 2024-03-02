#include "pch.h"
#include "D12Device.h"

namespace Engine
{
	D12Device::D12Device(IDXGIAdapter* pAdapter)
	{
		Initialize(pAdapter);
	}

	void D12Device::Initialize(IDXGIAdapter* pAdapter)
	{

		RIFT_EVAL_HR(D3D12CreateDevice(pAdapter, D3D_FEATURE_LEVEL_12_1, IID_PPV_ARGS(GetAddressOf())), "Error creating DX12 device!")
	}
}