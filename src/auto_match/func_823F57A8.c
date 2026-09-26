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
extern unsigned int lbl_821B7A68;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_823F57A8(int *param_1,undefined8 param_2,int *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  int in_r0;
  undefined8 uVar3;
  char cVar5;
  undefined4 *puVar4;
  int iVar6;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined1 auStack_40 [16];
  undefined4 uStack_30;
  undefined1 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar3 = 0xffffffff831d7088;
    }
    else {
      uVar3 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar5 = fn_82F64538(uVar3,0xffffffff831df714);
    if (cVar5 != '\0') {
      iVar6 = *param_3 + 0x10;
      goto LAB_823f5814;
    }
  }
  iVar6 = 0;
LAB_823f5814:
  if (iVar6 == 0) {
    pcVar1 = *(code **)(*param_1 + 0x14);
    puVar4 = (undefined4 *)((uint)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    uStack_2c = 0xff;
    uStack_30 = 0;
    uStack_28 = lbl_821CA460;
    uStack_24 = 3;
    (*pcVar1)(param_1,param_2,auStack_40);
    puVar4 = (undefined4 *)fn_8265C9E0(0x30);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = &lbl_821B7A68;
      fn_82F68CC0(puVar4 + 4,auStack_40,0x20);
    }
    puVar2 = (undefined4 *)*param_3;
    *param_3 = (int)puVar4;
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  return;
}

