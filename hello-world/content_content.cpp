



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

		return hr;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	SAFE_RELEASE(m_pDepthStencilView);

	if (FAILED(hr))

	DXGI_SWAP_CHAIN_DESC scDesc;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

		{

	return 0;



 * Lesson 1: Hello World!

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			{

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

			}

	if (!reader.Warning().empty())

	{

	}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

		flags,

	//ピクセルシェーダー生成

/*

		{

	D3D11_SUBRESOURCE_DATA vrData;

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SAFE_RELEASE(m_pTexture);

			// Loop over vertices in the face.

		{

	ZeroMemory(&dsDesc, sizeof(dsDesc));

				indexlist.push_back(idx.vertex_index);

	SDL_DestroyWindow(win);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));





	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	{

	scDesc.SampleDesc.Quality = 0;

	//vector<Vertex> vertex_t;

		m_pImmediateContext->ClearState();

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];





	HRESULT              hr;

			case SDLK_LEFT:



			case SDLK_LEFT:

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	m_pDevice = NULL;

	//定数バッファ作成

	//First we need to start up SDL, and make sure it went ok

	ZeroMemory(&txDesc, sizeof(txDesc));

			}

};

	m_pDepthStencilView = NULL;

	cbDesc.StructureByteStride = 0;



	ID3D11Texture2D* pBackBuffer;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

#include "DirectXManager.h"

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

		{

	SDL_Quit();

	//Create Index

	}*/

}

};

	SDL_DestroyRenderer(ren);



	D3D11_BUFFER_DESC vbDesc;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.MiscFlags = 0;

				indexlist.push_back(index);

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	m_Angle += XMConvertToRadians(1.0f);

	//vector<WORD> index_t;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_DestroyWindow(win);

	SAFE_RELEASE(m_pIndexBuffer);



	//Key press surfaces constants

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	XMFLOAT4 ambient;           //環境(r,g,b)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_Quit();

	//Vertex* pVList = new Vertex[vcount];



		D3D11_SDK_VERSION,

			exit(1);

	SAFE_RELEASE(m_pDepthStencilView);

	pBackBuffer->Release();





	/*

	SAFE_RELEASE(m_pVertexBuffer);

	{

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	return 0;

		size_t index_offset = 0;



		KEY_PRESS_SURFACE_RIGHT,

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	CRect                rect;

	SAFE_RELEASE(m_pSwapChain);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	D3D11_SAMPLER_DESC smpDesc;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;





	D3D11_TEXTURE2D_DESC txDesc;

	irData.SysMemPitch = 0;

		return hr;

	::GetClientRect(hwnd, &rect);

	{

			int num_vertices = shape.mesh.num_face_vertices[f];

};



	::GetClientRect(hwnd, &rect);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);





	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



		return hr;



	D3D11_SAMPLER_DESC smpDesc;

			index_offset += num_vertices;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	scDesc.BufferCount = 1;



		exit(1);

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		return hr;



/*

		//User requests quit

		}

	//テクスチャ読み込み

	}

		cout << "SDL_INIT_ERROR" << endl;

		NULL,



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	}

	SDL_DestroyWindow(win);

	{

				WORD index = idx.vertex_index;

int main(int, char**)



	//ビューポート設定

	vbDesc.MiscFlags = 0;

	return hr;

	SAFE_RELEASE(m_pRenderTargetView);

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		return hr;

	WORD* pIList = new WORD[icount];

	if (FAILED(hr))

	XMFLOAT4X4 view;



	::GetClientRect(hwnd, &rect);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	{



int main(int, char**)

	while (SDL_PollEvent(&e) != 0)

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	ibDesc.MiscFlags = 0;







	//ビューポート設定

	vector<WORD> indexList;

		return hr;

	scDesc.SampleDesc.Quality = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

	if (FAILED(hr))

{

	cbDesc.CPUAccessFlags = 0;



};



	}

		D3D11_SDK_VERSION,

			}

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;





	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	hr = D3D11CreateDeviceAndSwapChain(NULL,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{



		NULL,

		cout << "SDL_INIT_ERROR" << endl;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	SAFE_RELEASE(m_pSampler);

	// Loop over shapes





	SDL_Quit();

HRESULT CD3DTest::Create(HWND hwnd)

	m_pVertexBuffer = NULL;

	m_VertexCount = vcount;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	m_VertexCount = 0;

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

		KEY_PRESS_SURFACE_UP,

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			{



	//テクスチャ読み込み



	SAFE_RELEASE(m_pLightBuffer);



		return hr;

	irData.SysMemPitch = 0;

#define TINYOBJLOADER_IMPLEMENTATION

				tinyobj::real_t ty =

	::ZeroMemory(&scDesc, sizeof(scDesc));



		return hr;





	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	m_pInputLayout = NULL;

		&materials,

#include <SDL.h>

{

	{



	SDL_DestroyRenderer(ren);

	SDL_DestroyTexture(tex);

	//vector<Vertex> vertex_t;

	SAFE_RELEASE(m_pInputLayout);

	scDesc.BufferDesc.Width = rect.Width();



	reader_config.mtl_search_path = "./"; // Path to material files

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



	SDL_DestroyWindow(win);

	D3D11_BUFFER_DESC cbDesc;

	txDesc.Width = rect.Width();

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);



	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

			// Loop over vertices in the face.





	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	std::string error;

		return hr;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (!reader.ParseFromFile(inputfile, reader_config))

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	float    nearZ = 0.1f;



	txDesc.SampleDesc.Quality = 0;

	m_Viewport.TopLeftX = 0;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				break;

	if (FAILED(hr))

	m_pInputLayout = NULL;

				tinyobj::real_t tx =

	{



	//vector<Vertex> vertex_t;

		&shapes,

		&error,







		SDL_RenderClear(ren);

		if (e.type == SDL_QUIT)

	ConstantLightBuffer clb;

{

	::GetClientRect(hwnd, &rect);



using std::cout; using std::endl;

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	HRESULT              hr;

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		// Loop over faces(polygon)

	m_pIndexBuffer = NULL;

			index_offset += num_vertices;

	irData.SysMemSlicePitch = 0;



		SDL_RenderCopy(ren, tex, NULL, NULL);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	SAFE_RELEASE(m_pVertexBuffer);

struct ConstantLight {

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	scDesc.SampleDesc.Quality = 0;

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	SAFE_RELEASE(m_pDepthStencilTexture);

			//Select surfaces based on key press

			default:

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];



	UINT strides = sizeof(Vertex);

		R"(cube.obj)");

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;

		1,

	txDesc.ArraySize = 1;



	if (FAILED(hr))

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

		}

	m_pRenderTargetView = NULL;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			int num_vertices = shape.mesh.num_face_vertices[f];

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

{

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		&shapes,



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



	{

				indexlist.push_back(idx.vertex_index);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	scDesc.Windowed = TRUE;

	bool ret = tinyobj::LoadObj(

			case SDLK_UP:

	m_pImmediateContext = NULL;

		D3D_DRIVER_TYPE_HARDWARE,

	Release();



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			case SDLK_RIGHT:

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		&scDesc,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	XMFLOAT4X4 world;

	for (const auto& shape : shapes)

int SEGMENT = 36;

				indexlist.push_back(index);

	SAFE_RELEASE(m_pDepthStencilTexture);

#include <SDL.h>

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);



		return hr;

		D3D11_SDK_VERSION,

	}

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	txDesc.Width = rect.Width();

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	pBackBuffer->Release();

	cbDesc.MiscFlags = 0;

			index_offset += fv;

	SDL_DestroyWindow(win);

	m_pVertexBuffer = NULL;

	XMStoreFloat4(&clb.eyePos, eye);

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	SDL_DestroyTexture(tex);

	if (FAILED(hr))

	SAFE_RELEASE(m_pTexture);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			switch (e.key.keysym.sym)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		pLevels,

{

{

{

int main(int, char**)

{

		&scDesc,

	m_pTexture = NULL;

		delete[] pIList;

		return hr;

		size_t index_offset = 0;  // インデントのオフセット

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		delete[] pVList;

	m_pPixelShader = NULL;

	bool ret = tinyobj::LoadObj(



		//User requests quit

	ConstantLightBuffer clb;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



			default:

	if (FAILED(hr))

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pSwapChain = NULL;

	/*

	std::vector<tinyobj::shape_t> shapes;

	{

{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		NULL,

			{



	}

	float    farZ = 100.0f;







void CD3DTest::Render()





	m_Viewport.TopLeftY = 0;



	if (FAILED(hr))



	SAFE_RELEASE(m_pImmediateContext);

	if (!error.empty())

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	D3D11_TEXTURE2D_DESC txDesc;



	SDL_Event e;



	delete[] pIList;

		KEY_PRESS_SURFACE_LEFT,

	for (int i = 0; i < vcount; i++)

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;



	SAFE_RELEASE(m_pRenderTargetView);

	if (!error.empty())

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	m_pSwapChain->Present(0, 0);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

		D3D_DRIVER_TYPE_HARDWARE,

	if (FAILED(hr))

	vector<Vertex> vertexlist;

	//頂点レイアウト作成

	D3D_FEATURE_LEVEL level;



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



		return hr;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



	DXGI_SWAP_CHAIN_DESC scDesc;

	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

}

	SDL_DestroyTexture(tex);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

	//Vertex* pVList = new Vertex[vcount];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	//インデックスバッファ作成

	SDL_DestroyRenderer(ren);

	std::vector<tinyobj::material_t> materials;



	};

	float    farZ = 100.0f;

	{



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			exit(1);





	SDL_DestroyWindow(win);

		SDL_RenderPresent(ren);

		KEY_PRESS_SURFACE_TOTAL

	SDL_DestroyWindow(win);

	XMFLOAT4X4 projection;

	return hr;

		return hr;

		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		return hr;

	if (FAILED(hr))

		&error,

struct ConstantLight {

	if (m_pImmediateContext)

	SAFE_RELEASE(m_pTexture);



	return;

				break;

	m_IndexCount = icount;

	m_pRenderTargetView = NULL;

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)

	m_pInputLayout = NULL;

		delete[] pIList;

	for (size_t s = 0; s < shapes.size(); s++)

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	WORD   icount = indexList.size();

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		&m_pDevice,

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	D3D11_BUFFER_DESC vbDesc;

}

	if (FAILED(hr))

	for (int i = 0; i < vcount; i++)



	return 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

}

			}

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	}*/

				// access to vertex



		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)





	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		flags,

	UINT offsets = 0;

	if (FAILED(hr))

	}

	dsDesc.Texture2D.MipSlice = 0;

	}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	if (FAILED(hr))

	scDesc.BufferCount = 1;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

			case SDLK_UP:

