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
extern int fn_827C7150();
extern int fn_827C72A8();
extern int fn_827C7348();
extern int fn_827C73F8();
extern unsigned int lbl_82017AE8;


undefined8 fn_827C7680(int *param_1,int *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  
  iVar2 = param_1[0x57];
  uVar10 = param_1[0x4c];
  uVar3 = param_1[0x4e];
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)param_1[6];
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(param_1[6] + 4);
  if ((param_1[0x2f] != 0) && (*(int *)(iVar2 + 0x44) == 0)) {
    fn_827C73F8(iVar2,*(undefined4 *)(iVar2 + 0x48));
  }
  uVar8 = param_1[0x4b];
  uVar9 = 0;
  iVar5 = *param_2;
  if ((int)uVar8 <= (int)uVar10) {
    piVar7 = (int *)(&lbl_82017AE8 + uVar8 * 4);
    lVar6 = ((ulonglong)uVar10 - (ulonglong)uVar8) + 1;
    do {
      sVar1 = *(short *)(*piVar7 * 2 + iVar5);
      if (sVar1 == 0) {
LAB_827c771c:
        uVar9 = uVar9 + 1;
      }
      else {
        if (sVar1 < 0) {
          uVar10 = -(int)sVar1 >> (uVar3 & 0x3f);
          uVar8 = ~uVar10;
        }
        else {
          uVar10 = (int)sVar1 >> (uVar3 & 0x3f);
          uVar8 = uVar10;
        }
        if (uVar10 == 0) goto LAB_827c771c;
        if (*(int *)(iVar2 + 0x38) != 0) {
          fn_827C7348(iVar2);
        }
        if (0xf < (int)uVar9) {
          lVar11 = ((uVar9 - 0x10 & 0xffffffff) >> 4) + 1;
          uVar9 = uVar9 - (lVar11 * 0x10 & 0xfffffff0U);
          do {
            fn_827C72A8(iVar2,*(undefined4 *)(iVar2 + 0x34),0xf0);
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        iVar4 = (int)uVar10 >> 1;
        lVar11 = 1;
        if (iVar4 != 0) {
          do {
            iVar4 = iVar4 >> 1;
            lVar11 = lVar11 + 1;
          } while (iVar4 != 0);
          if (10 < (int)lVar11) {
            *(undefined4 *)(*param_1 + 0x14) = 6;
            (**(code **)*param_1)(param_1);
          }
        }
        fn_827C72A8(iVar2,*(undefined4 *)(iVar2 + 0x34),(uVar9 & 0xfffffff) * 0x10 + lVar11);
        fn_827C7150(iVar2,uVar8,lVar11);
        uVar9 = 0;
      }
      lVar6 = lVar6 + -1;
      piVar7 = piVar7 + 1;
    } while (lVar6 != 0);
    if ((0 < (int)uVar9) &&
       (iVar5 = *(int *)(iVar2 + 0x38) + 1, *(int *)(iVar2 + 0x38) = iVar5, iVar5 == 0x7fff)) {
      fn_827C7348(iVar2);
    }
  }
  *(undefined4 *)param_1[6] = *(undefined4 *)(iVar2 + 0x10);
  *(undefined4 *)(param_1[6] + 4) = *(undefined4 *)(iVar2 + 0x14);
  if (param_1[0x2f] != 0) {
    if (*(int *)(iVar2 + 0x44) == 0) {
      *(int *)(iVar2 + 0x44) = param_1[0x2f];
      *(uint *)(iVar2 + 0x48) = *(int *)(iVar2 + 0x48) + 1U & 7;
    }
    *(int *)(iVar2 + 0x44) = *(int *)(iVar2 + 0x44) + -1;
  }
  return 1;
}

