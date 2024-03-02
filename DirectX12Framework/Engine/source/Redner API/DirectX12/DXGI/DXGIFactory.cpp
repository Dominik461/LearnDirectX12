#include "pch.h"
#include "DXGIFactory.h"

namespace Engine
{
	using namespace Microsoft::WRL;

	DXGIFactory::DXGIFactory()
	{
		RIFT_EVAL_HR(CreateDXGIFactory2(DXGI_CREATE_FACTORY_DEBUG, IID_PPV_ARGS(&ptr_)), "Some error!");
	}

	DXGIAdapter DXGIFactory::GetAdapter()
	{
		ComPtr<IDXGIFactory6> factory6;
		ComPtr<IDXGIAdapter> adapter;

		if (Get()->QueryInterface(IID_PPV_ARGS(&factory6)) == S_OK)
		{
			RIFT_EVAL_HR(factory6->EnumAdapterByGpuPreference(0, DXGI_GPU_PREFERENCE_HIGH_PERFORMANCE, IID_PPV_ARGS(&adapter)), "Error finding the adapter");
		}
		else
		{
			RIFT_ASSERT(false);
		}


		return DXGIAdapter(adapter.Get());
	}
}


