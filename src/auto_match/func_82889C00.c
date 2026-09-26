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
extern int fn_825089A0();
extern int fn_82889AB8();
extern int fn_82F622A8();


void fn_82889C00(uint *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar9 = param_4 - param_3;
  if ((uVar9 & 0xffffffff) != 0) {
    uVar8 = (ulonglong)*param_1;
    uVar7 = (ulonglong)param_1[1];
    if (((uVar8 - uVar7) - 1 & 0xffffffff) < (uVar9 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      fn_82F622A8(0xffffffff82196fd4);
    }
    uVar5 = (uVar7 - uVar8) + uVar9;
    uVar8 = param_1[2] - uVar8;
    if ((uVar8 & 0xffffffff) < (uVar5 & 0xffffffff)) {
      uVar7 = (uVar8 & 0xffffffff) >> 1;
      uVar10 = 0;
      if ((uVar8 & 0xffffffff) <= (-uVar7 - 1 & 0xffffffff)) {
        uVar10 = uVar7 + uVar8;
      }
      if ((uVar10 & 0xffffffff) < (uVar5 & 0xffffffff)) {
        uVar10 = uVar5;
      }
      piVar4 = (int *)fn_825089A0();
      uVar8 = (**(code **)(*piVar4 + 0x24))(piVar4,uVar10,2);
      uVar5 = (ulonglong)*param_1;
      uVar7 = uVar8;
      if (uVar5 != (param_2 & 0xffffffff)) {
        lVar6 = param_2 - uVar5;
        do {
          if ((uVar7 & 0xffffffff) != 0) {
            *(undefined1 *)uVar7 = *(undefined1 *)uVar5;
          }
          uVar7 = uVar7 + 1;
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if ((param_3 & 0xffffffff) != (param_4 & 0xffffffff)) {
        lVar6 = param_3 - uVar7;
        do {
          if ((uVar7 & 0xffffffff) != 0) {
            *(undefined1 *)uVar7 = ((undefined1 *)uVar7)[(int)lVar6];
          }
          uVar7 = uVar7 + 1;
        } while ((lVar6 + uVar7 & 0xffffffff) != (param_4 & 0xffffffff));
      }
      uVar1 = param_1[1];
      if ((param_2 & 0xffffffff) != (ulonglong)uVar1) {
        lVar6 = param_2 - uVar7;
        do {
          if ((uVar7 & 0xffffffff) != 0) {
            *(undefined1 *)uVar7 = ((undefined1 *)uVar7)[(int)lVar6];
          }
          uVar7 = uVar7 + 1;
        } while ((lVar6 + uVar7 & 0xffffffff) != (ulonglong)uVar1);
      }
      uVar1 = *param_1;
      uVar2 = param_1[1];
      if (uVar1 != 0) {
        piVar4 = (int *)fn_825089A0();
        (**(code **)(*piVar4 + 0x28))(piVar4,uVar1);
      }
      uVar3 = (uint)uVar8;
      *param_1 = uVar3;
      param_1[2] = (int)uVar10 + uVar3;
      param_1[1] = uVar3 + (uVar2 - uVar1) + (int)uVar9;
    }
    else {
      uVar8 = uVar9;
      if ((param_3 & 0xffffffff) != (param_4 & 0xffffffff)) {
        do {
          if ((uVar7 & 0xffffffff) != 0) {
            *(undefined1 *)uVar7 = *(undefined1 *)param_3;
          }
          uVar7 = uVar7 + 1;
          param_3 = param_3 + 1;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      uVar7 = (ulonglong)param_1[1];
      if (((param_2 & 0xffffffff) != uVar7) && (uVar7 != (uVar7 + uVar9 & 0xffffffff))) {
        fn_82889AB8(param_2,uVar7,uVar7 + uVar9,0,0);
      }
      param_1[1] = param_1[1] + (int)uVar9;
    }
  }
  return;
}

