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
extern int fn_82414950();
extern int fn_82417F58();
extern int fn_8241F2A0();
extern int fn_8241F440();
extern int fn_8241F610();
extern int fn_8288B760();


void fn_8241EFC8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  param_1[6] = param_2;
  param_1[7] = 0;
  iVar2 = param_2 * 0x1ac + param_1[2];
  fn_8241F440(param_1,iVar2);
  if ((param_1 == *(int **)(*param_1 + 0x2b20)) &&
     ((param_1[6] != 0 || (*(int *)(iVar2 + 0x40) != 1)))) {
    fn_82414950(*(undefined4 *)(*param_1 + 0x2b50),*(undefined4 *)(iVar2 + 0x14),0x1e);
  }
  fn_8241F610(param_1);
  if (*(int *)(iVar2 + 0x38) == 0) {
    fn_8241F2A0(param_1,iVar2);
  }
  *(int *)(iVar2 + 0x38) = *(int *)(iVar2 + 0x38) + 1;
  iVar2 = *param_1 + 0x1bc4;
  if (*(int *)(param_1[6] * 0x1ac + param_1[2] + 4) == 0) {
    iVar2 = *param_1 + 0x1cc0;
  }
  for (piVar4 = (int *)param_1[8]; piVar4 != (int *)param_1[9]; piVar4 = piVar4 + 1) {
    iVar1 = *piVar4;
    *(int *)(iVar1 + 0x278) = iVar2;
    *(undefined4 *)(iVar1 + 0x27c) = 0;
  }
  for (piVar4 = (int *)param_1[0x22]; piVar4 != (int *)param_1[0x23]; piVar4 = piVar4 + 1) {
    iVar1 = *piVar4;
    if (iVar2 != *(int *)(iVar1 + 0x54)) {
      *(int *)(iVar1 + 0x54) = iVar2;
      *(undefined4 *)(iVar1 + 0x44) = 1;
    }
  }
  iVar2 = fn_82417F58(param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x24) != 0)) {
    if (*(int *)(iVar2 + 0x168) == 0) {
      uVar3 = *(uint *)(iVar2 + 0x16c);
    }
    else {
      uVar3 = fn_8288B760();
      uVar3 = uVar3 & 0xff;
    }
    if (uVar3 != 0) {
      param_1[0xb7] = 0;
      return;
    }
  }
  param_1[0xb7] = 2;
  return;
}

