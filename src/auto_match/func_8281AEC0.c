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


undefined8 fn_8281AEC0(int param_1)

{
  short sVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  
  sVar1 = *(short *)(param_1 + 0x108);
  iVar2 = *(int *)(param_1 + 0x7c);
  sVar5 = sVar1;
  if (sVar1 == -1) {
    sVar5 = *(short *)(param_1 + 0x84);
  }
  if (sVar5 != -1) {
    do {
      iVar4 = (int)sVar5;
      sVar5 = *(short *)(iVar4 * 0x40 + iVar2 + 0x2c);
    } while (sVar5 != -1);
    for (; iVar4 != -1; iVar4 = (int)*(short *)(iVar4 * 0x40 + iVar2 + 0x2e)) {
    }
  }
  for (sVar5 = *(short *)(param_1 + 0x82); sVar3 = sVar1, sVar5 < *(short *)(param_1 + 0x80);
      sVar5 = sVar5 + 1) {
  }
  for (; sVar3 != -1; sVar3 = *(short *)(sVar3 * 0x40 + iVar2 + 0x30)) {
  }
  for (sVar5 = *(short *)(param_1 + 0x84); sVar5 != -1;
      sVar5 = *(short *)(sVar5 * 0x40 + iVar2 + 0x30)) {
  }
  for (; sVar1 != -1; sVar1 = *(short *)(sVar1 * 0x40 + iVar2 + 0x30)) {
  }
  if (((*(uint *)(param_1 + 0xc) & 4) != 0) && ((*(uint *)(param_1 + 0xc) & 0x40) != 0)) {
    (**(code **)(*(int *)(param_1 + 0x10) + 0x2c))(param_1,0xffffffff8281ba78,0);
  }
  return 0;
}

