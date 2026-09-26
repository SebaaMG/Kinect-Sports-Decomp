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
extern int fn_82791650();


undefined4 * fn_82791EF0(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  
  bVar3 = false;
  *param_1 = 0;
  piVar5 = param_1 + 4;
  param_1[3] = param_2 + 0x10;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  fn_82791650(piVar5);
  param_1[6] = param_2;
  param_1[7] = param_3;
  uVar1 = param_1[5];
  if (((int)uVar1 < 0) || (bVar2 = false, *(uint *)(*piVar5 + 4) <= uVar1)) {
    bVar2 = true;
  }
  if (!bVar2) {
    piVar4 = (int *)(uVar1 * 0xc + *(int *)*piVar5);
    if ((*piVar4 <= param_3) && (param_3 <= piVar4[1] + *piVar4 + -1)) {
      bVar3 = true;
    }
    if (((!bVar3) && (*piVar4 < param_3)) && ((int)param_1[5] < *(int *)(*piVar5 + 4))) {
      param_1[5] = param_1[5] + 1;
    }
  }
  return param_1;
}

