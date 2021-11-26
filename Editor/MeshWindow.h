#pragma once
#include "WickedEngine.h"

class EditorComponent;

class MeshWindow : public wiWindow
{
public:
	void Create(EditorComponent* editor);

	wiECS::Entity entity;
	int subset = -1;
	void SetEntity(wiECS::Entity entity, int subset);

	wiLabel meshInfoLabel;
	wiComboBox subsetComboBox;
	wiComboBox subsetMaterialComboBox;
	wiCheckBox doubleSidedCheckBox;
	wiCheckBox softbodyCheckBox;
	wiSlider massSlider;
	wiSlider frictionSlider;
	wiSlider restitutionSlider;
	wiButton impostorCreateButton;
	wiSlider impostorDistanceSlider;
	wiSlider tessellationFactorSlider;
	wiButton flipCullingButton;
	wiButton flipNormalsButton;
	wiButton computeNormalsSmoothButton;
	wiButton computeNormalsHardButton;
	wiButton recenterButton;
	wiButton recenterToBottomButton;
	wiButton optimizeButton;

	wiCheckBox terrainCheckBox;
	wiComboBox terrainMat1Combo;
	wiComboBox terrainMat2Combo;
	wiComboBox terrainMat3Combo;
	wiButton terrainGenButton;

	wiComboBox morphTargetCombo;
	wiSlider morphTargetSlider;
};

