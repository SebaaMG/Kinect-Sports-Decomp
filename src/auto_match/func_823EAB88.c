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
extern unsigned int *auStack_b0;
extern int fn_822315A0();
extern int fn_82250D78();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();
extern unsigned int iStack_bc;
extern unsigned int uStack_c0;


void fn_823EAB88(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar4;
  undefined8 uVar3;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined1 auStack_b0 [176];
  
  iVar1 = *param_1;
  iVar4 = fn_8265C9E0(0x28);
  if (iVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_822D7FE0();
  }
  uStack_c0 = 0;
  iStack_bc = 0;
  fn_822D79D8(&uStack_c0,uVar3);
  (**(code **)(**(int **)(iVar1 + 0x188) + 0x10))(*(int **)(iVar1 + 0x188),uStack_c0,param_2);
  if (*(int *)(iVar1 + 0x168) != 0) {
    fn_828E9D90(uStack_c0);
    fn_828E9D40(uStack_c0);
    uVar2 = uStack_c0;
    fn_82250D78(auStack_b0);
    (**(code **)(**(int **)(iVar1 + 0x188) + 0x14))(*(int **)(iVar1 + 0x188),uVar2,auStack_b0);
    if (*(int *)(iVar1 + 0x168) != 0) {
      (**(code **)(**(int **)(iVar1 + 0x168) + 4))(*(int **)(iVar1 + 0x168),auStack_b0);
    }
  }
  fn_828E2B28(iVar1 + 0x120,&uStack_c0);
  if (iStack_bc != 0) {
    fn_822315A0();
  }
  return;
}

