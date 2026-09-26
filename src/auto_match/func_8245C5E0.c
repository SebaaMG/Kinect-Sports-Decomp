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


void fn_8245C5E0(int param_1)

{
  int *piVar1;
  int iVar3;
  ulonglong uVar2;
  longlong lVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  if (*(int *)(param_1 + 0x57c) == 0) {
    *(undefined4 *)(param_1 + 0x574) = 0;
    if (*(code **)(param_1 + 0x5d4) != (code *)0x0) {
      (**(code **)(param_1 + 0x5d4))
                (*(undefined4 *)(param_1 + 0x5c8),*(undefined4 *)(param_1 + 0x5d8),
                 *(undefined4 *)(param_1 + 0x580));
    }
    RtlEnterCriticalSection(param_1);
    *(undefined4 *)(param_1 + 0x57c) = 1;
    RtlLeaveCriticalSection(param_1);
  }
  RtlEnterCriticalSection(param_1);
  puVar5 = (undefined4 *)(param_1 + 0x568);
  lVar4 = 2;
  do {
    piVar1 = (int *)*puVar5;
    uVar6 = 0;
    iVar3 = (**(code **)(*piVar1 + 0x24))(piVar1);
    if (iVar3 != 0) {
      do {
        iVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1,uVar6);
        if (iVar3 != 0) {
          (**(code **)(*piVar1 + 0x30))(piVar1,uVar6);
          (**(code **)(*piVar1 + 0x10))(piVar1,uVar6);
        }
        uVar6 = uVar6 + 1;
        uVar2 = (**(code **)(*piVar1 + 0x24))(piVar1);
      } while ((uVar6 & 0xffffffff) < (uVar2 & 0xffffffff));
    }
    lVar4 = lVar4 + -1;
    puVar5 = puVar5 + 1;
  } while (lVar4 != 0);
  RtlLeaveCriticalSection(param_1);
  return;
}

