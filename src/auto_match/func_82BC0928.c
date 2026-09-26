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
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern unsigned int lbl_820E3564;


undefined4 * fn_82BC0928(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  param_1[3] = param_2;
  param_1[8] = param_3;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &lbl_820E3564;
  *(undefined1 *)((int)param_1 + 5) = 0;
  param_1[4] = 0xffffffff;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  uVar1 = *(undefined4 *)(param_4 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0xc);
  piVar3 = puVar2 + 1;
  *puVar2 = uVar1;
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = param_4;
    puVar2[2] = 0;
  }
  param_1[0xb] = piVar3;
  uVar1 = *(undefined4 *)(param_4 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar4,*(undefined4 *)(param_4 + 0x5ac));
  }
  param_1[9] = puVar4;
  uVar1 = *(undefined4 *)(param_4 + 0x5ac);
  puVar2 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar4 = puVar2 + 1;
  *puVar2 = uVar1;
  puVar2 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    fn_82BA03B8(puVar4,*(undefined4 *)(param_4 + 0x5ac));
    puVar2 = puVar4;
  }
  param_1[10] = puVar2;
  param_1[2] = *(undefined4 *)(param_4 + 0x598);
  *(int *)(param_4 + 0x598) = *(int *)(param_4 + 0x598) + 1;
  return param_1;
}

