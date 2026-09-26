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
extern int fn_8278D368();
extern int fn_82790270();


void fn_827A5F20(undefined8 param_1,int *param_2,int *param_3)

{
  int iVar1;
  ulonglong uVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  iVar1 = 0;
  if ((*(int *)*param_3 != 2) || (iVar1 = 1, 1 < (uint)param_3[1])) {
    piVar3 = (int *)*param_3 + iVar1 * 3;
    iVar1 = *piVar3;
    if ((iVar1 == 0) || ((iVar1 == 1 && (2 < (uint)piVar3[2])))) {
      uVar4 = (ulonglong)(uint)piVar3[1];
      uVar6 = (ulonglong)(uint)piVar3[2];
      if (iVar1 == 1) {
        uVar4 = uVar4 + 2;
        uVar6 = uVar6 - 2;
      }
      uVar2 = uVar6;
      if (5 < (uVar6 & 0xffffffff)) {
        uVar2 = 6;
      }
      iVar1 = fn_82790270(uVar4,0xffffffff821ae24c,uVar2);
      if (iVar1 == 0) {
        uVar5 = 0;
        if (param_2[1] != 0) {
          iVar1 = 0;
          do {
            fn_8278D368(*(undefined4 *)(iVar1 + *param_2),0);
            uVar5 = uVar5 + 1;
            iVar1 = iVar1 + 4;
          } while (uVar5 < (uint)param_2[1]);
        }
      }
      else {
        if (5 < (uVar6 & 0xffffffff)) {
          uVar6 = 6;
        }
        iVar1 = fn_82790270(uVar4,0xffffffff82011774,uVar6);
        if ((iVar1 == 0) && (uVar5 = 0, param_2[1] != 0)) {
          iVar1 = 0;
          do {
            fn_8278D368(*(undefined4 *)(iVar1 + *param_2),1);
            uVar5 = uVar5 + 1;
            iVar1 = iVar1 + 4;
          } while (uVar5 < (uint)param_2[1]);
        }
      }
    }
  }
  return;
}

