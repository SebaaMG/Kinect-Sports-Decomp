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
extern unsigned int lbl_8200571C;


undefined8 fn_82773E60(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  
  piVar1 = (int *)*param_1;
  if (((piVar1 == (int *)0x0) || ((uint)piVar1[1] <= (uint)param_1[2])) ||
     (bVar4 = false, param_1[2] < 0)) {
    bVar4 = true;
  }
  if (bVar4) {
    return 0;
  }
  if (*(char *)(param_1 + 4) != '\0') {
    return 1;
  }
  uVar3 = param_1[2];
  piVar2 = *(int **)(uVar3 * 4 + *piVar1);
  if (uVar3 == piVar1[5]) {
    bVar4 = ((float)piVar1[9] - (float)piVar1[7]) + lbl_8200571C <
            (float)(longlong)piVar2[4] + (float)param_1[3];
  }
  else {
    if (uVar3 <= (uint)piVar1[5]) {
      return 0;
    }
    if (*piVar2 < 0) {
      uVar3 = (uint)*(ushort *)((int)piVar2 + 0x16);
    }
    else {
      uVar3 = piVar2[6];
    }
    bVar4 = ((float)piVar1[9] - (float)piVar1[7]) + lbl_8200571C <
            (float)(longlong)(int)(uVar3 + piVar2[4]) + (float)param_1[3];
  }
  if (bVar4) {
    return 0;
  }
  return 1;
}

