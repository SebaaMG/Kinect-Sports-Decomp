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
extern int fn_8295F950();
extern int fn_8295FF50();


undefined8 fn_82940910(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  puVar6 = (uint *)param_1[0x41];
  if (param_1[0x23] == *(int *)(*(int *)(*(int *)puVar6[4] * 4 + param_1[5]) + 4)) {
    uVar3 = (**(code **)(*param_1 + 0x240))();
    if (-1 < (int)uVar3) {
      uVar3 = fn_8295F950(param_1,0x2e,0);
    }
  }
  else {
    if ((param_1[0x1b] & 0x400U) == 0) {
      uVar5 = puVar6[3];
      uVar4 = 0;
      if (uVar5 != 0) {
        iVar7 = 0;
        do {
          iVar1 = *(int *)(*(int *)(*(int *)(param_1[0x41] + 8) + iVar7) * 4 + param_1[5]);
          iVar2 = *(int *)(*(int *)(*(int *)(param_1[0x41] + 0x10) + iVar7) * 4 + param_1[5]);
          if ((((*(int *)(iVar2 + 4) != *(int *)(iVar1 + 4)) ||
               (*(int *)(iVar2 + 8) != *(int *)(iVar1 + 8))) ||
              (*(int *)(iVar2 + 0xc) != *(int *)(iVar1 + 0xc))) ||
             (((*(int *)(iVar2 + 0x10) != *(int *)(iVar1 + 0x10) ||
               (*(int *)(iVar2 + 0x3c) != *(int *)(iVar1 + 0x3c))) ||
              (((param_1[0x33] & 4U) != 0 && (*(int *)(iVar2 + 0x60) != 0)))))) break;
          uVar4 = uVar4 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar4 < uVar5);
      }
      if (uVar4 == uVar5) {
        return 0;
      }
    }
    uVar5 = 0;
    if (puVar6[3] != 0) {
      iVar7 = 0;
      do {
        puVar6 = *(uint **)(*(int *)(*(int *)(param_1[0x41] + 0x10) + iVar7) * 4 + param_1[5]);
        uVar4 = *puVar6;
        if ((uVar4 & 0xe000000) == 0) {
          *puVar6 = **(uint **)(*(int *)(*(int *)(param_1[0x41] + 8) + iVar7) * 4 + param_1[5]) &
                    0xe000000 | uVar4;
        }
        puVar6 = (uint *)param_1[0x41];
        uVar5 = uVar5 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar5 < puVar6[3]);
    }
    uVar3 = (**(code **)(*param_1 + 0x23c))(param_1,0,*puVar6 & 0xfffff,0);
    if (-1 < (int)uVar3) {
      uVar3 = fn_8295FF50(param_1);
    }
  }
  return uVar3;
}

