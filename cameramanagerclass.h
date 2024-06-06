#pragma once
#include <vector>
#include <dinput.h>
#include "cameraclass.h"
#include "modelclass.h"
#include "announceclass.h"
<<<<<<< Updated upstream
=======
#include "inputmanagerclass.h"
>>>>>>> Stashed changes

using namespace std;

class CameraManagerClass : public AnnouncerClass
{
public:
    enum CameraMode
    {
        ThirdPerspectMode = 0,
        AimingMode,
        Size
    };

public:
    CameraManagerClass();
    ~CameraManagerClass();

    bool Initialize(ModelClass*, XMFLOAT3);
    CameraClass* GetCameraInstance();
    CameraMode GetMode();
    void ChangeMode(CameraMode);
<<<<<<< Updated upstream
    void Frame(const DIMOUSESTATE&, const BYTE*);
=======
    void Frame(const DIMOUSESTATE&);
    void HandleInput(InputManagerClass::Behavior);
>>>>>>> Stashed changes

private:
    CameraManagerClass::CameraMode m_Mode;
    vector<CameraClass*> m_CameraList;

    ModelClass* m_Player;
};
