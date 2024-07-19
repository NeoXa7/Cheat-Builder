#include "../src/Memory/hMemory.h"
#include "../src/Memory/hProcess.h"

GetProcessInfo gpi;

// getting process ID;
Process processName = L"cs2.exe";
DWORD GetProcessInfo::procID = gpi.GetProcessID(processName);

// getting process baseAddress;
Module moduleName = L"client.dll";
uintptr_t GetProcessInfo::clientAddress = gpi.GetModuleBaseAddress(gpi.procID, moduleName);

//getting handle;
HANDLE Memory::processHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, gpi.procID);

void _cheat_InitProgram()
{
    if (Memory::processHandle == 0) {
        cerr << "processHandle not found Error: " << GetLastError() << endl;
    }

    // your Cheat logic here;

}

int main()
{
    gpi.CheckProcess(gpi.procID, processName);
    gpi.CheckBaseAddress(gpi.clientAddress);
    _cheat_InitProgram();
}
