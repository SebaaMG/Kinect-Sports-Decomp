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
extern unsigned int *auStack_70;
extern int fn_82CE6820();
extern int fn_82DD9828();
extern int fn_82DD9A10();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82139C84;


undefined4 * fn_82D74A90(undefined4 *param_1,undefined4 *param_2,int *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int in_r0;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  undefined1 auStack_70 [112];
  
  param_1[2] = param_4;
  *(undefined2 *)((int)param_1 + 6) = 1;
  *param_1 = &lbl_82139C84;
  uVar1 = *param_2;
  iVar2 = *param_3;
  fn_82CE6820(auStack_70,param_2[2],param_3[2]);
  if (*(int *)(iVar2 + 0xc) == 3) {
    fn_82DD9A10();
  }
  else {
    fn_82DD9828(param_1 + 3,uVar1,iVar2,auStack_70);
  }
  uVar1 = lbl_8200133C;
  puVar3 = (undefined4 *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  *puVar3 = in_register_000100d0;
  puVar3[1] = in_register_000100d4;
  puVar3[2] = in_register_000100d8;
  puVar3[3] = in_vr13;
  param_1[0xb] = uVar1;
  param_1[6] = uVar1;
  puVar3 = (undefined4 *)param_2[3];
  while (puVar5 = puVar3, puVar5 != (undefined4 *)0x0) {
    param_2 = puVar5;
    puVar3 = (undefined4 *)puVar5[3];
  }
  piVar7 = (int *)param_3[3];
  while (piVar6 = piVar7, piVar6 != (int *)0x0) {
    param_3 = piVar6;
    piVar7 = (int *)piVar6[3];
  }
  fVar4 = (float)param_3[0x13];
  if ((float)param_2[0x13] - (float)param_3[0x13] < 0.0) {
    fVar4 = (float)param_2[0x13];
  }
  param_1[7] = fVar4;
  return param_1;
}

