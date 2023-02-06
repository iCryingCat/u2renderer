#include <memory>

#include "engine/application.h"
#include "engine/util/debug.h"

int main() {
	u2::Debug::Log("U2 Renderer Start.");
	std::shared_ptr<u2::Application> app = std::make_shared<u2::Application>();
	app->OnStart();
	while (app->IsRunning()) {
		app->OnTick();
	}
	app->OnDestroy();
	u2::Debug::Log("U2 Renderer Exit.");
}