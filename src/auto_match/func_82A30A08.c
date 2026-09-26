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
extern int fn_82A30780();
extern int fn_82A30800();
extern int fn_82A30870();
extern int fn_82A30910();


undefined8 fn_82A30A08(undefined8 param_1,int param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  if (param_3 < 0xfffff001) {
    uVar2 = 0;
    uVar1 = param_3 + 0xfff & 0xfffff000;
    if (*(uint *)(param_2 + 0x14) != uVar1) {
      if ((((*(byte *)(param_2 + 0x35) & 4) != 0) || ((*(byte *)(param_2 + 0x35) & 0x20) != 0)) ||
         (uVar2 = fn_82A30780(param_1,param_2), -1 < (int)uVar2)) {
        if (uVar1 == 0) {
          uVar2 = fn_82A30800(param_1,param_2);
        }
        else if (*(uint *)(param_2 + 0x14) < uVar1) {
          uVar2 = fn_82A30910(param_1,param_2,uVar1);
        }
        else if ((param_4 == 0) && (uVar1 < *(uint *)(param_2 + 0x14))) {
          uVar2 = fn_82A30870(param_1,param_2,uVar1);
        }
        else {
          uVar2 = 0;
        }
      }
    }
  }
  else {
    uVar2 = 0xffffffffc000007f;
  }
  return uVar2;
}