struct ConstantMaterial {

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

}

	//First we need to start up SDL, and make sure it went ok

	SAFE_RELEASE(m_pImmediateContext);

			for (size_t v = 0; v < fv; v++)

	m_pSwapChain = NULL;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	if (FAILED(hr))

	{



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	std::string error;

	SDL_DestroyTexture(tex);

	{

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

		pVList[i] = vertexlist[i];







	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

		{

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

CD3DTest::~CD3DTest()



		m_pImmediateContext->ClearState();

			{

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	DXGI_SWAP_CHAIN_DESC scDesc;

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	if (FAILED(hr))

	//定数バッファ作成

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			{



		{

				indexlist.push_back(index);

				// access to vertex

	if (!reader.ParseFromFile(inputfile, reader_config))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	cbDesc.MiscFlags = 0;

	//深度ステンシルバッファ作成



	reader_config.mtl_search_path = "./"; // Path to material files

	XMFLOAT4         ambient;  //環境光(r,g,b)

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	XMStoreFloat4(&clb.material.specular, materialSpecular);

			{

	SAFE_RELEASE(m_pTextureView);

	m_pVertexShader = NULL;

}

	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	};

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	}

		&m_pImmediateContext);

{

			}

	SDL_DestroyWindow(win);

				indexlist.push_back(index);







		if (!ret)

	SAFE_RELEASE(m_pVertexBuffer);

		KEY_PRESS_SURFACE_TOTAL



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

				tinyobj::real_t tx =

	SAFE_RELEASE(m_pLightBuffer);

		pIList[j] = indexList[j];

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	return hr;

	/*

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);



	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

	m_Viewport.Height = (FLOAT)rect.Height();

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



/*

		NULL,

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

		exit(1);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



		SDL_RenderClear(ren);

{

{

	SAFE_RELEASE(m_pSampler);

	D3D11_SAMPLER_DESC smpDesc;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	{

	D3D11_BUFFER_DESC vbDesc;



	{



	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);





				indexlist.push_back(index);

	m_pInputLayout = NULL;



				indexlist.push_back(index);

	scDesc.SampleDesc.Count = 1;

		return hr;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

using std::cout; using std::endl;





		return hr;









				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	cbDesc.StructureByteStride = 0;

		pVList[i] = vertexlist[i];

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	vbDesc.MiscFlags = 0;

#include <SDL.h>

	SDL_DestroyRenderer(ren);

	}

	scDesc.BufferCount = 1;

	pBackBuffer->Release();

	ID3D11Texture2D* pBackBuffer;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

		&m_pDevice,

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	scDesc.BufferCount = 1;

{

	{

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

int main(int, char**)

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	txDesc.SampleDesc.Count = 1;





				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		return hr;

	{

void CD3DTest::Render()







	if (FAILED(hr))

		size_t index_offset = 0;

		KEY_PRESS_SURFACE_UP,

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		size_t index_offset = 0;  // インデントのオフセット

	SAFE_RELEASE(m_pRenderTargetView);



/*

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (FAILED(hr))



	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	{

}

		return hr;

	{



	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	return 0;



		{

	m_pMatrixBuffer = NULL;

		return hr;

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		}

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	XMFLOAT4 attenuate;         //減衰(a,b,c)



	m_pTextureView = NULL;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return 1;

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

/*

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	vrData.SysMemPitch = 0;

	auto& attrib = reader.GetAttrib();

	m_pRenderTargetView = NULL;



				tinyobj::real_t ty =

		// Loop over faces(polygon)

	// Loop over shapes

		KEY_PRESS_SURFACE_LEFT,





		R"(cube.obj)");

			exit(1);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

			case SDLK_RIGHT:



	};

			case SDLK_DOWN:

		}

		{

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SDL_Event e;

	HRESULT              hr;

	{



	SAFE_RELEASE(m_pDepthStencilView);



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		return hr;



			//Select surfaces based on key press





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	HRESULT              hr;



	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

int main(int, char**)

			switch (e.key.keysym.sym)





				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

		return hr;

	pBackBuffer->Release();

#endif



{

	if (FAILED(hr))

		return hr;



	SAFE_RELEASE(m_pInputLayout);

	m_pDepthStencilTexture = NULL;

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

struct ConstantLightBuffer {

	XMFLOAT4 diffuse;           //拡散(r,g,b)

		{



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	WORD* pIList = new WORD[icount];

	{

 */

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

};

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



	return hr;

	m_pVertexShader = NULL;

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);





	UINT offsets = 0;



	SAFE_RELEASE(m_pPixelShader);

	D3D11_SAMPLER_DESC smpDesc;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



	int     vcount = vertexlist.size();

	txDesc.SampleDesc.Quality = 0;

	Release();

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	for (size_t s = 0; s < shapes.size(); s++)



		delete[] pIList;

#define TINYOBJLOADER_IMPLEMENTATION

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_Viewport.Width = (FLOAT)rect.Width();

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	LoadObj(vertexlist, indexList);

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	reader_config.mtl_search_path = "./"; // Path to material files



	//ビューポート設定

		flags,

		return hr;

	SDL_FreeSurface(suf);

	txDesc.MiscFlags = 0;

	if (!error.empty())

		return hr;

	bool ret = tinyobj::LoadObj(

		return hr;

		D3D_DRIVER_TYPE_HARDWARE,

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		else if (e.type == SDL_KEYDOWN)

		cout << "SDL_INIT_ERROR" << endl;

	// Loop over shapes

	ibDesc.CPUAccessFlags = 0;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

		1,



		delete[] pVList;

	SAFE_RELEASE(m_pTextureView);

		}

	::ZeroMemory(&scDesc, sizeof(scDesc));



				vertex.push_back(vertex_tmp);



	SDL_FreeSurface(bmp);





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		if (!ret)



	if (m_pImmediateContext)

	XMFLOAT4 ambient;           //環境(r,g,b)

		else if (e.type == SDL_KEYDOWN)

	D3D_FEATURE_LEVEL level;

		return hr;

			//Select surfaces based on key press

	if (FAILED(hr))

		&m_pImmediateContext);

	txDesc.MipLevels = 1;

	SDL_DestroyRenderer(ren);

	m_Viewport.Width = (FLOAT)rect.Width();

	txDesc.ArraySize = 1;

		{

				// access to vertex

	m_Viewport.MaxDepth = 1.0f;



	vbDesc.CPUAccessFlags = 0;

	bool ret = tinyobj::LoadObj(



using std::cout; using std::endl;

	{

	scDesc.SampleDesc.Quality = 0;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	D3D_FEATURE_LEVEL level;

	}*/

		return hr;

	Vertex* pVList = new Vertex[vcount];

	SDL_FreeSurface(bmp);

	}

	m_pMatrixBuffer = NULL;

	}



	{

	UINT offsets = 0;

		return hr;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (FAILED(hr))

	{



	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		m_pImmediateContext->ClearState();

struct ConstantLight {

				WORD index = idx.vertex_index;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_IndexCount = 0;

	m_VertexCount = vcount;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

			case SDLK_RIGHT:

	cbDesc.CPUAccessFlags = 0;



struct ConstantMaterial {

		pIList[j] = indexList[j];

	scDesc.BufferCount = 1;

	vrData.SysMemPitch = 0;

		NULL,

	/*

	//頂点シェーダー生成

		return hr;

		return hr;

	return 0;



	XMFLOAT4 attenuate;         //減衰(a,b,c)

	txDesc.SampleDesc.Quality = 0;

	cbDesc.MiscFlags = 0;



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_DOWN,

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))

			switch (e.key.keysym.sym)

#define TINYOBJLOADER_IMPLEMENTATION

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	//深度ステンシルバッファ作成

			}



		//User presses a key

	XMFLOAT4X4 projection;

	cbDesc.MiscFlags = 0;



	cbDesc.StructureByteStride = 0;

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	D3D11_SUBRESOURCE_DATA vrData;



	scDesc.Windowed = TRUE;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

			}

	float    fov = XMConvertToRadians(20.0f);

	delete[] pVList;

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pImmediateContext = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	WORD* pIList = new WORD[icount];

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	D3D11_BUFFER_DESC vbDesc;



		//User requests quit

	std::vector<tinyobj::material_t> materials;

{

	return 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

				WORD index = idx.vertex_index;

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	m_VertexCount = vcount;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

	if (FAILED(hr))

	vbDesc.StructureByteStride = 0;

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

				// access to vertex

	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.SampleDesc.Quality = 0;

		}

	scDesc.SampleDesc.Quality = 0;

	}

	cbDesc.CPUAccessFlags = 0;

		{





				break;



	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

			{

struct ConstantMatrixBuffer {

	bool ret = tinyobj::LoadObj(

#define TINYOBJLOADER_IMPLEMENTATION

	vbDesc.CPUAccessFlags = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	return hr;





	SDL_DestroyTexture(tex);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	XMFLOAT4X4 view;

			{

	//テクスチャ読み込み

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];





		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	m_pPixelShader = NULL;

	scDesc.BufferCount = 1;

		KEY_PRESS_SURFACE_DOWN,



	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (FAILED(hr))

		size_t index_offset = 0;  // インデントのオフセット

	if (FAILED(hr))

	cbDesc.MiscFlags = 0;

#include <SDL.h>

	m_pMatrixBuffer = NULL;

	auto& shapes = reader.GetShapes();

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

using std::cout; using std::endl;

		if (!ret)

	m_pInputLayout = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

		&materials,

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	ConstantLight    pntLight; //点光源

	delete[] pIList;

	m_pInputLayout = NULL;

			case SDLK_RIGHT:

}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	ConstantLightBuffer clb;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		else if (e.type == SDL_KEYDOWN)

	txDesc.Usage = D3D11_USAGE_DEFAULT;



	txDesc.ArraySize = 1;

	//vector<Vertex> vertex_t;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	m_pSampler = NULL;

	ConstantLightBuffer clb;



	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pDepthStencilTexture);



}

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	//頂点バッファ作成

	if (FAILED(hr))

		NULL,

	scDesc.BufferDesc.Height = rect.Height();

	if (FAILED(hr))

};

#define TINYOBJLOADER_IMPLEMENTATION

		&level,

		SDL_RenderPresent(ren);

HRESULT CD3DTest::Create(HWND hwnd)

	{

{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;

	D3D11_SUBRESOURCE_DATA vrData;

	vrData.pSysMem = &pVList[0];

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;



	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.Height = (FLOAT)rect.Height();

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	Release();

		return hr;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);



	m_Viewport.TopLeftX = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

CD3DTest::CD3DTest()



		{

	for (int j = 0; j < icount; j++)

	m_pDepthStencilTexture = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;



	m_IndexCount = icount;

	}

	std::string imagePath = "hello.bmp";

		SDL_RenderClear(ren);



	CRect                rect;

		if (!ret)

		1,

		return hr;

	txDesc.MiscFlags = 0;

void CD3DTest::Release()

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	SAFE_RELEASE(m_pDevice);

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

			switch (e.key.keysym.sym)

	while (SDL_PollEvent(&e) != 0)

	SAFE_RELEASE(m_pDevice);

			{



	ibDesc.MiscFlags = 0;





	bool ret = tinyobj::LoadObj(

		SDL_RenderClear(ren);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;

	Release();

		pLevels,



		return hr;

		&m_pImmediateContext);

	SDL_DestroyTexture(tex);

	{

	m_Viewport.Height = (FLOAT)rect.Height();

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SAFE_RELEASE(m_pMatrixBuffer);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		&shapes,

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

				// access to vertex

	//頂点シェーダー生成

	UINT strides = sizeof(Vertex);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{





	}

struct ConstantLight {

	m_pVertexBuffer = NULL;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	m_Viewport.Width = (FLOAT)rect.Width();

	enum KeyPressSurfaces

		KEY_PRESS_SURFACE_DOWN,

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

			for (size_t v = 0; v < num_vertices; v++)

		size_t index_offset = 0;



	D3D11_BUFFER_DESC vbDesc;

		return 1;





	m_Viewport.Width = (FLOAT)rect.Width();

	}

	D3D11_TEXTURE2D_DESC txDesc;

			//Select surfaces based on key press

	{

				break;

struct ConstantMaterial {



	return;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	XMFLOAT4 pos;               //座標(x,y,z)

		SDL_RenderCopy(ren, tex, NULL, NULL);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	if (!error.empty())

HRESULT CD3DTest::Create(HWND hwnd)



		&shapes,

	txDesc.CPUAccessFlags = 0;



		SDL_RenderPresent(ren);

	}



			{



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

			}

	SAFE_RELEASE(m_pSwapChain);

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



	CRect                rect;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	UINT flags = 0;

CD3DTest::CD3DTest()



	if (FAILED(hr))

	::ZeroMemory(&scDesc, sizeof(scDesc));

		{

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

		return 1;

	if (FAILED(hr))

	return;

	SDL_DestroyTexture(tex);

	m_pDepthStencilTexture = NULL;

	XMFLOAT4         ambient;  //環境光(r,g,b)

	}

	std::string inputfile = "test.obj";

void CD3DTest::Render()

		return hr;

	m_pImmediateContext = NULL;

	m_pPixelShader = NULL;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		{

			index_offset += num_vertices;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



	vrData.SysMemPitch = 0;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	scDesc.OutputWindow = hwnd;

		&materials,

	ConstantMaterial material; //物体の質感



	if (FAILED(hr))

	}

	SDL_DestroyRenderer(ren);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

/*

	m_IndexCount = icount;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	ConstantLight    pntLight; //点光源

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pSwapChain = NULL;

	m_pSampler = NULL;



		return hr;

	txDesc.SampleDesc.Count = 1;

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);

		KEY_PRESS_SURFACE_UP,



		if (!ret)

		pIList[j] = indexList[j];

	SAFE_RELEASE(m_pVertexShader);

	m_pDepthStencilTexture = NULL;



	SAFE_RELEASE(m_pSampler);

	SAFE_RELEASE(m_pSwapChain);

	auto& shapes = reader.GetShapes();

		&shapes,



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4X4 view;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);



	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	if (!error.empty())

	{

	SAFE_RELEASE(m_pIndexBuffer);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	m_VertexCount = vcount;

	WORD   icount = indexList.size();

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

		&level,

	scDesc.BufferDesc.Height = rect.Height();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	m_Viewport.MaxDepth = 1.0f;

	UINT strides = sizeof(Vertex);

	SDL_DestroyWindow(win);

		return hr;

	m_Viewport.MinDepth = 0.0f;

 */

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SDL_FreeSurface(suf);

		return 1;

	m_Viewport.TopLeftY = 0;



 * Lesson 1: Hello World!

	irData.SysMemPitch = 0;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

	//Key press surfaces constants



	}

	if (FAILED(hr))

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&m_pSwapChain,

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;





	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pSampler = NULL;

			{

	cbDesc.CPUAccessFlags = 0;

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	delete[] pIList;

	//Create Index

	m_VertexCount = vcount;

	vbDesc.StructureByteStride = 0;

		return hr;

		}

	m_pSwapChain->Present(0, 0);

		return hr;



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.MiscFlags = 0;

		}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	SAFE_RELEASE(m_pSampler);

		pLevels,

			// Loop over vertices in the face.



	m_Viewport.MinDepth = 0.0f;

		return hr;

#ifdef _DEBUG

	cbDesc.StructureByteStride = 0;

using std::cout; using std::endl;





			index_offset += fv;

{





	scDesc.SampleDesc.Quality = 0;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	}

	if (!reader.ParseFromFile(inputfile, reader_config))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	//頂点レイアウト作成

	}

				tinyobj::real_t ty =



				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

		delete[] pVList;

	{





		return hr;

	Vertex* pVList = new Vertex[vcount];



struct ConstantLightBuffer {

	{

	m_pPixelShader = NULL;

/*

		if (!ret)

				break;



	float    farZ = 100.0f;



	XMStoreFloat4(&clb.eyePos, eye);

				tinyobj::real_t ty =

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

		&error,

}



	m_pDevice = NULL;

	{



	XMFLOAT4 pos;               //座標(x,y,z)

int main(int, char**)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

		SDL_RenderClear(ren);



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	tinyobj::attrib_t attrib;









				break;

	UINT offsets = 0;

	D3D11_BUFFER_DESC vbDesc;

	SAFE_RELEASE(m_pTexture);

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	m_Viewport.MinDepth = 0.0f;

				break;



	D3D_FEATURE_LEVEL level;

	scDesc.SampleDesc.Count = 1;



				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	{

	SAFE_RELEASE(m_pTexture);

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	irData.SysMemSlicePitch = 0;

}

		&materials,

	SAFE_RELEASE(m_pRenderTargetView);

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));





	XMFLOAT4 ambient;           //環境(r,g,b)

	}



				// access to vertex

	tinyobj::attrib_t attrib;

{

#include <iostream>

	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)



	SDL_Quit();



	{



	reader_config.mtl_search_path = "./"; // Path to material files

	txDesc.MipLevels = 1;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

struct ConstantMatrixBuffer {

		}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

using std::cout; using std::endl;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		SDL_Delay(1000);

	{

		SDL_RenderCopy(ren, tex, NULL, NULL);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



}

	txDesc.Height = rect.Height();

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

			{

#include <SDL.h>

	scDesc.SampleDesc.Count = 1;



			{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

	DXGI_SWAP_CHAIN_DESC scDesc;

			default:

			case SDLK_DOWN:



	if (FAILED(hr))

	//テクスチャ読み込み

	m_pImmediateContext = NULL;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

		return hr;

		SDL_Delay(1000);

	WORD* pIList = new WORD[icount];



{

};

}

}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	if (FAILED(hr))

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	XMFLOAT4 ambient;           //環境(r,g,b)

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	m_VertexCount = vcount;

	XMStoreFloat4(&clb.eyePos, eye);

	enum KeyPressSurfaces

	if (FAILED(hr))

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	Release();



			case SDLK_LEFT:

				WORD index = idx.vertex_index;

	{

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

				break;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	}

	{

		//User presses a key

	SAFE_RELEASE(m_pVertexShader);

				WORD index = idx.vertex_index;

	SAFE_RELEASE(m_pMatrixBuffer);

	dsDesc.Texture2D.MipSlice = 0;

	for (size_t s = 0; s < shapes.size(); s++)



	XMFLOAT4 diffuse;           //拡散(r,g,b)

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	// Loop over shapes



	vbDesc.MiscFlags = 0;

		return hr;

			index_offset += fv;

			default:

};

		&attrib,



	float    nearZ = 0.1f;

	UINT flags = 0;



	{

	SAFE_RELEASE(m_pLightBuffer);

		R"(cube.obj)");

}

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



				WORD index = idx.vertex_index;

};

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	HRESULT              hr;

	cbDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pVertexBuffer = NULL;



		// Loop over faces(polygon)

	SDL_DestroyRenderer(ren);

}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		SDL_RenderCopy(ren, tex, NULL, NULL);

		return hr;

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	//Clean up our objects and quit



	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	if (!reader.ParseFromFile(inputfile, reader_config))

	if (FAILED(hr))

		return hr;

	auto& materials = reader.GetMaterials();



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

	SDL_FreeSurface(bmp);

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	SAFE_RELEASE(m_pVertexBuffer);

	}

	vrData.SysMemSlicePitch = 0;

	//テクスチャ読み込み



				tinyobj::real_t tx =

			case SDLK_LEFT:

	txDesc.ArraySize = 1;



#define TINYOBJLOADER_IMPLEMENTATION

	ibDesc.ByteWidth = sizeof(WORD) * icount;



		}

	std::string imagePath = "hello.bmp";

		SDL_RenderPresent(ren);

	//頂点レイアウト作成

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;



	float    aspect = m_Viewport.Width / m_Viewport.Height;

				break;



	XMFLOAT4 specular;          //反射(r,g,b)

	//ビューポート設定

	if (FAILED(hr))

 * Lesson 1: Hello World!

	SAFE_RELEASE(m_pInputLayout);

		else if (e.type == SDL_KEYDOWN)

	m_pVertexBuffer = NULL;

			}

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	float    nearZ = 0.1f;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);



		SDL_RenderCopy(ren, tex, NULL, NULL);

	pBackBuffer->Release();

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 0] : 0;





	return;

	vector<WORD> indexList;

	DXGI_SWAP_CHAIN_DESC scDesc;



#include <SDL.h>

	XMStoreFloat4(&clb.ambient, lightAmbient);

		NULL,

			for (size_t v = 0; v < num_vertices; v++)



	SAFE_RELEASE(m_pIndexBuffer);

	SAFE_RELEASE(m_pIndexBuffer);

}

		SDL_RenderPresent(ren);

	SDL_FreeSurface(suf);



struct ConstantLight {

	SDL_DestroyWindow(win);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pDepthStencilView);



	SDL_DestroyRenderer(ren);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	//定数バッファ作成

	scDesc.Windowed = TRUE;

	m_pVertexShader = NULL;

	//Clean up our objects and quit

#include <SDL.h>

		pIList[j] = indexList[j];



	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	std::string inputfile = "test.obj";

	//ビューポート設定

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	XMStoreFloat4(&clb.ambient, lightAmbient);

	if (FAILED(hr))



	m_pIndexBuffer = NULL;

			case SDLK_RIGHT:

	std::string error;





	::GetClientRect(hwnd, &rect);



		SDL_RenderClear(ren);



	reader_config.mtl_search_path = "./"; // Path to material files

	tinyobj::ObjReaderConfig reader_config;

	SAFE_RELEASE(m_pInputLayout);



	Release();

	SAFE_RELEASE(m_pDepthStencilTexture);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

	m_pTexture = NULL;

	//Vertex* pVList = new Vertex[vcount];





	}

	return 0;

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	SAFE_RELEASE(m_pVertexShader);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

			{

			exit(1);

		SDL_RenderPresent(ren);

	m_pImmediateContext = NULL;

	XMFLOAT4 specular;          //反射(r,g,b)

	m_pSwapChain->Present(0, 0);

	txDesc.Width = rect.Width();

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		SDL_Delay(1000);

		}

	}

	SAFE_RELEASE(m_pSwapChain);

	XMFLOAT4X4 projection;

	WORD* pIList = new WORD[icount];



	m_pDepthStencilView = NULL;

	SDL_Quit();

	m_pRenderTargetView = NULL;

	SAFE_RELEASE(m_pSampler);

	//ピクセルシェーダー生成

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	m_pVertexShader = NULL;

#include <iostream>

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SDL_DestroyWindow(win);

	vrData.pSysMem = &pVList[0];

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_Viewport.MinDepth = 0.0f;

	D3D11_SUBRESOURCE_DATA irData;



		return hr;

		SDL_Delay(1000);



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		&shapes,

CD3DTest::CD3DTest()



	scDesc.BufferDesc.Width = rect.Width();

	XMFLOAT4 specular;          //反射(r,g,b)

				break;





		return hr;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	SDL_DestroyWindow(win);

	std::string inputfile = "test.obj";



				// access to vertex

	/*

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

		KEY_PRESS_SURFACE_TOTAL







	XMFLOAT4X4 projection;

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	if (FAILED(hr))

	ConstantMatrixBuffer cmb;

	dsDesc.Texture2D.MipSlice = 0;

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

		}

	std::string inputfile = "test.obj";

		return hr;

	m_pSwapChain->Present(0, 0);

{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	UINT flags = 0;

int main(int, char**)

	WORD* pIList = new WORD[icount];



	//頂点バッファ作成

	{



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	ConstantLightBuffer clb;

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

			for (size_t v = 0; v < fv; v++)

	}

	m_VertexCount = vcount;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	}

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	scDesc.SampleDesc.Quality = 0;

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	txDesc.MipLevels = 1;

	SDL_DestroyWindow(win);

	while (SDL_PollEvent(&e) != 0)

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pInputLayout = NULL;

};



	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	}

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	{

	txDesc.SampleDesc.Quality = 0;

	XMFLOAT4         ambient;  //環境光(r,g,b)

		KEY_PRESS_SURFACE_TOTAL

	SDL_DestroyRenderer(ren);

	SAFE_RELEASE(m_pIndexBuffer);

	m_Angle += XMConvertToRadians(1.0f);

	for (int j = 0; j < icount; j++)

{

				break;

	m_pLightBuffer = NULL;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		SDL_RenderPresent(ren);

			index_offset += fv;

	auto& attrib = reader.GetAttrib();

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	//Key press surfaces constants

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	//頂点シェーダー生成

	//Create Index

			int num_vertices = shape.mesh.num_face_vertices[f];



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	m_pSampler = NULL;

	SAFE_RELEASE(m_pPixelShader);

	vbDesc.MiscFlags = 0;



	//Create Index

	enum KeyPressSurfaces



	{

}

}


	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	m_pSwapChain->Present(0, 0);

	txDesc.Width = rect.Width();

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	m_VertexCount = 0;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	SAFE_RELEASE(m_pTextureView);

	return hr;

	//インデックスバッファ作成



		KEY_PRESS_SURFACE_LEFT,

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

		}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



	float    fov = XMConvertToRadians(20.0f);

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

};

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//Vertex* pVList = new Vertex[vcount];



	//Clean up our objects and quit

	if (FAILED(hr))

		pIList[j] = indexList[j];

				break;

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	delete[] pIList;

	SDL_DestroyWindow(win);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];





				break;



		pLevels,

#include <iostream>

	{

	UINT strides = sizeof(Vertex);

		return hr;

	if (FAILED(hr))

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



int main(int, char**)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	}



	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

				WORD index = idx.vertex_index;

	std::string inputfile = "test.obj";



	m_VertexCount = 0;

	//定数バッファ作成

	ConstantLight    pntLight; //点光源



	vbDesc.StructureByteStride = 0;

	}

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	dsDesc.Format = txDesc.Format;

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	//Key press surfaces constants

	//頂点レイアウト作成

		return hr;



	for (int i = 0; i < 3; i++)

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	std::string error;

			case SDLK_LEFT:

		R"(cube.obj)");

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

		&error,









	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



};

	//First we need to start up SDL, and make sure it went ok

			default:

	//First we need to start up SDL, and make sure it went ok

	scDesc.OutputWindow = hwnd;

void CD3DTest::Release()

	}



		&shapes,

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);





	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	XMFLOAT4 specular;          //反射(r,g,b)

		&attrib,

	m_Viewport.Height = (FLOAT)rect.Height();

		KEY_PRESS_SURFACE_UP,

	m_pPixelShader = NULL;

	if (FAILED(hr))

		exit(1);

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	while (SDL_PollEvent(&e) != 0)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

}

	if (FAILED(hr))

	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);





		pLevels,

		return 1;

	if (FAILED(hr))

	UINT offsets = 0;

	//定数バッファ作成

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	if (SDL_Init(SDL_INIT_VIDEO != 0))

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	SAFE_RELEASE(m_pInputLayout);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		//User requests quit

	scDesc.BufferDesc.Height = rect.Height();

	::ZeroMemory(&scDesc, sizeof(scDesc));

#include <SDL.h>



	SAFE_RELEASE(m_pVertexBuffer);

	D3D11_BUFFER_DESC ibDesc;

};

				vertex.push_back(vertex_tmp);

	D3D_FEATURE_LEVEL level;



	{



	D3D11_BUFFER_DESC cbDesc;

		delete[] pVList;

				vertex.push_back(vertex_tmp);

	std::string inputfile = "test.obj";

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		//User presses a key

	m_VertexCount = vcount;

int main(int, char**)

				break;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	{

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



	{



		return hr;

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	LoadObj(vertexlist, indexList);

		}

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	m_Viewport.Height = (FLOAT)rect.Height();



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	if (!reader.ParseFromFile(inputfile, reader_config))

		return hr;





	SAFE_RELEASE(m_pIndexBuffer);

		{

	D3D11_SUBRESOURCE_DATA vrData;





	}

	{

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	//頂点レイアウト作成

	if (FAILED(hr))

	{



	SAFE_RELEASE(m_pSampler);





	return 0;







	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

		&materials,

			//Select surfaces based on key press

	//Create Index



}



	SAFE_RELEASE(m_pSwapChain);



	{

		{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

	/*

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);



				indexlist.push_back(index);



				break;

	m_pPixelShader = NULL;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



		SDL_RenderPresent(ren);



				tinyobj::real_t ty =

	XMFLOAT4         eyePos;   //視点座標

		return hr;

	if (FAILED(hr))

	ConstantMatrixBuffer cmb;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		D3D11_SDK_VERSION,

	tinyobj::attrib_t attrib;

	}

		pIList[j] = indexList[j];

}

	delete[] pVList;

	{

	/*



	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

{



			break;



	XMFLOAT4X4 world;

				tinyobj::real_t tx =

		return hr;

	}



				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	float    farZ = 100.0f;

			for (size_t v = 0; v < fv; v++)

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	m_pVertexBuffer = NULL;



		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

{

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	/*

	}



	SAFE_RELEASE(m_pDepthStencilTexture);



	m_pDepthStencilTexture = NULL;

		KEY_PRESS_SURFACE_DOWN,

		&m_pSwapChain,

	SDL_DestroyTexture(tex);

	SAFE_RELEASE(m_pLightBuffer);

{



	delete[] pIList;

		m_pImmediateContext->ClearState();

	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	if (FAILED(hr))

	scDesc.SampleDesc.Count = 1;

}

int main(int, char**)

	for (const auto& shape : shapes)



				vertex.push_back(vertex_tmp);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_RIGHT];

	if (m_pImmediateContext)

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	//vector<Vertex> vertex_t;

		{

		exit(1);

	m_VertexCount = vcount;





	if (FAILED(hr))

	SAFE_RELEASE(m_pPixelShader);

	vector<Vertex> vertexlist;

	cbDesc.StructureByteStride = 0;

		}

	if (FAILED(hr))

struct ConstantMaterial {

		}

	}

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SDL_FreeSurface(suf);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	m_Viewport.TopLeftY = 0;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

			break;

		KEY_PRESS_SURFACE_DEFAULT,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT



	XMFLOAT4         eyePos;   //視点座標

		else if (e.type == SDL_KEYDOWN)

	float    fov = XMConvertToRadians(20.0f);



				WORD index = idx.vertex_index;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	if (FAILED(hr))



		size_t index_offset = 0;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		}

	m_pPixelShader = NULL;

{

	ibDesc.ByteWidth = sizeof(WORD) * icount;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);



	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

				WORD index = idx.vertex_index;



	{

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

		&attrib,

		KEY_PRESS_SURFACE_UP,

#include <SDL.h>

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		delete[] pIList;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	{



		&m_pSwapChain,

	}

	SDL_DestroyTexture(tex);

	SDL_DestroyTexture(tex);

			}







	//インデックスバッファ作成



};

	cbDesc.CPUAccessFlags = 0;

struct ConstantLight {

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

};



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	}

	ibDesc.ByteWidth = sizeof(WORD) * icount;

	SAFE_RELEASE(m_pSampler);

	D3D11_BUFFER_DESC ibDesc;

		else if (e.type == SDL_KEYDOWN)

#include <SDL.h>

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ZeroMemory(&txDesc, sizeof(txDesc));

		return hr;

	SAFE_RELEASE(m_pLightBuffer);



	m_pPixelShader = NULL;

		flags,

		R"(cube.obj)");

	XMFLOAT4 pos;               //座標(x,y,z)

	{

		return hr;

	cbDesc.CPUAccessFlags = 0;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	ConstantLight    pntLight; //点光源

 */

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			{

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_DestroyTexture(tex);

	{



	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));



#include <iostream>

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	// Loop over shapes

	}



	tinyobj::ObjReaderConfig reader_config;

		flags,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	ConstantLightBuffer clb;

	delete[] pIList;

		}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

		return hr;

	float    fov = XMConvertToRadians(20.0f);

	vbDesc.MiscFlags = 0;

		}

	m_pImmediateContext->OMSetRenderTargets(1, &m_pRenderTargetView, m_pDepthStencilView);

struct ConstantLight {

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	hr = m_pDevice->CreateRenderTargetView(pBackBuffer, NULL, &m_pRenderTargetView);



			break;

			exit(1);

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	//テクスチャ読み込み

	m_pSwapChain->Present(0, 0);

#endif



	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	cbDesc.MiscFlags = 0;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

};

	SAFE_RELEASE(m_pVertexShader);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	SAFE_RELEASE(m_pDevice);

	return 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;



			int num_vertices = shape.mesh.num_face_vertices[f];

		pIList[j] = indexList[j];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

		flags,

	m_pImmediateContext = NULL;





	for (int i = 0; i < 3; i++)

		KEY_PRESS_SURFACE_LEFT,

}

		&materials,

	m_Viewport.TopLeftY = 0;

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	SAFE_RELEASE(m_pDepthStencilTexture);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	if (!reader.Warning().empty())

		size_t index_offset = 0;



	HRESULT              hr;

