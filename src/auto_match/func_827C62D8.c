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
extern int fn_827C6168();
extern unsigned int lbl_82017AEC;


undefined8
fn_827C62D8(int param_1,short *param_2,longlong param_3,int param_4,undefined4 *param_5)

{
  short sVar1;
  char cVar3;
  undefined8 uVar2;
  longlong lVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  param_3 = *param_2 - param_3;
  lVar4 = param_3;
  if (param_3 < 0) {
    lVar4 = -param_3;
    param_3 = param_3 + -1;
  }
  iVar7 = 0;
  if ((int)lVar4 != 0) {
    do {
      lVar4 = (longlong)((int)lVar4 >> 1);
      iVar7 = iVar7 + 1;
    } while (lVar4 != 0);
    if (0xb < iVar7) {
      *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x14) = 6;
      (**(code **)**(undefined4 **)(param_1 + 0x20))();
    }
  }
  cVar3 = fn_827C6168(param_1,*(undefined4 *)(iVar7 * 4 + param_4),
                        *(undefined1 *)(iVar7 + param_4 + 0x400));
  if ((cVar3 == '\0') ||
     ((iVar7 != 0 && (cVar3 = fn_827C6168(param_1,param_3,iVar7), cVar3 == '\0')))) {
LAB_827c6374:
    uVar2 = 0;
  }
  else {
    iVar7 = 0;
    piVar6 = (int *)&lbl_82017AEC;
    do {
      sVar1 = param_2[*piVar6];
      lVar4 = (longlong)sVar1;
      if (sVar1 == 0) {
        iVar7 = iVar7 + 1;
      }
      else {
        for (; 0xf < iVar7; iVar7 = iVar7 + -0x10) {
          cVar3 = fn_827C6168(param_1,param_5[0xf0],*(undefined1 *)(param_5 + 0x13c));
          if (cVar3 == '\0') goto LAB_827c6374;
        }
        lVar8 = lVar4;
        if (sVar1 < 0) {
          lVar8 = -lVar4;
          lVar4 = lVar4 + -1;
        }
        iVar5 = (int)lVar8 >> 1;
        iVar9 = 1;
        if (iVar5 != 0) {
          do {
            iVar5 = iVar5 >> 1;
            iVar9 = iVar9 + 1;
          } while (iVar5 != 0);
          if (10 < iVar9) {
            *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x14) = 6;
            (**(code **)**(undefined4 **)(param_1 + 0x20))();
          }
        }
        iVar7 = iVar7 * 0x10 + iVar9;
        cVar3 = fn_827C6168(param_1,param_5[iVar7],*(undefined1 *)((int)param_5 + iVar7 + 0x400));
        if ((cVar3 == '\0') || (cVar3 = fn_827C6168(param_1,lVar4,iVar9), cVar3 == '\0'))
        goto LAB_827c6374;
        iVar7 = 0;
      }
      piVar6 = piVar6 + 1;
    } while ((int)piVar6 < -0x7dfe8418);
    if ((0 < iVar7) &&
       (cVar3 = fn_827C6168(param_1,*param_5,*(undefined1 *)(param_5 + 0x100)), cVar3 == '\0')) {
      return 0;
    }
    uVar2 = 1;
  }
  return uVar2;
}

