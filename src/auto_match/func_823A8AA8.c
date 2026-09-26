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
extern unsigned int *auStack_80;
extern int fn_822315A0();
extern int fn_823A9C98();
extern int fn_8265C9E0();
extern int fn_82F64538();
extern unsigned int iStack_38;
extern unsigned int lbl_821B56B8;
extern unsigned int uStack_3c;
extern unsigned int uStack_78;


void fn_823A8AA8(int *param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar4;
  undefined4 *puVar3;
  int iVar5;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_3c;
  int iStack_38;
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar2 = 0xffffffff831d7088;
    }
    else {
      uVar2 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar4 = fn_82F64538(uVar2,0xffffffff831dddf8);
    if (cVar4 != '\0') {
      iVar5 = *param_3 + 0x10;
      goto LAB_823a8b18;
    }
  }
  iVar5 = 0;
LAB_823a8b18:
  if (iVar5 == 0) {
    uStack_3c = 0;
    iStack_38 = 0;
    uStack_78 = 2;
    (**(code **)(*param_1 + 0x14))(param_1,param_2,auStack_80);
    puVar3 = (undefined4 *)fn_8265C9E0(0x60);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &lbl_821B56B8;
      fn_823A9C98(puVar3 + 4,auStack_80);
    }
    puVar1 = (undefined4 *)*param_3;
    *param_3 = (int)puVar3;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if (iStack_38 != 0) {
      fn_822315A0();
    }
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  return;
}