HRESULT CD3DTest::Create(HWND hwnd)

		SDL_RenderCopy(ren, tex, NULL, NULL);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	//ビューポート設定

	SDL_Event e;

	if (FAILED(hr))

	cbDesc.StructureByteStride = 0;

		D3D11_SDK_VERSION,

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pTexture);

	{



		{

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	txDesc.CPUAccessFlags = 0;



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4 attenuate;         //減衰(a,b,c)

	if (FAILED(hr))

		SDL_Delay(1000);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	vrData.SysMemSlicePitch = 0;

				tinyobj::real_t tx =

	LoadObj(vertexlist, indexList);

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];









	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		}

};

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

			break;



		R"(cube.obj)");

				break;

			}

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

			}







		&attrib,

	{

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);



	Release();

	::GetClientRect(hwnd, &rect);

	};

	irData.pSysMem = &pIList[0];

	SAFE_RELEASE(m_pSwapChain);

void CD3DTest::Render()



int SEGMENT = 36;

		KEY_PRESS_SURFACE_RIGHT,

{

	ConstantLight    pntLight; //点光源

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;





		&level,

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMStoreFloat4(&clb.pntLight.diffuse, lightDiffuse);

	SDL_DestroyRenderer(ren);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

	m_Viewport.MaxDepth = 1.0f;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);





	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

		//User presses a key

	if (FAILED(hr))

