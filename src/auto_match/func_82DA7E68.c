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
extern int fn_82F68B6C();


void fn_82DA7E68(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  if (piVar3 < piVar3 + param_1[1] * 2) {
    lVar2 = (ulonglong)((uint)((int)(piVar3 + param_1[1] * 2) + (-1 - (int)piVar3)) >> 3) + 1;
    do {
      iVar1 = *piVar3;
      if (*(int *)((int)*(char *)(piVar3[1] + 5) + piVar3[1] + 0x14) <
          *(int *)(*(char *)(iVar1 + 5) + iVar1 + 0x14)) {
        *piVar3 = piVar3[1];
        piVar3[1] = iVar1;
      }
      piVar3 = piVar3 + 2;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  if ((int)param_1[1] < 2) {
    return;
  }
  fn_82F68B6C(*param_1,0,(ulonglong)param_1[1] - 1,0xffffffff82da7d50);
  return;
}

