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
extern int fn_822315A0();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int uStack_38;
extern unsigned int uStack_40;


void fn_823B8800(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined1 auStack_30 [48];
  
  iVar3 = fn_8265C9E0(0x28);
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_822D7FE0();
  }
  uStack_40 = 0;
  iStack_3c = 0;
  fn_822D79D8(&uStack_40,uVar2);
  (**(code **)(**(int **)(param_1 + 0x68) + 0x10))(*(int **)(param_1 + 0x68),uStack_40,param_2);
  (**(code **)(**(int **)(param_1 + 0x70) + 0x10))(*(int **)(param_1 + 0x70),uStack_40,param_3);
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_828E9D90(uStack_40);
    fn_828E9D40(uStack_40);
    uVar1 = uStack_40;
    uStack_38 = 0;
    iStack_34 = 0;
    (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),uStack_40,auStack_30)
    ;
    (**(code **)(**(int **)(param_1 + 0x70) + 0x14))(*(int **)(param_1 + 0x70),uVar1,&uStack_38);
    if (*(int *)(param_1 + 0x48) != 0) {
      (**(code **)(**(int **)(param_1 + 0x48) + 4))(*(int **)(param_1 + 0x48),auStack_30,&uStack_38)
      ;
    }
    if (iStack_34 != 0) {
      fn_822315A0();
    }
  }
  fn_828E2B28(param_1,&uStack_40);
  if (iStack_3c != 0) {
    fn_822315A0();
  }
  return;
}

