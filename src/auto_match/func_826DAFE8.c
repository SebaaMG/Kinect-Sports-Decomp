typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_8267C4C8();
extern int fn_826DAE80();


void fn_826DAFE8(int param_1,int *param_2,int param_3,ulonglong param_4)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  ulonglong uVar4;
  int *piVar5;
  
  bVar2 = false;
  RtlEnterCriticalSection(param_1 + 0x14);
  if ((param_4 & 0xffffffff) != 0) {
    uVar4 = param_4;
    piVar5 = param_2;
    do {
      if (*piVar5 == 0) {
        piVar3 = (int *)fn_826DAE80(param_1 + 0x10,(param_3 - (int)param_2) + (int)piVar5);
        if (piVar3 == (int *)0x0) {
          bVar2 = true;
        }
        else {
          fn_8267C4C8(*piVar3);
          *piVar5 = *piVar3;
        }
      }
      uVar4 = uVar4 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 != 0);
  }
  RtlLeaveCriticalSection(param_1 + 0x14);
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 8) + 0x10))(iVar1 + 8,param_2,param_3,param_4);
    }
  }
  return;
}

