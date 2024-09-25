#include "olcConsoleGameEngine.h";

struct vec3d {
	float x, y, z;
};

struct triangle {
	vec3d p[3];
};

struct mesh {
	std::vector<triangle> tris;
};

class olcEngine3D : public olcConsoleGameEngine {
public:
	olcEngine3D() {
		m_sAppName = L"3DDemo";
	}

private:
	mesh meshCube;

public:
	bool OnUserCreate() override {
		meshCube.tris = {

		};

		return true;
	}

	bool OnUserUpdate(float fElapsedTime) override {
		return true;
	}
};

int main() {
	olcEngine3D demo;
	if (demo.ConstructConsole(256, 240, 4, 4))
		demo.Start();

	return 0;
}