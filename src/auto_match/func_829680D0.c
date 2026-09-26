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


undefined8 fn_829680D0(int param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar5 = 0;
  uVar4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar8 = 0;
    do {
      iVar6 = *(int *)(iVar8 + *(int *)(param_1 + 0x10));
      uVar7 = *(uint *)(iVar6 + 4);
      if (((uVar7 & param_3) == param_3) && ((uVar7 & param_4) == 0)) {
        *(undefined4 *)(iVar6 + 8) = 0;
      }
      uVar4 = uVar4 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar4 < *(uint *)(param_1 + 4));
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar8 = 0;
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 0x14) + iVar8);
      iVar2 = *(int *)(*(int *)(iVar6 + 4) * 4 + *(int *)(param_1 + 0x10));
      if ((((*(uint *)(iVar2 + 4) & param_3) == param_3) && ((*(uint *)(iVar2 + 4) & param_4) == 0))
         && (uVar7 = *(int *)(iVar6 + 0xc) + 1, *(uint *)(iVar2 + 8) <= uVar7)) {
        *(uint *)(iVar2 + 8) = uVar7;
      }
      uVar4 = uVar4 + 1;
      iVar8 = iVar8 + 4;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  iVar8 = 0;
  bVar3 = false;
  uVar4 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar6 = 0;
    bVar3 = false;
    do {
      iVar2 = *(int *)(iVar6 + *(int *)(param_1 + 0x10));
      uVar7 = *(uint *)(iVar2 + 4);
      if ((uVar7 & param_3) == param_3) {
        if ((uVar7 & param_4) == 0) {
          *(int *)(iVar2 + 0x10) = iVar8;
          *(int *)(iVar2 + 0x18) = param_2;
          if ((uVar7 & 0x400) != 0) {
            bVar3 = true;
          }
          iVar1 = *(int *)(iVar2 + 8);
          *(undefined4 *)(iVar2 + 8) = 0;
          iVar8 = iVar1 + iVar8;
        }
      }
      uVar4 = uVar4 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar4 < *(uint *)(param_1 + 4));
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 0x14) + iVar5);
      iVar2 = *(int *)(*(int *)(iVar6 + 4) * 4 + *(int *)(param_1 + 0x10));
      if (((*(uint *)(iVar2 + 4) & param_3) == param_3) && ((*(uint *)(iVar2 + 4) & param_4) == 0))
      {
        *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(iVar2 + 0x18);
        *(int *)(iVar6 + 0xc) = *(int *)(iVar2 + 0x10) + *(int *)(iVar6 + 0xc);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  *(int *)(*(int *)(param_2 * 4 + *(int *)(param_1 + 0x10)) + 8) = iVar8;
  if (bVar3) {
    iVar5 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x10));
    *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | 0x400;
  }
  return 0;
}

