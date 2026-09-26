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
extern int fn_8265C9E0();
extern int fn_82F64538();
extern int fn_82F68CC0();
extern unsigned int lbl_821B7B04;
extern unsigned int uStack_4b;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_823F7D40(int *param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  int in_r0;
  undefined8 uVar2;
  char cVar4;
  undefined4 *puVar3;
  int iVar5;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 auStack_40 [64];
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar2 = 0xffffffff831d7088;
    }
    else {
      uVar2 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar4 = fn_82F64538(uVar2,0xffffffff831dfaac);
    if (cVar4 != '\0') {
      iVar5 = *param_3 + 0x10;
      goto LAB_823f7db0;
    }
  }
  iVar5 = 0;
LAB_823f7db0:
  if (iVar5 == 0) {
    iVar5 = *param_1;
    uStack_60 = 0xffffffff;
    uStack_5c = 0xffffffff;
    puVar3 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar3 = in_register_000104d0;
    puVar3[1] = in_register_000104d4;
    puVar3[2] = in_register_000104d8;
    puVar3[3] = in_vr77;
    uStack_58 = 0xffffffff;
    uStack_54 = 0xffffffff;
    uStack_50 = 0;
    uStack_4c = 0;
    uStack_4b = 1;
    (**(code **)(iVar5 + 0x14))(param_1,param_2,&uStack_60);
    puVar3 = (undefined4 *)fn_8265C9E0(0x40);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &lbl_821B7B04;
      fn_82F68CC0(puVar3 + 4,&uStack_60,0x30);
    }
    puVar1 = (undefined4 *)*param_3;
    *param_3 = (int)puVar3;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  return;
}