#include "DirectXManager.h"

{



		pVList[i] = vertexlist[i];

	for (size_t s = 0; s < shapes.size(); s++)

	}

CD3DTest::~CD3DTest()



HRESULT CD3DTest::Create(HWND hwnd)

	}

		return hr;



	Release();

	enum KeyPressSurfaces

{

	XMFLOAT4X4 projection;

	//深度ステンシルバッファ作成

	}

	D3D11_BUFFER_DESC cbDesc;

struct ConstantLight {

	txDesc.Width = rect.Width();

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

			break;

	D3D11_SUBRESOURCE_DATA vrData;

		KEY_PRESS_SURFACE_UP,



	txDesc.MipLevels = 1;

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	SDL_DestroyWindow(win);



	m_Angle += XMConvertToRadians(1.0f);



	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		SDL_RenderCopy(ren, tex, NULL, NULL);



	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	for (int i = 0; i < 3; i++)

	std::vector<tinyobj::shape_t> shapes;

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;

void CD3DTest::Release()

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	D3D11_BUFFER_DESC ibDesc;

	if (FAILED(hr))





	cbDesc.CPUAccessFlags = 0;

	//頂点レイアウト作成

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	return hr;

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	m_Viewport.MaxDepth = 1.0f;

	if (!error.empty())





				break;

			index_offset += fv;

	//頂点レイアウト作成

		if (!ret)

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	auto& shapes = reader.GetShapes();

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	scDesc.SampleDesc.Count = 1;

				indexlist.push_back(index);

{

		return hr;

 * Lesson 1: Hello World!

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;



	m_pSwapChain = NULL;



		KEY_PRESS_SURFACE_RIGHT,





		&m_pDevice,

};



			index_offset += num_vertices;

	int     vcount = vertexlist.size();

		size_t index_offset = 0;  // インデントのオフセット

	float    nearZ = 0.1f;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	m_pDevice = NULL;



	DXGI_SWAP_CHAIN_DESC scDesc;

		// Loop over faces(polygon)

		&shapes,

	m_pSampler = NULL;

		// Loop over faces(polygon)

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	SAFE_RELEASE(m_pVertexBuffer);

	if (!reader.ParseFromFile(inputfile, reader_config))

		KEY_PRESS_SURFACE_TOTAL

	scDesc.BufferDesc.Width = rect.Width();



	m_pImmediateContext->UpdateSubresource(m_pMatrixBuffer, 0, NULL, &cmb, 0, 0);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

#endif

			for (size_t v = 0; v < fv; v++)

		{

	}

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	SDL_DestroyTexture(tex);

	float    farZ = 100.0f;

		pVList[i] = vertexlist[i];

		return hr;

	{

		cout << "SDL_INIT_ERROR" << endl;



	Release();

	{

		SDL_RenderClear(ren);

		NULL,

	{

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		size_t index_offset = 0;  // インデントのオフセット

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

				tinyobj::real_t ty =

		return hr;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	txDesc.Width = rect.Width();



	D3D_FEATURE_LEVEL level;

		}

	SAFE_RELEASE(m_pSampler);



			switch (e.key.keysym.sym)

				// access to vertex

	for (int i = 0; i < vcount; i++)

	if (FAILED(hr))

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	SAFE_RELEASE(m_pIndexBuffer);

	Release();

	WORD   icount = indexList.size();

	scDesc.OutputWindow = hwnd;

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pMatrixBuffer = NULL;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	//インデックスバッファ作成





}

	m_Viewport.MinDepth = 0.0f;

};

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	cbDesc.StructureByteStride = 0;

			index_offset += fv;

	m_pImmediateContext = NULL;

	SDL_FreeSurface(bmp);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	hr = D3D11CreateDeviceAndSwapChain(NULL,



void CD3DTest::Release()

	SAFE_RELEASE(m_pIndexBuffer);

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	D3D11_TEXTURE2D_DESC txDesc;

	//深度ステンシルバッファ作成

	for (int j = 0; j < icount; j++)

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

	{

	txDesc.MiscFlags = 0;

	m_pSwapChain = NULL;

	//深度ステンシルバッファ作成

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

{



	XMFLOAT4 specular;          //反射(r,g,b)

	vbDesc.MiscFlags = 0;

			for (size_t v = 0; v < num_vertices; v++)

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

};

CD3DTest::CD3DTest()

			int num_vertices = shape.mesh.num_face_vertices[f];

void CD3DTest::Release()

	txDesc.ArraySize = 1;



#include <iostream>

	Release();

		KEY_PRESS_SURFACE_DEFAULT,

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pTexture = NULL;

			index_offset += fv;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	SAFE_RELEASE(m_pDevice);

	::GetClientRect(hwnd, &rect);



	cbDesc.MiscFlags = 0;

#include <iostream>

	txDesc.CPUAccessFlags = 0;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);



		&shapes,

	irData.SysMemPitch = 0;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);



}
	txDesc.Width = rect.Width();

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;



	txDesc.ArraySize = 1;

	if (!reader.Warning().empty())

