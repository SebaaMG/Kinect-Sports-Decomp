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
extern int fn_822315A0();
extern int fn_82251DB0();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_823EAE70(int *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar1 = *param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  iVar3 = fn_8265C9E0(0x28);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_822D7FE0();
  }
  uStack_28 = 0;
  iStack_24 = 0;
  fn_822D79D8(&uStack_28,uVar2);
  (**(code **)(**(int **)(iVar1 + 0x6f8) + 0x10))(*(int **)(iVar1 + 0x6f8),uStack_28,&uStack_30);
  (**(code **)(**(int **)(iVar1 + 0x700) + 0x10))(*(int **)(iVar1 + 0x700),uStack_28,&uStack_2c);
  (**(code **)(**(int **)(iVar1 + 0x708) + 0x10))(*(int **)(iVar1 + 0x708),uStack_28,param_4);
  if (*(int *)(iVar1 + 0x6d8) != 0) {
    fn_828E9D90(uStack_28);
    fn_828E9D40(uStack_28);
    fn_82251DB0(iVar1 + 0x690,uStack_28,iVar1 + 0x6c8);
  }
  fn_828E2B28(iVar1 + 0x690,&uStack_28);
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  return;
}

