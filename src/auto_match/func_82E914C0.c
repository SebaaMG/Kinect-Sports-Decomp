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


undefined8 fn_82E914C0(int *param_1,int *param_2,longlong param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar3 = (int)param_3;
  piVar4 = (int *)0x0;
  *param_2 = 0;
  uVar2 = param_1[4];
  if ((int)uVar2 <= iVar3) {
    return 0;
  }
  if (iVar3 == 0) {
    piVar5 = (int *)*param_1;
    bVar1 = *piVar5 == 0;
    *param_1 = *piVar5;
  }
  else {
    if ((iVar3 == -1) && (uVar2 == 1)) {
      piVar5 = (int *)param_1[1];
      *param_1 = 0;
      goto LAB_82e91550;
    }
    if (iVar3 == -1) {
      param_3 = (ulonglong)uVar2 - 1;
    }
    param_3 = param_3 + -1;
    piVar4 = (int *)*param_1;
    if (0 < param_3) {
      do {
        piVar4 = (int *)*piVar4;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    piVar5 = (int *)*piVar4;
    bVar1 = iVar3 == -1;
    *piVar4 = *piVar5;
  }
  if (bVar1) {
    param_1[1] = (int)piVar4;
  }
LAB_82e91550:
  *param_2 = piVar5[1];
  *piVar5 = param_1[2];
  param_1[2] = (int)piVar5;
  if (param_1[3] == 0) {
    param_1[3] = (int)piVar5;
  }
  param_1[4] = param_1[4] + -1;
  return 1;
}

