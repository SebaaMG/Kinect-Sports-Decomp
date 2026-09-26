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
extern unsigned int *auStack_90;
extern int fn_8255AA78();
extern int fn_82574340();
extern int fn_82574438();
extern int fn_825932A8();
extern int fn_82593358();
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_82603170(int param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  uint *param_5)

{
  undefined4 *puVar1;
  int in_r0;
  int iVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if (param_1 == 0) {
    puVar3 = (undefined4 *)(in_r0 + (int)param_2 & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
  }
  else {
    if ((*param_5 == 0) || (iVar2 = fn_82593358(param_1,param_5,param_4), iVar2 == 0)) {
      uVar4 = fn_825932A8(param_1,param_4);
    }
    else {
      uVar4 = (ulonglong)*param_5;
    }
    if ((uVar4 & 0xffffffff) == 0) {
      puVar3 = (undefined4 *)(param_1 + 0x50U & 0xfffffff0);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar1 = (undefined4 *)(in_r0 + (int)param_2 & 0xfffffff0);
      *puVar1 = *puVar3;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
    }
    else {
      if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)
                 ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_1 + 0x8c0)
                 );
      }
      fn_82574340(uVar4,param_1 + 0xf0,uVar5,param_2);
      if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)
                 ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_1 + 0x8c0)
                 );
      }
      fn_82574438(uVar4,param_1 + 0xf0,uVar5,&uStack_80);
      puVar3 = (undefined4 *)
               fn_8255AA78(auStack_90,uStack_80,uStack_78,uStack_70,uStack_68,uStack_60,
                                 uStack_58,uStack_50);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      *param_3 = *puVar3;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      *param_5 = (uint)uVar4;
    }
  }
  return;
}

