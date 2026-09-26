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
extern int fn_8265C9E0();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B5608();
extern int fn_82F64538();
extern unsigned int lbl_821B05E4;


void fn_8232AB40(int *param_1,undefined8 param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar4;
  undefined4 *puVar3;
  int iVar5;
  undefined1 auStack_30 [48];
  
  if (param_3 != (int *)0x0) {
    if ((int *)*param_3 == (int *)0x0) {
      uVar2 = 0xffffffff831d7088;
    }
    else {
      uVar2 = (**(code **)(*(int *)*param_3 + 4))();
    }
    cVar4 = fn_82F64538(uVar2,0xffffffff831da7b4);
    if (cVar4 != '\0') {
      iVar5 = *param_3 + 4;
      goto LAB_8232abac;
    }
  }
  iVar5 = 0;
LAB_8232abac:
  if (iVar5 == 0) {
    fn_828B5608(auStack_30);
    (**(code **)(*param_1 + 0x14))(param_1,param_2,auStack_30);
    puVar3 = (undefined4 *)fn_8265C9E0(0xc);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &lbl_821B05E4;
      fn_828B5580(puVar3 + 1,auStack_30);
    }
    puVar1 = (undefined4 *)*param_3;
    *param_3 = (int)puVar3;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    fn_828B55B0(auStack_30);
  }
  else {
    (**(code **)(*param_1 + 0x14))(param_1,param_2);
  }
  return;
}

