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
extern int fn_82681F88();
extern int fn_826820F0();
extern int fn_826824B0();
extern int fn_826BE530();
extern int fn_826BE6C0();
extern int fn_826BE840();
extern int fn_826BEDE8();
extern int fn_826BEF40();
extern int fn_826C30F8();
extern int fn_826C31F0();
extern int fn_826C3290();
extern int fn_826C3400();
extern int fn_826C3448();


void fn_82721578(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    fn_826C3400(param_1 + 0x48);
    if (*(int *)(param_1 + 0x38) != 0) {
      fn_826824B0();
    }
    fn_826BEDE8(param_1);
    return;
  }
  if (param_2 == 1) {
    fn_826C31F0(param_1 + 0x48);
    puVar1 = *(undefined4 **)(param_1 + 0x38);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = puVar1[2] - 1;
      puVar1[2] = uVar2;
      if ((uVar2 & 0x70000000) != 0x10000000) {
        puVar1[2] = uVar2 & 0x8fffffff | 0x10000000;
        (**(code **)*puVar1)(puVar1,1);
      }
    }
    fn_826BE530(param_1);
    return;
  }
  if (param_2 < 3) {
    fn_826C30F8(param_1 + 0x48);
    puVar1 = *(undefined4 **)(param_1 + 0x38);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = puVar1[2] + 1;
      puVar1[2] = uVar2;
      if ((uVar2 & 0x70000000) != 0) {
        puVar1[2] = uVar2 & 0x8fffffff;
        (**(code **)*puVar1)(puVar1,2);
      }
    }
    fn_826BE6C0(param_1);
    return;
  }
  if (param_2 != 3) {
    if (4 < param_2) {
      return;
    }
    fn_826C3290(param_1 + 0x48);
    if (*(int *)(param_1 + 0x38) != 0) {
      fn_82681F88();
    }
    fn_826BE840(param_1);
    return;
  }
  fn_826C3448(param_1 + 0x48);
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_826820F0();
  }
  fn_826BEF40(param_1);
  return;
}

