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
extern int fn_82549808();


void fn_82555328(int param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 8) * 0x40;
  iVar5 = 0;
  iVar2 = (*(int *)(param_2 + 0x20) - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  *(int *)(param_2 + 0x20) = iVar2;
  iVar4 = *(int *)(param_1 + 8) * 0x40;
  iVar2 = (iVar2 - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  *(int *)(param_2 + 0x20) = iVar2;
  iVar4 = *(int *)(param_1 + 0xc) * 0x10;
  iVar2 = (iVar2 - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  *(int *)(param_2 + 0x20) = iVar2;
  iVar4 = *(int *)(param_1 + 4) * 0x1a0;
  iVar2 = (iVar2 - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  *(int *)(param_2 + 0x20) = iVar2;
  iVar4 = *(int *)(param_1 + 0x14) * 4;
  iVar2 = (iVar2 - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  *(int *)(param_2 + 0x20) = iVar2;
  iVar4 = *(int *)(param_1 + 0x10) * 4;
  *(uint *)(param_2 + 0x20) = (iVar2 - (iVar4 - 1U & 0xf)) + iVar4 + 0xf;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4) * 4;
      uVar1 = *(uint *)(iVar2 + *(int *)(param_1 + 0x18));
      uVar3 = uVar1 >> 0x18;
      if (uVar1 == 0) {
        uVar3 = 0x7a;
      }
      if (uVar3 == 4) {
        fn_82549808(iVar2 + *(int *)(param_1 + 0x18),param_3,param_2);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x144;
    } while (iVar5 < *(int *)(param_1 + 4));
  }
  return;
}

