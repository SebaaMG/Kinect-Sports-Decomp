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
extern unsigned int *auStack_40;
extern int fn_823BE2A8();
extern int fn_823BE8C8();
extern int fn_8265C9E0();
extern int fn_82F64538();
extern unsigned int lbl_821B9B9C;
extern unsigned int lbl_821B9BBC;


void fn_82446D40(int *param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined8 uVar3;
  char cVar5;
  undefined4 *puVar4;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined **appuStack_1e0 [104];
  undefined1 auStack_40 [64];
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar3 = 0xffffffff831d7088;
    }
    else {
      uVar3 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar5 = fn_82F64538(uVar3,0xffffffff831e4e90);
    if (cVar5 != '\0') {
      iVar6 = *param_3 + 0x10;
      goto LAB_82446dac;
    }
  }
  iVar6 = 0;
LAB_82446dac:
  if (iVar6 == 0) {
    fn_823BE8C8(appuStack_1e0);
    puVar4 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    appuStack_1e0[0] = &lbl_821B9B9C;
    (**(code **)(*param_1 + 0x14))(param_1,param_2,appuStack_1e0);
    puVar4 = (undefined4 *)fn_8265C9E0(0x1c0);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = &lbl_821B9BBC;
      fn_823BE2A8(puVar4 + 4,appuStack_1e0);
      puVar4[4] = &lbl_821B9B9C;
      puVar1 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)((uint)(puVar4 + 0x6c) & 0xfffffff0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
    }
    puVar1 = (undefined4 *)*param_3;
    *param_3 = (int)puVar4;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1,param_2);
  }
  return;
}

