#include "../Public/menu.h"

bool menu::InitMenu()
{
	ImGuiStyle &style = ImGui::GetStyle();
	ImVec4 *colors = style.Colors;
	ImGuiIO &io = ImGui::GetIO();

	colors[ImGuiCol_Text] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_TextDisabled] = ImVec4(0.40f, 0.40f, 0.40f, 1.00f);
	colors[ImGuiCol_WindowBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_ChildBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_PopupBg] = ImVec4(0.00f, 0.00f, 0.00f, 1.00f);
	colors[ImGuiCol_Border] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_BorderShadow] = ImVec4(0.00f, 0.00f, 0.00f, 0.00f);
	colors[ImGuiCol_FrameBg] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_FrameBgHovered] = ImVec4(0.05f, 0.52f, 0.13f, 1.00f);
	colors[ImGuiCol_FrameBgActive] = ImVec4(0.05f, 0.52f, 0.13f, 1.00f);
	colors[ImGuiCol_TitleBg] = ImVec4(0.54f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_TitleBgActive] = ImVec4(0.54f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_TitleBgCollapsed] = ImVec4(0.00f, 0.00f, 0.00f, 0.51f);
	colors[ImGuiCol_MenuBarBg] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_ScrollbarBg] = ImVec4(0.02f, 0.02f, 0.02f, 0.53f);
	colors[ImGuiCol_ScrollbarGrab] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabHovered] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_ScrollbarGrabActive] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_CheckMark] = ImVec4(0.54f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_SliderGrab] = ImVec4(0.54f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_SliderGrabActive] = ImVec4(0.54f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_Button] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_ButtonHovered] = ImVec4(0.30f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_ButtonActive] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_Header] = ImVec4(0.00f, 1.00f, 0.00f, 1.00f);
	colors[ImGuiCol_HeaderHovered] = ImVec4(0.00f, 1.00f, 0.00f, 1.00f);
	colors[ImGuiCol_HeaderActive] = ImVec4(0.00f, 1.00f, 0.00f, 1.00f);
	colors[ImGuiCol_Separator] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_SeparatorHovered] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_SeparatorActive] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_ResizeGrip] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_ResizeGripHovered] = ImVec4(0.30f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_ResizeGripActive] = ImVec4(0.54f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_Tab] = ImVec4(0.54f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_TabHovered] = ImVec4(0.30f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_TabActive] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_TabUnfocused] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_TabUnfocusedActive] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_PlotLines] = ImVec4(1.00f, 1.00f, 1.00f, 1.00f);
	colors[ImGuiCol_PlotLinesHovered] = ImVec4(0.30f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_PlotHistogram] = ImVec4(0.54f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_PlotHistogramHovered] = ImVec4(0.30f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_TableHeaderBg] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_TableBorderStrong] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_TableBorderLight] = ImVec4(0.20f, 0.20f, 0.20f, 1.00f);
	colors[ImGuiCol_TableRowBg] = ImVec4(0.07f, 0.07f, 0.07f, 1.00f);
	colors[ImGuiCol_TableRowBgAlt] = ImVec4(1.00f, 1.00f, 1.00f, 0.06f);
	colors[ImGuiCol_TextSelectedBg] = ImVec4(0.30f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_DragDropTarget] = ImVec4(0.54f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_NavHighlight] = ImVec4(0.30f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_NavWindowingHighlight] = ImVec4(0.30f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_NavWindowingDimBg] = ImVec4(0.30f, 0.19f, 0.92f, 1.00f);
	colors[ImGuiCol_ModalWindowDimBg] = ImVec4(0.30f, 0.19f, 0.92f, 1.00f);

	style.WindowTitleAlign = {0.5f, 0.5f};
	style.FrameRounding = 3.0f;
	style.WindowBorderSize = 0.f;
	style.FrameBorderSize = 0.f;
	style.GrabRounding = 10.0f;
	style.WindowRounding = 10.0f;
	style.WindowTitleAlign = {0.5f, 0.5f};
	style.ScrollbarRounding = 10.f;
	style.ScrollbarSize = 4.f;
	style.FramePadding = ImVec2(2, 4);

	text_font = io.Fonts->AddFontFromMemoryTTF(FontBytes, 18, 16.0f);
	title_font = io.Fonts->AddFontFromMemoryTTF(FontBytes, 22, 22.0f);

	return false;
}

bool menu::RenderMenu()
{
	ImGui::Begin("FiveM Cheats", nullptr, ImGuiWindowFlags_NoCollapse | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoTitleBar);
	ImGui::SetWindowSize(WindowSize);

	auto windowWidth = ImGui::GetWindowSize().x;
	auto textWidth = ImGui::CalcTextSize("sdddddddddddddddddddddddd").x;

	ImGui::SetCursorPosX((windowWidth - textWidth) * 0.5f);

	ImGui::PushFont(title_font);
	ImGui::Text("FiveM Cheats");
	ImGui::PopFont();

	ImGui::SetNextWindowPos(ImVec2(5, 1040));

	if (ImGui::Begin(("FiveM"), NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoMove))
	{
		ImGui::Text(("FiveM Cheats | Build Date: %s  | %.1f FPS"), __DATE__, ImGui::GetIO().Framerate);
	}
	ImGui::End();

	ImGui::NewLine();
	if (ImGui::BeginTabBar("TabBar", 0))
	{
		if (ImGui::BeginTabItem("Visuals"))
		{
			WindowSize = {600.f, 500.f};

			ImGui::Checkbox("Boxes", &cfg::EspBox);
			ImGui::Checkbox("Show Distance", &cfg::ShowDistance);
			ImGui::Checkbox("Snap Lines", &cfg::Snaplines);
			ImGui::SliderFloat("Crosshair Length", &cfg::CrosshairLength, 5.f, 20.f);

			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Aim Settings"))
		{
			WindowSize = {600.f, 500.f};

			ImGui::Checkbox("AimBot", &cfg::Aimbot);
			ImGui::SliderFloat("AimBot FOV", &cfg::AimBotFOV, 1.f, 200.f);
			ImGui::SliderFloat("AimBot Smoothness", &cfg::AimSmoothness, 0.f, 10.f);

			ImGui::EndTabItem();
		}

		if (ImGui::BeginTabItem("Exploits"))
		{
			WindowSize = {600.f, 500.f};

			ImGui::Checkbox("Rapid Fire", &cfg::RapidFire);
			ImGui::Checkbox("No Recoil", &cfg::NoRecoil);
			ImGui::Checkbox("No Spread", &cfg::NoSpread);
			ImGui::Checkbox("ADS in Air", &cfg::ADSAir);
			ImGui::Checkbox("Fake Lag (Hold Shift)", &cfg::fakelag);
			ImGui::Spacing();
			ImGui::Separator();
			ImGui::Spacing();
			ImGui::Checkbox("Change Weapon Mesh", &cfg::ChangeWeaponMesh);
			ImGui::SliderFloat("Weapon Mesh Scale", &cfg::WeaponMeshScale, 0.1f, 10.f);

			ImGui::Checkbox("Change Player Mesh", &cfg::ChangePlayerMesh);
			ImGui::SliderFloat("Player Mesh Scale", &cfg::PlayerMeshScale, 0.1f, 10.f);

			ImGui::EndTabItem();
		}
		ImGui::EndTabBar();
	}

	ImGui::End();

	return true;
}
