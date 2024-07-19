#pragma once
#include "../Memory/hMemory.h"
#include "../Memory/hProcess.h"
#include "hIncludes.h"

class MEMORY_SEARCH
{
public:
    // client.dll.cs || put it down here;
    uintptr_t startAddress = 0x00000000; // Starting address for the scan
    uintptr_t endAddress = 0x7FFFFFFF; // Ending address for the scan

}; extern MEMORY_SEARCH MS;

class CS2_Offsets
{
public:
    // offsets.cs (last updated 12 July 2024);

    int dwCSGOInput = 0x1A27E10;
    int dwEntityList = 0x19BDD58;
    int dwGameEntitySystem = 0x1ADCB98;
    int dwGameEntitySystem_highestEntityIndex = 0x1510;
    int dwGameRules = 0x1A1B648;
    int dwGlobalVars = 0x1817638;
    int dwGlowManager = 0x1A1AD30;
    int dwLocalPlayerController = 0x1A0D988;
    int dwLocalPlayerPawn = 0x1823A08;
    int dwPlantedC4 = 0x1A25188;
    int dwPrediction = 0x18238C0;
    int dwSensitivity = 0x1A1C318;
    int dwSensitivity_sensitivity = 0x40;
    int dwViewAngles = 0x1A2D228;
    int dwViewMatrix = 0x1A1FCB0;
    int dwViewRender = 0x1A20448;
    int dwWeaponC4 = 0x19C1920;

}; extern CS2_Offsets ofs;