#endif



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	if (FAILED(hr))

	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

			switch (e.key.keysym.sym)

	vrData.SysMemSlicePitch = 0;

	ID3D11Texture2D* pBackBuffer;



	SDL_DestroyRenderer(ren);

		&materials,

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		if (e.type == SDL_QUIT)

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

	{

	WORD   icount = indexList.size();

struct ConstantMaterial {

#include <iostream>

/*

	CRect                rect;

		SDL_RenderPresent(ren);

}



	txDesc.ArraySize = 1;



	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];



				tinyobj::real_t ty =





			{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];

};

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SAFE_RELEASE(m_pIndexBuffer);



			exit(1);

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	//Create Index

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	cbDesc.MiscFlags = 0;

	for (size_t s = 0; s < shapes.size(); s++)

		SDL_RenderCopy(ren, tex, NULL, NULL);



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	scDesc.OutputWindow = hwnd;

	UINT offsets = 0;



				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	{

	cbDesc.CPUAccessFlags = 0;

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

		&shapes,

	//Key press surfaces constants

#include <iostream>

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//頂点シェーダー生成

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	scDesc.Windowed = TRUE;



	SDL_FreeSurface(bmp);

	CRect                rect;

		}

				vertex.push_back(vertex_tmp);

				break;

		return hr;

CD3DTest::~CD3DTest()

		return hr;



}

	SAFE_RELEASE(m_pImmediateContext);

	SAFE_RELEASE(m_pLightBuffer);

		cout << "SDL_INIT_ERROR" << endl;

	D3D11_SUBRESOURCE_DATA vrData;

				break;



	m_pIndexBuffer = NULL;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

				indexlist.push_back(idx.vertex_index);



	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

		SDL_RenderCopy(ren, tex, NULL, NULL);

	m_pTextureView = NULL;

	//vector<WORD> index_t;

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };



		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pImmediateContext);

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

			case SDLK_UP:

}

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		&materials,

	m_pIndexBuffer = NULL;

	}

		&shapes,

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	XMVECTOR lightPosition = XMVectorSet(-9.5f, 9.5f, -1.0f, 0.0f);

		return hr;

HRESULT CD3DTest::Create(HWND hwnd)

				break;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				indexlist.push_back(idx.vertex_index);

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

				Vertex vertex_tmp = { {vx,vy,vz},{nx,ny,nz } ,{tx,ty} };

	txDesc.SampleDesc.Count = 1;



	if (FAILED(hr))

	SAFE_RELEASE(m_pInputLayout);

	if (FAILED(hr))

	m_pVertexShader = NULL;

{

	{

	txDesc.Usage = D3D11_USAGE_DEFAULT;

void CD3DTest::Render()

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	}

	SAFE_RELEASE(m_pTexture);

}

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	ibDesc.MiscFlags = 0;

	}



				break;

	scDesc.Windowed = TRUE;

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

		D3D_DRIVER_TYPE_HARDWARE,



}



	scDesc.SampleDesc.Quality = 0;

	txDesc.Width = rect.Width();

	D3D11_TEXTURE2D_DESC txDesc;

	cbDesc.CPUAccessFlags = 0;



	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		}

	if (!error.empty())

	{



		return hr;

	//vector<Vertex> vertex_t;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	{

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	m_IndexCount = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

		}



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			{

	delete[] pVList;

	scDesc.SampleDesc.Count = 1;

}

	SDL_DestroyTexture(tex);

	XMFLOAT4 diffuse;           //拡散(r,g,b)





	txDesc.CPUAccessFlags = 0;



	ConstantLight    pntLight; //点光源

	vbDesc.CPUAccessFlags = 0;

		// Loop over faces(polygon)

	vbDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.eyePos, eye);

	while (SDL_PollEvent(&e) != 0)

	//ピクセルシェーダー生成

	m_pVertexShader = NULL;

int main(int, char**)



		return hr;

		delete[] pVList;

		NULL,

	D3D11_SUBRESOURCE_DATA irData;

	m_Viewport.MaxDepth = 1.0f;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		&error,

{

	scDesc.BufferCount = 1;

	irData.pSysMem = &pIList[0];





	CRect                rect;

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	for (int i = 0; i < vcount; i++)

/*

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

	if (FAILED(hr))



		{

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

			case SDLK_LEFT:

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);



	{

	SDL_DestroyRenderer(ren);

		pIList[j] = indexList[j];



				// access to vertex

	m_IndexCount = icount;

	auto& materials = reader.GetMaterials();

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	if (SDL_Init(SDL_INIT_VIDEO != 0))

		return hr;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	{

		// Loop over faces(polygon)

	}

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

				float vx = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 0] : 0;

	auto& attrib = reader.GetAttrib();



				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



	SDL_Event e;

	ibDesc.CPUAccessFlags = 0;

	//ビューポート設定

			case SDLK_RIGHT:

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

		return hr;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

{



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	SAFE_RELEASE(m_pTextureView);

		SDL_RenderPresent(ren);

{

	m_pSampler = NULL;

				break;

	scDesc.Windowed = TRUE;

	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



#endif

	if (FAILED(hr))

		exit(1);

	ibDesc.CPUAccessFlags = 0;

	scDesc.SampleDesc.Count = 1;

		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

		{

}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);





	m_pMatrixBuffer = NULL;



			{

	if (FAILED(hr))

	m_pTexture = NULL;



				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

	{

		m_pImmediateContext->ClearState();

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	SDL_DestroyTexture(tex);



	delete[] pIList;

	txDesc.MipLevels = 1;





	return;

				tinyobj::real_t ty =

			for (size_t v = 0; v < fv; v++)

	if (FAILED(hr))

	m_pVertexBuffer = NULL;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

	XMFLOAT4         ambient;  //環境光(r,g,b)



				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];



	SAFE_RELEASE(m_pLightBuffer);

	XMFLOAT4         eyePos;   //視点座標

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];



	vrData.SysMemSlicePitch = 0;

		{

	txDesc.Height = rect.Height();

	if (FAILED(hr))

			default:



	ibDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	m_pSampler = NULL;



	}

		pIList[j] = indexList[j];

		&m_pDevice,

		KEY_PRESS_SURFACE_LEFT,

	XMFLOAT4         eyePos;   //視点座標

		{

	m_pTextureView = NULL;

}
	m_pRenderTargetView = NULL;

	if (FAILED(hr))

void CD3DTest::Render()



	if (FAILED(hr))

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

}

	pBackBuffer->Release();

	m_pIndexBuffer = NULL;

	return 0;

	if (FAILED(hr))

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	D3D11_BUFFER_DESC vbDesc;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	ConstantMaterial material; //物体の質感



				tinyobj::real_t tx =

	Release();

	while (SDL_PollEvent(&e) != 0)

				indexlist.push_back(idx.vertex_index);

	irData.SysMemPitch = 0;

		pVList[i] = vertexlist[i];

	txDesc.Height = rect.Height();

	};

		flags,

	ConstantLight    pntLight; //点光源

	}

				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];





			default:

	}

	delete[] pVList;

			int num_vertices = shape.mesh.num_face_vertices[f];

CD3DTest::~CD3DTest()

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	ConstantMaterial material; //物体の質感

	txDesc.SampleDesc.Count = 1;

	//First we need to start up SDL, and make sure it went ok

	XMFLOAT4 attenuate;         //減衰(a,b,c)

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	tinyobj::ObjReaderConfig reader_config;

	}



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;





				WORD index = idx.vertex_index;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



int SEGMENT = 36;

		return hr;

	auto& materials = reader.GetMaterials();

		return hr;



	SAFE_RELEASE(m_pTexture);



	UINT strides = sizeof(Vertex);

	SDL_Quit();

struct ConstantMatrixBuffer {

	};

		return hr;

	if (FAILED(hr))

		return hr;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());



	if (!reader.ParseFromFile(inputfile, reader_config))

		if (!ret)

		KEY_PRESS_SURFACE_LEFT,

	};

	m_pInputLayout = NULL;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, suf);

	irData.pSysMem = &pIList[0];

	float    fov = XMConvertToRadians(20.0f);



	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);

	if (FAILED(hr))

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];



	{

int main(int, char**)



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);



	if (FAILED(hr))

	txDesc.CPUAccessFlags = 0;

	}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);



	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);



	dsDesc.Format = txDesc.Format;

		KEY_PRESS_SURFACE_UP,

	SAFE_RELEASE(m_pRenderTargetView);

	if (FAILED(hr))

#include <iostream>

	vbDesc.CPUAccessFlags = 0;



	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

CD3DTest::~CD3DTest()

			{

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		}

	if (FAILED(hr))



	m_pIndexBuffer = NULL;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

{

		{

	while (SDL_PollEvent(&e) != 0)

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	txDesc.MiscFlags = 0;



	}

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	}



	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	XMFLOAT4         ambient;  //環境光(r,g,b)

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		KEY_PRESS_SURFACE_DOWN,

struct ConstantLightBuffer {

	m_pSampler = NULL;

	scDesc.SampleDesc.Quality = 0;

			exit(1);



	}

	m_pInputLayout = NULL;

	for (int i = 0; i < 3; i++)



	txDesc.Width = rect.Width();

	if (FAILED(hr))



	delete[] pVList;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

		{

	}

	txDesc.CPUAccessFlags = 0;

#endif

	m_IndexCount = icount;

				indexlist.push_back(idx.vertex_index);



	SAFE_RELEASE(m_pImmediateContext);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			for (size_t v = 0; v < num_vertices; v++)

	XMFLOAT4 attenuate;         //減衰(a,b,c)

				indexlist.push_back(idx.vertex_index);

		}

	// Loop over shapes

	XMStoreFloat4(&clb.eyePos, eye);

	SDL_Window* win = SDL_CreateWindow("Hello Fuckin SDL", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	Vertex* pVList = new Vertex[vcount];

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	for (int j = 0; j < icount; j++)

	Release();

	if (m_pImmediateContext)

{

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

{

#ifdef _DEBUG

	SAFE_RELEASE(m_pTexture);

	ZeroMemory(&dsDesc, sizeof(dsDesc));

		exit(1);

	m_pLightBuffer = NULL;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	//vector<WORD> index_t;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		D3D_DRIVER_TYPE_HARDWARE,

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	//Create Index

	if (FAILED(hr))

	if (m_pImmediateContext)





	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



	SAFE_RELEASE(m_pMatrixBuffer);

struct ConstantMatrixBuffer {



	cbDesc.MiscFlags = 0;

	}



	m_Angle += XMConvertToRadians(1.0f);

		{

	if (FAILED(hr))

			exit(1);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_DestroyTexture(tex);

		return hr;

				WORD index = idx.vertex_index;

	}

	m_pPixelShader = NULL;



			}

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	m_Angle += XMConvertToRadians(1.0f);

	m_pIndexBuffer = NULL;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

		SDL_Delay(1000);

	vbDesc.Usage = D3D11_USAGE_DEFAULT;

		SDL_RenderClear(ren);

				break;

	vbDesc.MiscFlags = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },



}

				vertex.push_back(vertex_tmp);

	vbDesc.MiscFlags = 0;

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	LoadObj(vertexlist, indexList);



		{

	m_pTexture = NULL;

		}

		}

	float    aspect = m_Viewport.Width / m_Viewport.Height;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	return;

{

				tinyobj::real_t ty =

				tinyobj::real_t ty =

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	cbDesc.MiscFlags = 0;

		return hr;

	for (int i = 0; i < vcount; i++)







	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	return 0;

}

	SAFE_RELEASE(m_pPixelShader);

	//Clean up our objects and quit

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	m_pTexture = NULL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				break;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	//定数バッファ作成

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

				indexlist.push_back(index);

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	if (!error.empty())

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	D3D11_SAMPLER_DESC smpDesc;



	m_pSwapChain->Present(0, 0);

	//vector<Vertex> vertex_t;



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

				break;



	vrData.SysMemPitch = 0;



	hr = D3D11CreateDeviceAndSwapChain(NULL,

				tinyobj::real_t ty =



	//Key press surfaces constants

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	SDL_DestroyRenderer(ren);

}

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	}

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

			index_offset += fv;

		flags,

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	vbDesc.StructureByteStride = 0;

				indexlist.push_back(index);

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	//インデックスバッファ作成



	{

	ZeroMemory(&txDesc, sizeof(txDesc));

	SAFE_RELEASE(m_pLightBuffer);

	return 0;



	cbDesc.MiscFlags = 0;

	//インデックスバッファ作成

{

		SDL_RenderClear(ren);

	SDL_DestroyRenderer(ren);

	}

	cbDesc.CPUAccessFlags = 0;

	scDesc.BufferCount = 1;

void CD3DTest::Release()

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

	m_Viewport.Height = (FLOAT)rect.Height();

	}

	scDesc.SampleDesc.Quality = 0;

			}

	SAFE_RELEASE(m_pVertexShader);

	for (const auto& shape : shapes)

	//テクスチャ読み込み



		size_t index_offset = 0;  // インデントのオフセット

{

	ibDesc.CPUAccessFlags = 0;

	if (FAILED(hr))

	SDL_DestroyRenderer(ren);

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);



	std::string imagePath = "hello.bmp";

	}

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



		D3D_DRIVER_TYPE_HARDWARE,

	ConstantLightBuffer clb;

		}



	m_Viewport.Height = (FLOAT)rect.Height();



const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

		1,



 * Lesson 1: Hello World!

	XMFLOAT4         eyePos;   //視点座標



	//Clean up our objects and quit

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	SAFE_RELEASE(m_pVertexShader);

	m_pMatrixBuffer = NULL;

	vrData.pSysMem = &pVList[0];

			{

	if (!reader.Warning().empty())

			for (size_t v = 0; v < num_vertices; v++)

	scDesc.OutputWindow = hwnd;

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)



	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

		}

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

		return hr;

		return hr;

};

	if (FAILED(hr))

	m_pRenderTargetView = NULL;



	tinyobj::attrib_t attrib;

	for (const auto& shape : shapes)

			}

			for (size_t v = 0; v < fv; v++)

	m_Viewport.MaxDepth = 1.0f;

	SDL_Quit();

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	if (FAILED(hr))

		}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				// access to vertex

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);



	D3D_FEATURE_LEVEL level;

	for (size_t s = 0; s < shapes.size(); s++)

	if (FAILED(hr))

 * Lesson 1: Hello World!

	::ZeroMemory(&scDesc, sizeof(scDesc));

	m_Viewport.Height = (FLOAT)rect.Height();



	{

	for (int i = 0; i < vcount; i++)



	m_pImmediateContext->IASetPrimitiveTopology(D3D11_PRIMITIVE_TOPOLOGY_TRIANGLELIST);

			// Loop over vertices in the face.

				// access to vertex

	DXGI_SWAP_CHAIN_DESC scDesc;

	if (FAILED(hr))

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

	ConstantMaterial material; //物体の質感

		return hr;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		return hr;



	vrData.SysMemPitch = 0;

	std::string inputfile = "test.obj";

	if (FAILED(hr))

		return hr;

		D3D11_SDK_VERSION,

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);



	SAFE_RELEASE(m_pDepthStencilTexture);

			//Select surfaces based on key press

		return hr;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);



	scDesc.OutputWindow = hwnd;



		KEY_PRESS_SURFACE_RIGHT,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	vbDesc.CPUAccessFlags = 0;

/*



{

	UINT flags = 0;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;

		SDL_RenderClear(ren);

	SAFE_RELEASE(m_pSwapChain);

}

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	//ビューポート設定

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{

	txDesc.ArraySize = 1;

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{

	D3D11_SUBRESOURCE_DATA irData;

	m_pSwapChain->Present(0, 0);



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	{

	{

	cbDesc.StructureByteStride = 0;

	SAFE_RELEASE(m_pVertexShader);

	auto& attrib = reader.GetAttrib();

	cbDesc.CPUAccessFlags = 0;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;



	{



	txDesc.Height = rect.Height();

int main(int, char**)

	SAFE_RELEASE(m_pLightBuffer);

	vrData.pSysMem = &pVList[0];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

{

	XMFLOAT4X4 projection;

	//インデックスバッファ作成

	};



	m_pMatrixBuffer = NULL;

		// Loop over faces(polygon)



	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

 * Lesson 1: Hello World!



	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

struct ConstantLight {

#define TINYOBJLOADER_IMPLEMENTATION

	dsDesc.Format = txDesc.Format;

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	vbDesc.MiscFlags = 0;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

struct ConstantLightBuffer {



	{

	}

	XMVECTOR materialSpecular = XMVectorSet(0.5f, 0.5f, 0.5f, 50.0f);

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

		return hr;

	auto& materials = reader.GetMaterials();

	SAFE_RELEASE(m_pTexture);



	if (FAILED(hr))

	if (FAILED(hr))

		return hr;

	delete[] pIList;



	//テクスチャ読み込み

	SAFE_RELEASE(m_pSampler);

	if (m_pImmediateContext)

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));





		KEY_PRESS_SURFACE_DEFAULT,

	cbDesc.StructureByteStride = 0;

	m_pVertexShader = NULL;



	XMMATRIX worldMatrix = XMMatrixRotationY(m_Angle);

	m_Viewport.Height = (FLOAT)rect.Height();

	HRESULT              hr;

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	scDesc.SampleDesc.Count = 1;

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];



	ibDesc.StructureByteStride = 0;

	m_Viewport.MaxDepth = 1.0f;

			case SDLK_LEFT:

void CD3DTest::Render()

			index_offset += fv;

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	ibDesc.Usage = D3D11_USAGE_DEFAULT;



			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	{

		KEY_PRESS_SURFACE_DEFAULT,

		&shapes,

	enum KeyPressSurfaces

{

			int num_vertices = shape.mesh.num_face_vertices[f];

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)



		pLevels,

	XMFLOAT4X4 world;

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pTexture);

	float    fov = XMConvertToRadians(20.0f);

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);







	XMStoreFloat4(&clb.material.specular, materialSpecular);

	cbDesc.StructureByteStride = 0;

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				vertex.push_back(vertex_tmp);





	hr = m_pDevice->CreateBuffer(&ibDesc, &irData, &m_pIndexBuffer);



		m_pImmediateContext->ClearState();

#include <iostream>

	//頂点バッファ作成

				break;

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);



	std::string imagePath = "hello.bmp";

		return hr;

	auto& attrib = reader.GetAttrib();

	//Key press surfaces constants

	XMFLOAT4         ambient;  //環境光(r,g,b)

	m_pVertexShader = NULL;

CD3DTest::CD3DTest()

	return 0;



	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

}

		KEY_PRESS_SURFACE_TOTAL

	m_pMatrixBuffer = NULL;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

				vertex.push_back(vertex_tmp);

		SDL_RenderCopy(ren, tex, NULL, NULL);

			case SDLK_UP:

	scDesc.SampleDesc.Quality = 0;

	cbDesc.MiscFlags = 0;



	SAFE_RELEASE(m_pDepthStencilTexture);

		KEY_PRESS_SURFACE_TOTAL

	SAFE_RELEASE(m_pVertexBuffer);



			break;

	if (FAILED(hr))

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);



	scDesc.OutputWindow = hwnd;

	for (int i = 0; i < vcount; i++)



	auto& attrib = reader.GetAttrib();



	}*/

	SAFE_RELEASE(m_pTexture);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

	XMFLOAT4         ambient;  //環境光(r,g,b)



	XMFLOAT4         eyePos;   //視点座標

	SDL_Surface* suf = SDL_LoadBMP("hello.bmp");

		}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha



	XMFLOAT4X4 projection;

	ConstantMaterial material; //物体の質感

	XMFLOAT4         eyePos;   //視点座標

				indexlist.push_back(index);

		KEY_PRESS_SURFACE_LEFT,



#define TINYOBJLOADER_USE_MAPBOX_EARCUT

		//User requests quit

#include <iostream>

	hr = m_pDevice->CreateTexture2D(&txDesc, NULL, &m_pDepthStencilTexture);

			}

			}



	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	{

		// Loop over faces(polygon)

		delete[] pIList;

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	D3D_FEATURE_LEVEL level;



	return;





				tinyobj::real_t nx = attrib.normals[3 * size_t(idx.normal_index) + 0];

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	std::vector<tinyobj::shape_t> shapes;

	}

	txDesc.SampleDesc.Count = 1;

	XMFLOAT4X4 world;

	ZeroMemory(&txDesc, sizeof(txDesc));







	{

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

	ZeroMemory(&txDesc, sizeof(txDesc));

	}

		}

	while (SDL_PollEvent(&e) != 0)

	}

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	dsDesc.Texture2D.MipSlice = 0;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	XMFLOAT4         eyePos;   //視点座標

			case SDLK_RIGHT:

			for (size_t v = 0; v < fv; v++)

		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

		SDL_RenderPresent(ren);

	m_pImmediateContext = NULL;

	auto& shapes = reader.GetShapes();

	SAFE_RELEASE(m_pIndexBuffer);

	delete[] pIList;

	txDesc.ArraySize = 1;

		if (!ret)

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

		return hr;

			switch (e.key.keysym.sym)

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	hr = m_pDevice->CreateDepthStencilView(m_pDepthStencilTexture, &dsDesc, &m_pDepthStencilView);

		size_t index_offset = 0;  // インデントのオフセット

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

	m_pDepthStencilView = NULL;



				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;

	SDL_Quit();



	std::vector<tinyobj::material_t> materials;

	UINT flags = 0;







	{

			// Loop over vertices in the face.

		return hr;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	m_pVertexBuffer = NULL;

				tinyobj::real_t vx = attrib.vertices[3 * size_t(idx.vertex_index) + 0];

	cbDesc.CPUAccessFlags = 0;



		&m_pImmediateContext);

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

	SAFE_RELEASE(m_pVertexShader);

