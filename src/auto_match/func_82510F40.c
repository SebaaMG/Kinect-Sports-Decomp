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
extern unsigned int *auStack_30;
extern int fn_8255E0B0();
extern int fn_82574340();
extern int fn_825932A8();


int fn_82510F40(int param_1,int param_2,ulonglong param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_30 [24];
  
  if ((param_3 & 0xffff) == 0) {
    if ((short)param_4 < 0) {
      puVar2 = (undefined4 *)(*(int *)(param_2 + 8) + 0x50U & 0xfffffff0);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      goto LAB_82510fe4;
    }
    fn_8255E0B0(*(undefined4 *)(param_2 + 8),param_4,auStack_30);
  }
  else {
    uVar3 = fn_825932A8(*(undefined4 *)(param_2 + 8),param_3);
    iVar1 = *(int *)(param_2 + 8);
    if ((*(int *)(iVar1 + 0x4c) == 0) || (*(int *)(iVar1 + 0x8c0) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)
               ((*(int *)(*(int *)(iVar1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(iVar1 + 0x8c0));
    }
    fn_82574340(uVar3,iVar1 + 0xf0,uVar4,auStack_30);
  }
  puVar2 = (undefined4 *)((uint)(auStack_30 + in_r0) & 0xfffffff0);
  uVar4 = *puVar2;
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
LAB_82510fe4:
  puVar2 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
  *puVar2 = uVar4;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  return param_1;
}

