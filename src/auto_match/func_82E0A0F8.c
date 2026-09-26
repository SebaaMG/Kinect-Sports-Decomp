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


void fn_82E0A0F8(int *param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  
  uVar1 = *(uint *)(param_1[7] + 0x18);
  uVar2 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1[7] + 0x1c);
  if (((int)uVar1 < 0) || (iVar3 < 0)) {
    iVar3 = *param_1;
    uVar2 = (**(code **)(iVar3 + 0x38))(param_1,0xffffffff8214a6f0);
    pcVar4 = *(code **)(iVar3 + 0x3c);
    iVar3 = 0;
  }
  else {
    pcVar4 = *(code **)(*param_1 + 0x3c);
  }
  (*pcVar4)(param_1,uVar2,iVar3);
  return;
}

