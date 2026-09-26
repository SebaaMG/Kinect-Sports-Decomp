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
extern int fn_8225C590();
extern int fn_8225D9B8();
extern int fn_82269338();
extern int fn_82526358();


void fn_8226A360(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = fn_8225C590();
  iVar3 = fn_8225D9B8(uVar2,param_2);
  if (iVar3 != 0) {
    iVar4 = 0;
    piVar5 = (int *)(iVar1 + 0x354);
    do {
      if (*piVar5 == iVar3) {
        return;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < 4);
    if (*(char *)(iVar3 + 0xd8) == '\0') {
      fn_82526358(iVar3,0x8001,3);
    }
    if (*(code **)(iVar1 + 0x374) == (code *)0x0) {
      iVar4 = 1;
    }
    else {
      iVar4 = (**(code **)(iVar1 + 0x374))(iVar3);
    }
    if (iVar4 != 0) {
      fn_82269338(iVar1,iVar3);
    }
  }
  return;
}

