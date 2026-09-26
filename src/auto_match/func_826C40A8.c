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
extern int fn_8267BE38();
extern int fn_826944C8();
extern int fn_8269A608();
extern int fn_8269F500();
extern int fn_826C2D50();
extern int fn_826C3BE0();
extern unsigned int lbl_8200B908;
extern unsigned int lbl_8200B960;


undefined4 *
fn_826C40A8(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
             ulonglong param_6,int param_7)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar7;
  longlong lVar6;
  
  fn_826C2D50();
  param_1[0xc] = 0;
  *param_1 = &lbl_8200B960;
  param_1[4] = &lbl_8200B908;
  param_1[0xd] = 0;
  if (param_3 != 0) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  param_1[0xe] = param_3;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_4;
  param_1[0x13] = param_5;
  iVar1 = *(int *)(*(int *)(param_2 + 0x78) + 8);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = iVar1;
  uVar7 = *(int *)(iVar1 + 8) + 1;
  *(uint *)(iVar1 + 8) = uVar7;
  lVar6 = (ulonglong)uVar7 - 1;
  *(int *)(iVar1 + 8) = (int)lVar6;
  if (lVar6 == 0) {
    fn_826944C8();
  }
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x67) = 0;
  *(char *)((int)param_1 + 0x66) = (char)param_7;
  if ((param_6 & 0xffffffff) != 0) {
    fn_826C3BE0(param_1 + 0xf,param_6);
  }
  if ((param_7 != 3) && (param_7 != 4)) {
    piVar2 = *(int **)(param_2 + 0x74);
    piVar4 = (int *)piVar2[0x20];
    if (piVar4 == (int *)0x0) {
      piVar4 = (int *)fn_8269F500(piVar2);
    }
    if (piVar4 != (int *)0x0) {
      *piVar4 = *piVar4 + 1;
    }
    puVar3 = (uint *)param_1[0xd];
    if ((puVar3 != (uint *)0x0) &&
       (uVar7 = *puVar3, *puVar3 = (uint)((ulonglong)uVar7 - 1),
       (longlong)((ulonglong)uVar7 - 1) < 1)) {
      fn_8269A608(puVar3);
      fn_8267BE38(puVar3);
    }
    param_1[0xd] = piVar4;
    uVar5 = (**(code **)(*piVar2 + 0x40))(piVar2);
    param_1[0xc] = uVar5;
  }
  return param_1;
}