CD3DTest::CD3DTest()

		cout << "SDL_INIT_ERROR" << endl;

	m_VertexCount = vcount;





	D3D_FEATURE_LEVEL level;

	scDesc.SampleDesc.Count = 1;

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	for (int i = 0; i < vcount; i++)

	m_IndexCount = icount;



	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };



};

		delete[] pIList;

	m_pImmediateContext->IASetIndexBuffer(m_pIndexBuffer, DXGI_FORMAT_R16_UINT, 0);

	{

			{



	txDesc.ArraySize = 1;

	{

	//Key press surfaces constants

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	{



	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

		{

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	std::string error;

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

		pIList[j] = indexList[j];

	if (FAILED(hr))

			{

		//User requests quit

	float    farZ = 100.0f;

		return hr;

	SAFE_RELEASE(m_pPixelShader);

	{



	XMFLOAT4 ambient;           //環境(r,g,b)

	}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)





	SDL_FreeSurface(bmp);

	ibDesc.BindFlags = D3D11_BIND_INDEX_BUFFER;

#include <SDL.h>

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

	auto& materials = reader.GetMaterials();

	{





	}

	XMStoreFloat4(&clb.material.specular, materialSpecular);

	if (m_pImmediateContext)

		{











	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	{

	XMFLOAT4 specular;          //反射(r,g,b,光沢度係数)

		if (!reader.Error().empty())

	vector<Vertex> vertexlist;

	{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	m_pDepthStencilTexture = NULL;

	m_pSwapChain = NULL;



		SDL_RenderCopy(ren, tex, NULL, NULL);

};

	{

		{

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	SDL_FreeSurface(bmp);

	m_pImmediateContext->IASetVertexBuffers(0, 1, &m_pVertexBuffer, &strides, &offsets);

	ID3D11Texture2D* pBackBuffer;

}

		//User requests quit

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

	float    nearZ = 0.1f;



	}

		size_t index_offset = 0;  // インデントのオフセット

		return hr;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));





	SAFE_RELEASE(m_pDevice);

		SDL_RenderPresent(ren);

		return hr;

	irData.SysMemPitch = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	irData.SysMemSlicePitch = 0;

	tinyobj::ObjReaderConfig reader_config;

	txDesc.MiscFlags = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];



		1,

	bool ret = tinyobj::LoadObj(

	ibDesc.CPUAccessFlags = 0;

	XMStoreFloat4(&clb.material.ambient, materialAmbient);

}

	m_pImmediateContext->ClearRenderTargetView(m_pRenderTargetView, clearColor);

	}

	tinyobj::attrib_t attrib;



	}

	//Vertex* pVList = new Vertex[vcount];

		SDL_RenderClear(ren);



	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	m_pImmediateContext->ClearDepthStencilView(m_pDepthStencilView, D3D11_CLEAR_DEPTH | D3D11_CLEAR_STENCIL, 1.0f, 0);



	D3D11_BUFFER_DESC vbDesc;

	XMMATRIX projMatrix = XMMatrixPerspectiveFovLH(fov, aspect, nearZ, farZ);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	};

		&m_pDevice,

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);





		{



	vector<Vertex> vertexlist;

	CRect                rect;

	{ "POSITION", 0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	irData.SysMemPitch = 0;



CD3DTest::CD3DTest()

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

		&attrib,

int SEGMENT = 36;



	scDesc.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;



		{





				vertex.push_back(vertex_tmp);







	{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}*/

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	//Clean up our objects and quit

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;

	while (SDL_PollEvent(&e) != 0)

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

		if (!reader.Error().empty())

			{



	}*/

	XMFLOAT4X4 projection;

	UINT offsets = 0;



	UINT strides = sizeof(Vertex);

	if (!error.empty())

	}

	XMStoreFloat4(&clb.material.diffuse, materialDiffuse);

			{



	}

	SDL_Event e;

	CRect                rect;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		SDL_RenderCopy(ren, tex, NULL, NULL);



	cbDesc.MiscFlags = 0;

	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

	//頂点バッファ作成

}

				indexlist.push_back(idx.vertex_index);

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);



};



		KEY_PRESS_SURFACE_UP,

};

	delete[] pIList;

