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


undefined8 fn_82BD8488(int param_1,int *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = (int *)(param_1 + 0x188);
  uVar1 = 0;
  if ((int *)*piVar4 != (int *)0x0) {
    uVar2 = *(ulonglong *)(*param_2 + 0x18);
    piVar6 = (int *)*piVar4;
    piVar3 = (int *)0x0;
    do {
      piVar5 = piVar6;
      piVar6 = piVar5;
      if (uVar2 < *(ulonglong *)(*piVar5 + 0x18)) break;
      piVar6 = (int *)piVar5[1];
      piVar3 = piVar5;
    } while (piVar6 != (int *)0x0);
    if (piVar6 != (int *)0x0) {
      if (*(ulonglong *)(*piVar5 + 0x18) == uVar2) {
        return 0xffffffff80004005;
      }
      if (piVar3 != (int *)0x0) {
        param_2[1] = piVar3[1];
        piVar3[1] = (int)param_2;
        return uVar1;
      }
      param_2[1] = *piVar4;
      *piVar4 = (int)param_2;
      if (*(int *)(param_1 + 0x18c) != 0) {
        return uVar1;
      }
      goto LAB_82bd8504;
    }
    if ((piVar3 != (int *)0x0) && (*(ulonglong *)(*piVar3 + 0x18) == uVar2)) {
      return 0xffffffff80004005;
    }
  }
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x18c) == 0) {
    *piVar4 = (int)param_2;
  }
  else {
    *(int **)(*(int *)(param_1 + 0x18c) + 4) = param_2;
  }
LAB_82bd8504:
  *(int **)(param_1 + 0x18c) = param_2;
  return uVar1;
}

