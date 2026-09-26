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
extern unsigned int *auStack_60;
extern int fn_82951148();
extern int fn_829536C8();
extern unsigned int iStack_58;


undefined8 fn_82957790(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar6;
  undefined8 uVar5;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_60 [8];
  int iStack_58;
  
  uVar1 = **(uint **)(param_1 + 0x104);
  if ((uVar1 & 0xfff00000) == 0x70300000) {
    iVar2 = *(int *)(param_1 + 0x104);
    uVar3 = *(undefined4 *)(param_1 + 0x100);
    fn_829536C8(param_1,uVar1 & 0xfffff | 0x20500000,iVar2,auStack_60,2);
    if (iStack_58 != 0) {
      uVar7 = 0;
      if ((uVar1 & 0xfffff) != 0) {
        iVar8 = 0;
        do {
          if (*(int *)(((uVar1 & 0xfffff) * 2 + uVar7) * 4 + *(int *)(iVar2 + 8)) !=
              *(int *)(iVar8 + *(int *)(iStack_58 + 0x10))) {
            return 1;
          }
          uVar7 = uVar7 + 1;
          iVar8 = iVar8 + 4;
        } while (uVar7 < (uVar1 & 0xfffff));
      }
      iVar9 = (uVar1 & 0xfffff) * 4;
      iVar8 = *(int *)(iVar2 + 8);
      iVar4 = *(int *)(iStack_58 + 8);
      iVar10 = iVar9 + iVar8;
      iVar9 = iVar4 + iVar9;
      iVar6 = fn_82951148(param_1,iVar8,iVar10,iVar4,iVar9,iStack_58,iVar2,uVar3);
      if ((((iVar6 != 0) &&
           (iVar6 = fn_82951148(param_1,iVar10,iVar8,iVar4,iVar9,iStack_58,iVar2,uVar3),
           iVar6 != 0)) &&
          (iVar6 = fn_82951148(param_1,iVar8,iVar10,iVar9,iVar4,iStack_58,iVar2,uVar3), iVar6 != 0
          )) && (((iVar6 = fn_82951148(param_1,iVar10,iVar8,iVar9,iVar4,iStack_58,iVar2,uVar3),
                  iVar6 != 0 &&
                  (iVar6 = fn_82951148(param_1,iVar4,iVar9,iVar8,iVar10,iStack_58,iVar2,uVar3),
                  iVar6 != 0)) &&
                 ((iVar6 = fn_82951148(param_1,iVar9,iVar4,iVar8,iVar10,iStack_58,iVar2,uVar3),
                  iVar6 != 0 &&
                  (iVar6 = fn_82951148(param_1,iVar4,iVar9,iVar10,iVar8,iStack_58,iVar2,uVar3),
                  iVar6 != 0)))))) {
        uVar5 = fn_82951148(param_1,iVar9,iVar4,iVar10,iVar8,iStack_58,iVar2,uVar3);
        return uVar5;
      }
      return 0;
    }
  }
  return 1;
}

