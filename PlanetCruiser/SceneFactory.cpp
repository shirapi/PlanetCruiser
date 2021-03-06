#include"SceneFactory.h"
#include"SceneBase.h"
#include"MainScene.h"
#include"ResultScene.h"
#include"TitleScene.h"

SceneFactory* SceneFactory::m_pInstance = nullptr;

SceneFactory::SceneFactory() {

}

SceneFactory::~SceneFactory(){
	delete m_pInstance;
}

SceneBase* SceneFactory::Create(SceneManager::SCENE_ID scene_id) {
	SceneBase* pScene = nullptr;

	switch (scene_id) {
	case SceneManager::SCENE_ID::MAIN:
		pScene = new MainScene();
		break;

	case SceneManager::SCENE_ID::RESULT:
		pScene = new ResultScene();
		break;

	case SceneManager::SCENE_ID::TITLE:
		pScene = new TitleScene();
		break;
	}

	return pScene;
}