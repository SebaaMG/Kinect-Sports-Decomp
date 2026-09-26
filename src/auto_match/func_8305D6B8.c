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
extern int fn_828106A0();
extern int fn_82810868();
extern int fn_82810A50();
extern int fn_8305F7A0();


void fn_8305D6B8(int param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong alStack_40 [8];
  
  fn_828106A0(param_2);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar4 = 0;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      uVar1 = fn_8305F7A0(*(undefined4 *)(param_1 + 0x28),
                           *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x2c)));
      fn_82810868(alStack_40,param_2,uVar1);
      iVar2 = *(int *)(param_1 + 0x30);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < iVar2);
  }
  alStack_40[0] = (longlong)iVar2;
  fn_82810A50((double)alStack_40[0],param_2);
  return;
}

