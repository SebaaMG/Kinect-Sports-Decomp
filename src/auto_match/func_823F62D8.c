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
extern unsigned int *auStack_48;
extern unsigned int *auStack_68;
extern int fn_8265C9E0();
extern int fn_82F64538();
extern int fn_82F68CC0();
extern unsigned int lbl_821B7AA4;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_823F62D8(int *param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar4;
  undefined4 *puVar3;
  int iVar5;
  longlong lVar6;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 auStack_68 [8];
  undefined4 auStack_48 [18];
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar2 = 0xffffffff831d7088;
    }
    else {
      uVar2 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar4 = fn_82F64538(uVar2,0xffffffff831df850);
    if (cVar4 != '\0') {
      iVar5 = *param_3 + 4;
      goto LAB_823f6348;
    }
  }
  iVar5 = 0;
LAB_823f6348:
  if (iVar5 == 0) {
    puVar3 = auStack_68;
    uStack_70 = 0xffffffff;
    uStack_6c = 0xffffffff;
    auStack_68[0] = 0;
    lVar6 = 7;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0xffffffff;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    puVar3 = auStack_48;
    auStack_48[0] = 0;
    lVar6 = 7;
    do {
      puVar3 = puVar3 + 1;
      *puVar3 = 0xffffffff;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    (**(code **)(*param_1 + 0x14))(param_1,param_2,&uStack_70);
    puVar3 = (undefined4 *)fn_8265C9E0(0x4c);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &lbl_821B7AA4;
      fn_82F68CC0(puVar3 + 1,&uStack_70,0x48);
    }
    puVar1 = (undefined4 *)*param_3;
    *param_3 = (int)puVar3;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1,param_2);
  }
  return;
}

