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
extern int fn_828114A8();
extern int fn_82811500();


void fn_82850FA8(int param_1,int param_2,int param_3,int param_4,longlong param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = (int)((param_5 + 0x10U & 0xffffffff) << 2);
  iVar5 = *(int *)(param_1 + 0x17c) + param_3 * 0x14;
  uVar4 = *(uint *)(*(int *)(iVar7 + param_2) + param_3 * 4);
  if (uVar4 < *(uint *)(*(int *)(param_1 + 0x17c) + param_3 * 0x14)) {
    uVar3 = 0;
    iVar2 = uVar4 * 0x10 + *(int *)(iVar5 + 4);
    if (*(int *)(iVar2 + 8) != 0) {
      iVar6 = 0;
      do {
        iVar1 = *(int *)(*(int *)(*(int *)(iVar2 + 0xc) + iVar6) + 8);
        fn_82811500(*(undefined4 *)((int)((param_5 + 2U & 0xffffffff) << 2) + param_2),iVar1);
        uVar3 = uVar3 + 1;
        iVar6 = iVar6 + 4;
        *(undefined1 *)(*(int *)((int)((param_5 + 4U & 0xffffffff) << 2) + param_2) + iVar1) = 0;
      } while (uVar3 < *(uint *)(iVar2 + 8));
    }
  }
  uVar4 = 0;
  *(int *)(*(int *)(iVar7 + param_2) + param_3 * 4) = param_4;
  iVar7 = *(int *)(iVar5 + 4) + param_4 * 0x10;
  if (*(int *)(iVar7 + 8) != 0) {
    iVar5 = 0;
    do {
      fn_828114A8(*(undefined4 *)((int)((param_5 + 2U & 0xffffffff) << 2) + param_2),
                   *(undefined4 *)(*(int *)(iVar5 + *(int *)(iVar7 + 0xc)) + 8));
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(uint *)(iVar7 + 8));
  }
  return;
}

