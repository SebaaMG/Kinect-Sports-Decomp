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
extern int fn_827A0BD0();
extern int fn_827A8510();


ulonglong fn_827A1630(int param_1,ulonglong param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar3;
  ulonglong uVar2;
  int *piVar4;
  
  fn_827A0BD0();
  piVar4 = (int *)(param_1 + 0x24);
  if (((piVar4 == (int *)0x0) || ((ulonglong)*(uint *)(param_1 + 0x28) <= (param_2 & 0xffffffff)))
     || (bVar1 = false, (int)param_2 < 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = 0;
    }
    uVar2 = 0xffffffffffffffff;
  }
  else {
    if (param_3 != (undefined1 *)0x0) {
      uVar3 = fn_827A8510(*(undefined4 *)((int)((param_2 & 0xffffffff) << 2) + *piVar4));
      *param_3 = uVar3;
    }
    piVar4 = *(int **)((int)((param_2 & 0xffffffff) << 2) + *piVar4);
    if (*piVar4 < 0) {
      uVar2 = (ulonglong)*(byte *)(piVar4 + 2);
    }
    else {
      uVar2 = (ulonglong)(uint)piVar4[8];
    }
  }
  return uVar2;
}

