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
extern unsigned int *auStack_5c;
extern int fn_82965280();
extern int fn_82967218();
extern unsigned int uStack_60;


undefined8 fn_829672F8(int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uStack_60;
  uint auStack_5c [23];
  
  iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x18));
  if (*(int *)(iVar2 + 0x24) == 0) {
    uVar12 = 0;
    if (*(int *)(iVar2 + 0x14) != 0) {
      iVar13 = 0;
      do {
        uStack_60 = 0;
        iVar3 = *(int *)(*(int *)(*(int *)(iVar2 + 0x18) + iVar13) * 4 + *(int *)(param_1 + 0x18));
        auStack_5c[0] = 0;
        fn_82967218(param_1,iVar3,auStack_5c,&uStack_60,
                      *(undefined4 *)(*(int *)(iVar2 + 0x18) + iVar13));
        uVar12 = uVar12 + 1;
        uVar8 = (ulonglong)auStack_5c[0] + 1;
        *(int *)(iVar3 + 0x30) = (int)uStack_60 / (int)uVar8;
        trapWord(6,uVar8,0);
        iVar13 = iVar13 + 4;
        trapWord(5,uVar8 & ~((((ulonglong)uStack_60 & 0x7fffffff) << 1 |
                             (ulonglong)(uStack_60 >> 0x1f)) - 1),0xffff);
      } while (uVar12 < *(uint *)(iVar2 + 0x14));
    }
    fn_82965280(0xffffffff82964e10,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x14),
                  param_1);
    uVar12 = 0;
    if (*(int *)(iVar2 + 0x14) != 0) {
      iVar13 = 0;
      do {
        uVar6 = fn_829672F8(param_1,*(undefined4 *)(*(int *)(iVar2 + 0x18) + iVar13),param_3,
                              param_4);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        uVar12 = uVar12 + 1;
        iVar13 = iVar13 + 4;
      } while (uVar12 < *(uint *)(iVar2 + 0x14));
    }
    if (*(int *)(iVar2 + 0x24) == 0) {
      uVar12 = 0;
      *(undefined4 *)(iVar2 + 0x24) = 1;
      *(int *)(*param_4 * 4 + param_3) = param_2;
      *param_4 = *param_4 + 1;
      if (*(int *)(iVar2 + 0x14) != 0) {
        iVar13 = 0;
        do {
          uVar7 = 0xffffffff;
          iVar3 = *(int *)(param_1 + 0x18);
          uVar9 = 0;
          iVar4 = *(int *)(*(int *)(*(int *)(iVar2 + 0x18) + iVar13) * 4 + iVar3);
          uVar1 = *(uint *)(iVar4 + 0x1c);
          if (uVar1 != 0) {
            iVar4 = *(int *)(iVar4 + 0x20);
            iVar10 = 0;
            do {
              uVar5 = uVar7;
              if ((*(int *)(*(int *)(*(int *)(iVar10 + iVar4) * 4 + iVar3) + 0x24) == 0) &&
                 (uVar5 = uVar9, uVar7 != 0xffffffff)) goto LAB_829674c0;
              uVar7 = uVar5;
              uVar9 = uVar9 + 1;
              iVar10 = iVar10 + 4;
            } while (uVar9 < uVar1);
            if (uVar7 != 0xffffffff) {
LAB_829674c0:
              if (uVar9 == uVar1) {
                uVar9 = 0;
                iVar4 = *(int *)(uVar7 * 4 + iVar4);
                iVar10 = *(int *)(iVar4 * 4 + iVar3);
                uVar1 = *(uint *)(iVar10 + 0x14);
                if (uVar1 != 0) {
                  iVar11 = 0;
                  do {
                    if (*(int *)(*(int *)(*(int *)(iVar11 + *(int *)(iVar10 + 0x18)) * 4 + iVar3) +
                                0x24) == 0) break;
                    uVar9 = uVar9 + 1;
                    iVar11 = iVar11 + 4;
                  } while (uVar9 < uVar1);
                }
                if ((uVar1 <= uVar9) &&
                   (uVar6 = fn_829672F8(param_1,iVar4,param_3,param_4), (int)uVar6 < 0)) {
                  return uVar6;
                }
              }
            }
          }
          uVar12 = uVar12 + 1;
          iVar13 = iVar13 + 4;
        } while (uVar12 < *(uint *)(iVar2 + 0x14));
      }
    }
  }
  return 0;
}

