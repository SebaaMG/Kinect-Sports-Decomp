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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8265C9E0();
extern int fn_82F64538();
extern int fn_82F68CC0();
extern unsigned int lbl_821B7A44;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3a;
extern unsigned int uStack_3b;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_823F4FE8(int *param_1,undefined8 param_2,int *param_3)

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
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined4 uStack_40;
  undefined1 uStack_3c;
  undefined1 uStack_3b;
  undefined1 uStack_3a;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar3 = 0xffffffff831d7088;
    }
    else {
      uVar3 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar5 = fn_82F64538(uVar3,0xffffffff831df684);
    if (cVar5 != '\0') {
      iVar6 = *param_3 + 0x10;
      goto LAB_823f5058;
    }
  }
  iVar6 = 0;
LAB_823f5058:
  if (iVar6 == 0) {
    iVar6 = *param_1;
    puVar4 = (undefined4 *)((uint)(auStack_70 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    pcVar1 = *(code **)(iVar6 + 0x14);
    puVar4 = (undefined4 *)((uint)(auStack_60 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    puVar4 = (undefined4 *)((uint)(auStack_50 + in_r0) & 0xfffffff0);
    *puVar4 = in_register_000104d0;
    puVar4[1] = in_register_000104d4;
    puVar4[2] = in_register_000104d8;
    puVar4[3] = in_vr77;
    uStack_3c = 0;
    uStack_3b = 0;
    uStack_40 = lbl_821CC160;
    uStack_3a = 0;
    uStack_38 = 0;
    uStack_34 = 3;
    (*pcVar1)(param_1,param_2,auStack_70);
    puVar4 = (undefined4 *)fn_8265C9E0(0x50);
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      *puVar4 = &lbl_821B7A44;
      fn_82F68CC0(puVar4 + 4,auStack_70,0x40);
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