{

	txDesc.SampleDesc.Count = 1;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	tinyobj::ObjReader reader;



	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

	m_pVertexBuffer = NULL;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

struct ConstantMatrixBuffer {

	if (FAILED(hr))



	m_pVertexShader = NULL;

		else if (e.type == SDL_KEYDOWN)



	m_VertexCount = vcount;

			{

	m_Viewport.TopLeftX = 0;

	SDL_FreeSurface(bmp);



	//頂点シェーダー生成

				tinyobj::real_t ny = attrib.normals[3 * size_t(idx.normal_index) + 1];

#include <SDL.h>

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	txDesc.SampleDesc.Quality = 0;

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DOWN];



 */

	//Key press surfaces constants

	}

	vector<WORD> indexList;



	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);



{

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);



				// access to vertex

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];



	{

	//Create Index



	SAFE_RELEASE(m_pVertexShader);

		if (e.type == SDL_QUIT)

	ibDesc.StructureByteStride = 0;

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pDevice);

	m_Viewport.Height = (FLOAT)rect.Height();

	m_pImmediateContext->VSSetShader(m_pVertexShader, NULL, 0);

	bool ret = tinyobj::LoadObj(

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

#include <iostream>

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];

	{

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	SDL_Quit();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);



	m_pSampler = NULL;

			{

	m_Viewport.Height = (FLOAT)rect.Height();

		//User requests quit

	SDL_FreeSurface(suf);

	vrData.pSysMem = &pVList[0];

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

				tinyobj::real_t ty = attrib.texcoords[2 * size_t(idx.texcoord_index) + 1];

	}

	SAFE_RELEASE(m_pDepthStencilTexture);

			int num_vertices = shape.mesh.num_face_vertices[f];

	{

	}



int main(int, char**)



		for (size_t f = 0; f < shapes[s].mesh.num_face_vertices.size(); f++)

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	float    aspect = m_Viewport.Width / m_Viewport.Height;

	irData.pSysMem = &pIList[0];

		SDL_RenderClear(ren);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);

	for (int j = 0; j < icount; j++)

	XMFLOAT4X4 view;



using std::cout; using std::endl;

		if (!reader.Error().empty())

	WORD* pIList = new WORD[icount];

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		exit(1);

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	//テクスチャ読み込み

		if (e.type == SDL_QUIT)

				break;

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

};

	auto& materials = reader.GetMaterials();

	hr = D3D11CreateDeviceAndSwapChain(NULL,

int main(int, char**)

	m_IndexCount = 0;



	scDesc.OutputWindow = hwnd;



	{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

			for (size_t v = 0; v < fv; v++)



	HRESULT              hr;



	if (SDL_Init(SDL_INIT_VIDEO != 0))

	//vector<WORD> index_t;

	XMFLOAT4 diffuse;           //拡散(r,g,b)

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	}

	{





		SDL_RenderClear(ren);

	//Clean up our objects and quit

	if (!reader.Warning().empty())

	m_pTextureView = NULL;

	SAFE_RELEASE(m_pSwapChain);

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	XMVECTOR eye = XMVectorSet(0.0f, 3.0f, -7.0f, 0.0f);



	::ZeroMemory(&smpDesc, sizeof(D3D11_SAMPLER_DESC));

			case SDLK_LEFT:

	txDesc.Format = DXGI_FORMAT_D24_UNORM_S8_UINT;

		//User presses a key

	m_VertexCount = 0;



	}







	XMStoreFloat4(&clb.pntLight.attenuate, lightAttenuate);

			for (size_t v = 0; v < num_vertices; v++)

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);



	dsDesc.Format = txDesc.Format;



	if (FAILED(hr))

	//int     vcount = (SEGMENT + 1) * (SEGMENT / 2 + 1);

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

			case SDLK_RIGHT:

	while (SDL_PollEvent(&e) != 0)

	XMStoreFloat4(&clb.pntLight.specular, lightSpecular);

	smpDesc.AddressU = D3D11_TEXTURE_ADDRESS_CLAMP;



	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

		exit(1);

		return hr;





	SAFE_RELEASE(m_pPixelShader);

	if (m_pImmediateContext)



			// Loop over vertices in the face.

	if (FAILED(hr))

		}

	{

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);



		// Loop over faces(polygon)

	ZeroMemory(&dsDesc, sizeof(dsDesc));

};

	ibDesc.MiscFlags = 0;



		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	XMFLOAT4         eyePos;   //視点座標



{



	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

	}

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	XMMATRIX viewMatrix = XMMatrixLookAtLH(eye, focus, up);

	{

	}*/

				tinyobj::real_t tx =

{

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

			{

	/*

	SAFE_RELEASE(m_pPixelShader);



		KEY_PRESS_SURFACE_DOWN,

	for (int i = 0; i < vcount; i++)

		&m_pSwapChain,



	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		{

	};

	ZeroMemory(&txDesc, sizeof(txDesc));

	//深度ステンシルバッファ作成



				indexlist.push_back(index);

	SAFE_RELEASE(m_pDevice);

int main(int, char**)

	};

	//深度ステンシルバッファ作成

	m_pMatrixBuffer = NULL;





	D3D11_BUFFER_DESC vbDesc;

	float    aspect = m_Viewport.Width / m_Viewport.Height;



	//Vertex* pVList = new Vertex[vcount];

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

#define TINYOBJLOADER_USE_MAPBOX_EARCUT

	{

	SAFE_RELEASE(m_pVertexBuffer);

	hr = m_pDevice->CreateVertexShader(&g_vs_main, sizeof(g_vs_main), NULL, &m_pVertexShader);

#include <SDL.h>

	XMFLOAT4         eyePos;   //視点座標

	}

	XMStoreFloat4(&clb.pntLight.pos, lightPosition);

	}

	float clearColor[4] = { 0.3f, 0.3f, 0.3f, 1.0f }; //red,green,blue,alpha

	if (FAILED(hr))



	XMVECTOR lightAttenuate = XMVectorSet(1.0f, 0.0f, 0.0f, 0.0f);

	ibDesc.Usage = D3D11_USAGE_DEFAULT;

	XMFLOAT4X4 projection;

	auto& shapes = reader.GetShapes();

	ibDesc.MiscFlags = 0;

			size_t fv = size_t(shapes[s].mesh.num_face_vertices[f]);

	cbDesc.StructureByteStride = 0;

void CD3DTest::Render()

	Release();

	XMStoreFloat4(&clb.eyePos, eye);

	if (SDL_Init(SDL_INIT_VIDEO) != 0)

 */

	if (FAILED(hr))

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;



			case SDLK_RIGHT:

	tinyobj::attrib_t attrib;

#include <SDL.h>

		{

		&attrib,



	scDesc.BufferDesc.Width = rect.Width();

				WORD index = idx.vertex_index;

	m_VertexCount = 0;

	ZeroMemory(&txDesc, sizeof(txDesc));

	XMVECTOR lightDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	scDesc.OutputWindow = hwnd;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_LEFT];

	txDesc.Usage = D3D11_USAGE_DEFAULT;

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

			{

		//User presses a key



	return 0;

	LoadObj(vertexlist, indexList);

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

				tinyobj::index_t idx = shape.mesh.indices[index_offset + v];

	}

	//頂点レイアウト作成

	SDL_DestroyWindow(win);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

	flags |= D3D11_CREATE_DEVICE_DEBUG;

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	//Create Index

	SDL_DestroyTexture(tex);

	}

	if (FAILED(hr))

	m_pDepthStencilView = NULL;

	SAFE_RELEASE(m_pDepthStencilView);

		return hr;

	if (!error.empty())

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}

	XMStoreFloat4(&clb.eyePos, eye);

	}

int SEGMENT = 36;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

			int num_vertices = shape.mesh.num_face_vertices[f];

	UINT flags = 0;

	if (m_pImmediateContext)



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

		KEY_PRESS_SURFACE_UP,

const D3D11_INPUT_ELEMENT_DESC g_VertexDesc[]{





	irData.pSysMem = &pIList[0];

	vbDesc.ByteWidth = sizeof(Vertex) * vcount;



				tinyobj::real_t ty =

		D3D11_SDK_VERSION,



	SDL_DestroyRenderer(ren);

	if (!reader.ParseFromFile(inputfile, reader_config))

	Release();

		return hr;

	XMVECTOR up = XMVectorSet(0.0f, 1.0f, 0.0f, 0.0f);

	cbDesc.ByteWidth = sizeof(ConstantLightBuffer);

	m_pImmediateContext->PSSetSamplers(0, 1, &m_pSampler);

	if (FAILED(hr))



				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	}

#define TINYOBJLOADER_IMPLEMENTATION

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	{

	SAFE_RELEASE(m_pTextureView);

		SDL_RenderClear(ren);

	m_Viewport.TopLeftY = 0;





		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));

	if (SDL_Init(SDL_INIT_VIDEO != 0))

struct ConstantMaterial {

	D3D11_DEPTH_STENCIL_VIEW_DESC dsDesc;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },





	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

	cbDesc.CPUAccessFlags = 0;

	bool ret = tinyobj::LoadObj(

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	XMFLOAT4 diffuse;           //拡散(r,g,b)

	{





	reader_config.mtl_search_path = "./"; // Path to material files

	//Clean up our objects and quit

				tinyobj::index_t idx = shapes[s].mesh.indices[index_offset + v];





	hr = m_pDevice->CreateBuffer(&vbDesc, &vrData, &m_pVertexBuffer);

	XMFLOAT4         ambient;  //環境光(r,g,b)

	if (!reader.Warning().empty())

}





#include <SDL.h>



	tinyobj::ObjReader reader;

	smpDesc.AddressV = D3D11_TEXTURE_ADDRESS_CLAMP;

	}

{

	{

	SDL_DestroyRenderer(ren);

		}

				float vz = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 2] : 0;



	txDesc.MiscFlags = 0;

		&m_pDevice,

	D3D11_BUFFER_DESC cbDesc;

	if (!error.empty())

