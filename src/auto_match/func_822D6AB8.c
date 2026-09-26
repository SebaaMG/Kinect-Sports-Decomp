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
extern unsigned int iStack_24;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_28;


void fn_822D6AB8(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar3;
  undefined8 uVar2;
  undefined4 uStack0000001c;
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  int iStack_24;
  
  uStack0000001c = param_2;
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
  (**(code **)(**(int **)(param_1 + 0x68) + 0x10))
            (*(int **)(param_1 + 0x68),uStack_28,&stack0x0000001c);
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_828E9D90(uStack_28);
    fn_828E9D40(uStack_28);
    (**(code **)(**(int **)(param_1 + 0x68) + 0x14))(*(int **)(param_1 + 0x68),uStack_28,auStack_30)
    ;
    piVar1 = *(int **)(param_1 + 0x48);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1,auStack_30[0]);
    }
  }
  fn_828E2B28(param_1,&uStack_28);
  if (iStack_24 != 0) {
    fn_822315A0();
  }
  return;
}

