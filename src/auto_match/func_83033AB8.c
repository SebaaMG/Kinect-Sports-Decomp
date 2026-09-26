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
extern unsigned int *auStack_20;
extern int fn_83032B08();
extern int fn_83033EA8();
extern int fn_830341D0();


undefined8 fn_83033AB8(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_20 [2];
  
  uVar3 = (undefined4)param_2;
  auStack_20[0] = uVar3;
  if ((param_2 & 0xffffffff) != 0) {
    fn_83032B08(param_2);
  }
  piVar1 = (int *)fn_83033EA8(param_1 + 0x88,auStack_20);
  if (piVar1 == (int *)0x0) {
    auStack_20[0] = uVar3;
    if ((param_2 & 0xffffffff) != 0) {
      fn_83032B08(param_2);
    }
    iVar2 = fn_830341D0(param_1 + 0x88,auStack_20,1);
    if (iVar2 == 0) {
      return 2;
    }
  }
  else {
    *piVar1 = *piVar1 + 1;
  }
  return 1;
}

