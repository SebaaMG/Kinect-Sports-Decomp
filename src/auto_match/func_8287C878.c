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
extern int fn_822974F0();
extern int fn_82865AF0();


undefined4 * fn_8287C878(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  short *psVar6;
  char *pcVar7;
  
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  uVar2 = (ulonglong)(uint)param_2[4];
  if ((uint)param_1[4] < uVar2) {
    fn_82865AF0(param_1,uVar2 - (uint)param_1[4],0);
  }
  else {
    fn_822974F0(param_1,uVar2,0xffffffffffffffff);
  }
  puVar3 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar3 = (undefined4 *)*param_1;
  }
  puVar5 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar5 = (undefined4 *)*param_2;
  }
  piVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  if (param_2 != (undefined4 *)((int)puVar5 + *piVar1)) {
    iVar4 = ((int)puVar5 + *piVar1) - (int)param_2;
    pcVar7 = (char *)((int)param_2 + -1);
    psVar6 = (short *)((int)puVar3 + -2);
    do {
      pcVar7 = pcVar7 + 1;
      psVar6 = psVar6 + 1;
      *psVar6 = (short)*pcVar7;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}

