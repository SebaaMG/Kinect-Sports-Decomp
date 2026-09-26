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


void fn_82ACBFC0(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = 0;
  iVar3 = *(int *)(param_2 + 0x14) + *(int *)(param_2 + 0xc);
  for (uVar7 = *(uint *)(*(int *)(param_2 + 4) + 4); ((uVar7 & 1) == 0 && (uVar7 != 0));
      uVar7 = *(uint *)((uVar7 & 0xfffffffe) + 4)) {
    uVar4 = *(int *)(uVar7 + 8) + uVar4;
  }
  uVar7 = 0;
  if (uVar4 != 0) {
    uVar1 = *(uint *)(*(int *)(param_2 + 4) + 4);
    do {
      uVar6 = -(uint)((uVar1 & 1) == 0) & uVar1;
      uVar2 = *(uint *)(uVar6 + 8);
      uVar5 = uVar7;
      if (uVar2 <= uVar7) {
        do {
          uVar5 = uVar5 - uVar2;
          uVar6 = *(uint *)((uVar6 & 0xfffffffe) + 4);
          uVar6 = -(uint)((uVar6 & 1) == 0) & uVar6;
          uVar2 = *(uint *)(uVar6 + 8);
        } while (uVar2 <= uVar5);
      }
      uVar7 = uVar7 + 1;
      iVar3 = *(int *)((uVar5 + 4) * 4 + uVar6) + iVar3;
    } while (uVar7 < uVar4);
  }
  *(int *)(param_2 + 0x18) = iVar3;
  return;
}

