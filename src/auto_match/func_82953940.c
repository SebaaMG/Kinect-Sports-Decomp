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
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_829644B8();
extern int fn_82BA02A8();


longlong fn_82953940(int param_1,int param_2,uint param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  iVar1 = fn_82963998(0x74);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_829632A0();
  }
  if (iVar1 == 0) {
    lVar8 = -0x7ff8fff2;
  }
  else {
    uVar7 = 0;
    if ((param_4 & 0xffffffff) != 0) {
      iVar6 = 0;
      uVar9 = param_4;
      do {
        if (*(int *)(*(int *)(*(int *)(*(int *)(iVar6 + *(int *)(*(int *)(param_1 + 0x104) + 0x10))
                                       * 4 + *(int *)(param_1 + 0x14)) + 0x10) * 4 + param_2) != -1)
        {
          uVar7 = uVar7 + 1;
        }
        iVar6 = iVar6 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    lVar8 = fn_82963A30(iVar1,(ulonglong)**(uint **)(param_1 + 0x104) & 0xfff00000 | uVar7,
                              (longlong)(int)uVar7 * (longlong)(int)param_3,uVar7,0);
    if (-1 < lVar8) {
      lVar8 = fn_829632F0(iVar1,*(undefined4 *)(param_1 + 0x104));
      if (-1 < lVar8) {
        uVar5 = 0;
        if (param_3 != 0) {
          do {
            iVar6 = 0;
            iVar3 = 0;
            if ((param_4 & 0xffffffff) != 0) {
              iVar2 = 0;
              iVar4 = 0;
              uVar9 = param_4;
              do {
                if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) +
                                                       iVar4) * 4 + *(int *)(param_1 + 0x14)) + 0x10
                                     ) * 4 + param_2) != -1) {
                  *(undefined4 *)((uVar5 * (int)uVar7 + iVar6) * 4 + *(int *)(iVar1 + 8)) =
                       *(undefined4 *)
                        ((uVar5 * (int)param_4 + iVar3) * 4 +
                        *(int *)(*(int *)(param_1 + 0x104) + 8));
                  if (uVar5 == 0) {
                    *(undefined4 *)(*(int *)(iVar1 + 0x10) + iVar2) =
                         *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar4);
                  }
                  iVar6 = iVar6 + 1;
                  iVar2 = iVar2 + 4;
                }
                iVar3 = iVar3 + 1;
                iVar4 = iVar4 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < param_3);
        }
        lVar8 = fn_829644B8(param_1,iVar1);
        if (-1 < lVar8) {
          iVar1 = 0;
          lVar8 = 0;
        }
      }
    }
    if (iVar1 != 0) {
      fn_82BA02A8(iVar1);
      fn_829639F0(iVar1);
    }
  }
  return lVar8;
}

