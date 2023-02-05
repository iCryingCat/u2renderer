#pragma once

#include<iostream>
#include<memory>

#include "application.h"
#include "application.cpp"
#include "util/debug.h"
#include "util/debug.cpp"

int main() {
	std::shared_ptr<u2::Application> app = std::make_shared<u2::Application>();
	u2::Debug::Log("U2 Renderer Start.");
	app->OnStart();
	while (app->IsPlaying()) {
		app->OnUpdate();
	}
	app->OnDestroy();
	u2::Debug::Log("U2 Renderer Exit.");
}