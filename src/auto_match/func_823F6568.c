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
extern int fn_82F64538();
extern unsigned int uStack_58;


void fn_823F6568(int *param_1,undefined8 param_2,int *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uStack_58;
  undefined1 auStack_50 [80];
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar1 = 0xffffffff831d7088;
    }
    else {
      uVar1 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar2 = fn_82F64538(uVar1,0xffffffff831df898);
    if (cVar2 != '\0') {
      iVar3 = *param_3 + 0x10;
      goto LAB_823f65d4;
    }
  }
  iVar3 = 0;
LAB_823f65d4:
  puVar5 = &uStack_58;
  puVar4 = (undefined8 *)(iVar3 + -8);
  lVar6 = 6;
  do {
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  (**(code **)(*param_1 + 0x10))(param_1,param_2,auStack_50);
  return;
}