CD3DTest::CD3DTest()



	SDL_DestroyWindow(win);

	{

	//vector<Vertex> vertex_t;

	XMFLOAT4X4 world;

	m_pImmediateContext->PSSetShaderResources(0, 1, &m_pTextureView);

			case SDLK_RIGHT:

	smpDesc.AddressW = D3D11_TEXTURE_ADDRESS_CLAMP;

		//User requests quit

	m_VertexCount = 0;

	}

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);



	ibDesc.Usage = D3D11_USAGE_DEFAULT;



			{

	XMFLOAT4X4 projection;

	float    fov = XMConvertToRadians(20.0f);

	DXGI_SWAP_CHAIN_DESC scDesc;

	{

	LoadObj(vertexlist, indexList);

	flags |= D3D11_CREATE_DEVICE_DEBUG;

	scDesc.BufferDesc.Height = rect.Height();

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	//頂点シェーダー生成

	//テクスチャ読み込み

{

}

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

		delete[] pIList;

			}

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);





				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SDL_Quit();

	SAFE_RELEASE(m_pSampler);

	m_pVertexBuffer = NULL;

	//vector<Vertex> vertex_t;

	D3D11_TEXTURE2D_DESC txDesc;

		SDL_RenderCopy(ren, tex, NULL, NULL);

					idx.normal_index > 0 ? attrib.texcoords[2 * idx.texcoord_index + 1] : 0;

	{ "NORMAL",   0, DXGI_FORMAT_R32G32B32_FLOAT, 0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	//頂点レイアウト作成



			// Loop over vertices in the face.



	cbDesc.StructureByteStride = 0;

		{



	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	}



	m_IndexCount = icount;



				break;

			//Select surfaces based on key press

	scDesc.SampleDesc.Count = 1;

	XMStoreFloat4(&clb.ambient, lightAmbient);

		//User presses a key

	SDL_DestroyRenderer(ren);

CD3DTest::~CD3DTest()

	SDL_Window* win = SDL_CreateWindow("Hello World!", 100, 100, 640, 480, SDL_WINDOW_SHOWN);

	}

	irData.SysMemSlicePitch = 0;





	return;

	vrData.SysMemPitch = 0;

		KEY_PRESS_SURFACE_RIGHT,

	D3D11_BUFFER_DESC vbDesc;

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

		1,

		pIList[j] = indexList[j];







	irData.pSysMem = &pIList[0];



				break;

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	{

	SDL_Event e;

	{

		pVList[i] = vertexlist[i];

	m_Viewport.TopLeftY = 0;





		size_t index_offset = 0;

	m_Viewport.TopLeftY = 0;





			break;

	hr = D3D11CreateDeviceAndSwapChain(NULL,

	irData.SysMemPitch = 0;

	vrData.SysMemSlicePitch = 0;

				tinyobj::real_t ty =

		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++)

		m_pImmediateContext->ClearState();

	//定数バッファ作成

	irData.SysMemSlicePitch = 0;

			}

using std::cout; using std::endl;

	m_Angle += XMConvertToRadians(1.0f);

	//テクスチャ読み込み

	XMStoreFloat4(&clb.eyePos, eye);

	XMVECTOR lightSpecular = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

{

	UINT flags = 0;

		return hr;

		}

				tinyobj::real_t nz = attrib.normals[3 * size_t(idx.normal_index) + 2];



			}

	ibDesc.CPUAccessFlags = 0;

	m_pInputLayout = NULL;

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

		size_t index_offset = 0;

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);

	::GetClientRect(hwnd, &rect);

	SAFE_RELEASE(m_pLightBuffer);





			index_offset += num_vertices;

}

}

		return hr;

}



#include <SDL.h>

		SDL_RenderCopy(ren, tex, NULL, NULL);

	D3D11_BUFFER_DESC cbDesc;

		KEY_PRESS_SURFACE_DEFAULT,

	m_VertexCount = 0;

	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

			case SDLK_DOWN:

	txDesc.BindFlags = D3D11_BIND_DEPTH_STENCIL;

	for (const auto& shape : shapes)

	txDesc.Height = rect.Height();

	SAFE_RELEASE(m_pMatrixBuffer);

	txDesc.Usage = D3D11_USAGE_DEFAULT;







	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

	SDL_DestroyTexture(tex);

	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pLightBuffer);

	dsDesc.Format = txDesc.Format;



	m_pImmediateContext = NULL;



		exit(1);

	{

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

};

		KEY_PRESS_SURFACE_UP,

			default:









	}

	//Create Index



	ConstantLight    pntLight; //点光源

	cbDesc.BindFlags = D3D11_BIND_CONSTANT_BUFFER;

		KEY_PRESS_SURFACE_DEFAULT,

			case SDLK_DOWN:

};

	m_pVertexBuffer = NULL;

	SAFE_RELEASE(m_pMatrixBuffer);

{

		return hr;

	m_pVertexShader = NULL;

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	scDesc.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;

	SDL_DestroyTexture(tex);



	vbDesc.StructureByteStride = 0;

			{

struct ConstantMatrixBuffer {

		NULL,

};

		1,

	ibDesc.MiscFlags = 0;



	D3D_FEATURE_LEVEL level;

	bool ret = tinyobj::LoadObj(

			default:





	XMFLOAT4 specular;          //反射(r,g,b)

	scDesc.BufferDesc.Width = rect.Width();

		{

		//User presses a key

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);



	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

	vector<Vertex> vertexlist;

	cbDesc.CPUAccessFlags = 0;



	SAFE_RELEASE(m_pImmediateContext);

	WORD* pIList = new WORD[icount];

	SDL_Texture* tex = SDL_CreateTextureFromSurface(ren, bmp);

	m_pImmediateContext->DrawIndexed(m_IndexCount, 0, 0);

	};

	cbDesc.CPUAccessFlags = 0;

 */

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

		if (!ret)

	{

	hr = m_pDevice->CreateInputLayout(g_VertexDesc, ARRAYSIZE(g_VertexDesc), g_vs_main, sizeof(g_vs_main), &m_pInputLayout);

	//Clean up our objects and quit

	SDL_Surface* bmp = SDL_LoadBMP(imagePath.c_str());

				tinyobj::real_t tx = attrib.texcoords[2 * size_t(idx.texcoord_index) + 0];

 * Lesson 1: Hello World!

		&materials,

				break;

	gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_DEFAULT];

	XMStoreFloat4x4(&cmb.projection, XMMatrixTranspose(projMatrix));

	m_pImmediateContext->VSSetConstantBuffers(0, 1, &m_pMatrixBuffer);

{

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	}



	if (FAILED(hr))

	scDesc.Windowed = TRUE;

	SAFE_RELEASE(m_pVertexShader);

	m_pVertexShader = NULL;

				tinyobj::real_t tx =





	SDL_DestroyRenderer(ren);



	float    aspect = m_Viewport.Width / m_Viewport.Height;

struct ConstantLightBuffer {





	SAFE_RELEASE(m_pSampler);

				float ny = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 1] : 0;

			case SDLK_RIGHT:

	if (!reader.ParseFromFile(inputfile, reader_config))

				break;



void  CD3DTest::LoadObj(vector<Vertex>& vertex, vector <WORD>& indexlist)

	{

		&shapes,

		delete[] pIList;

	m_Viewport.TopLeftX = 0;

				vertex.push_back(vertex_tmp);

	D3D_FEATURE_LEVEL pLevels[] = { D3D_FEATURE_LEVEL_11_0 };

	irData.SysMemSlicePitch = 0;

	hr = m_pDevice->CreateSamplerState(&smpDesc, &m_pSampler);

	m_pImmediateContext->IASetInputLayout(m_pInputLayout);

	SAFE_RELEASE(m_pSampler);

		&error,



	m_pVertexShader = NULL;

	return;

	irData.SysMemSlicePitch = 0;

	cbDesc.Usage = D3D11_USAGE_DEFAULT;

	}

	D3D11_SUBRESOURCE_DATA vrData;

	m_pDepthStencilTexture = NULL;

		flags,

	SAFE_RELEASE(m_pImmediateContext);

	vrData.pSysMem = &pVList[0];

	txDesc.SampleDesc.Quality = 0;





	SAFE_RELEASE(m_pTextureView);

		else if (e.type == SDL_KEYDOWN)

	Release();

	{



	dsDesc.ViewDimension = D3D11_DSV_DIMENSION_TEXTURE2D;

				float nz = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 2] : 0;

	}

		}

	cbDesc.ByteWidth = sizeof(ConstantMatrixBuffer);



	hr = m_pDevice->CreatePixelShader(&g_ps_main, sizeof(g_ps_main), NULL, &m_pPixelShader);

		size_t index_offset = 0;

	XMVECTOR focus = XMVectorSet(0.0f, 0.0f, 0.0f, 0.0f);

	vector<Vertex> vertexlist;

	XMFLOAT4X4 projection;

	XMStoreFloat4x4(&cmb.world, XMMatrixTranspose(worldMatrix));



				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];

				break;

	UINT flags = 0;

	ZeroMemory(&dsDesc, sizeof(dsDesc));

			}

		}

};

}



	scDesc.BufferCount = 1;

	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	::GetClientRect(hwnd, &rect);

	vrData.SysMemSlicePitch = 0;



	m_Angle += XMConvertToRadians(1.0f);

				break;

	hr = CreateWICTextureFromFile(m_pDevice, _T("rust.jpg"), &m_pTexture, &m_pTextureView);

				gCurrentSurface = gKeyPressSurfaces[KEY_PRESS_SURFACE_UP];

	SAFE_RELEASE(m_pInputLayout);

		KEY_PRESS_SURFACE_UP,

	hr = m_pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);

	}

	//頂点レイアウト作成

	m_VertexCount = vcount;



	hr = m_pDevice->CreateBuffer(&cbDesc, NULL, &m_pMatrixBuffer);

	smpDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;



	m_pImmediateContext->UpdateSubresource(m_pLightBuffer, 0, NULL, &clb, 0, 0);

	ConstantLightBuffer clb;

{

	UINT flags = 0;

		pVList[i] = vertexlist[i];

	{

	m_Viewport.MinDepth = 0.0f;



	D3D11_BUFFER_DESC cbDesc;

		&m_pDevice,

				float vy = idx.normal_index > 0 ? attrib.vertices[3 * idx.vertex_index + 1] : 0;

	SAFE_RELEASE(m_pSwapChain);

		KEY_PRESS_SURFACE_LEFT,

}
	SAFE_RELEASE(m_pImmediateContext);

		return hr;

	m_pDevice = NULL;

		return hr;

	XMStoreFloat4x4(&cmb.view, XMMatrixTranspose(viewMatrix));

				vertex.push_back(vertex_tmp);





	ibDesc.CPUAccessFlags = 0;



	XMVECTOR materialDiffuse = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		return hr;



		SDL_RenderClear(ren);

	}*/

	}

	ibDesc.CPUAccessFlags = 0;

	XMFLOAT4X4 view;

	XMVECTOR lightAmbient = XMVectorSet(0.6f, 0.6f, 0.6f, 0.0f);

	if (FAILED(hr))

		&attrib,



	ConstantLightBuffer clb;

struct ConstantLightBuffer {

	ConstantLight    pntLight; //点光源

	return;

				float nx = idx.normal_index > 0 ? attrib.normals[3 * idx.normal_index + 0] : 0;





		&attrib,

		KEY_PRESS_SURFACE_DEFAULT,



	DXGI_SWAP_CHAIN_DESC scDesc;

{

	vbDesc.BindFlags = D3D11_BIND_VERTEX_BUFFER;

				Vertex vertex_tmp{ {vx, vy, vz }, { nx, ny, nz },{tx,ty} };

	if (!error.empty())

	}

	cbDesc.MiscFlags = 0;

	if (FAILED(hr))

	m_pImmediateContext->PSSetConstantBuffers(0, 1, &m_pLightBuffer);

		&attrib,

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

	{

}

	m_VertexCount = 0;

		&materials,

	auto& shapes = reader.GetShapes();

}

	D3D11_TEXTURE2D_DESC txDesc;



#ifdef _DEBUG

	if (m_pImmediateContext)







	SDL_Quit();

	if (FAILED(hr))

	XMVECTOR materialAmbient = XMVectorSet(1.0f, 1.0f, 1.0f, 0.0f);

		std::cout << "SDL_Init Error: " << SDL_GetError() << std::endl;

	HRESULT              hr;

	m_Viewport.TopLeftX = 0;

				tinyobj::real_t vy = attrib.vertices[3 * size_t(idx.vertex_index) + 1];

	//vector<Vertex> vertex_t;







		&scDesc,

	auto& shapes = reader.GetShapes();

	if (!reader.Warning().empty())



	cbDesc.CPUAccessFlags = 0;

	SAFE_RELEASE(m_pImmediateContext);

	m_VertexCount = 0;

		{

	cbDesc.Usage = D3D11_USAGE_DEFAULT;



	}

				tinyobj::real_t vz = attrib.vertices[3 * size_t(idx.vertex_index) + 2];



	if (FAILED(hr))

	HRESULT              hr;

	//頂点レイアウト作成

	SAFE_RELEASE(m_pVertexShader);

		SDL_RenderCopy(ren, tex, NULL, NULL);

	{

	for (int j = 0; j < icount; j++)

			int num_vertices = shape.mesh.num_face_vertices[f];

	if (!reader.ParseFromFile(inputfile, reader_config))

	}

	m_pImmediateContext->PSSetShader(m_pPixelShader, NULL, 0);

	m_pImmediateContext->RSSetViewports(1, &m_Viewport);

	txDesc.Height = rect.Height();

	m_pMatrixBuffer = NULL;





	{ "TEXCOORD", 0, DXGI_FORMAT_R32G32_FLOAT,    0, D3D11_APPEND_ALIGNED_ELEMENT, D3D11_INPUT_PER_VERTEX_DATA, 0 },

	D3D11_SUBRESOURCE_DATA irData;

	}

	m_IndexCount = 0;

};

using std::cout; using std::endl;


