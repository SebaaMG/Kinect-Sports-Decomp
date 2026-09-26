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
extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_8269A608();
extern int fn_826BD8C8();


void fn_82682748(undefined8 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 4) & 0x8f;
  if (uVar1 == 4) {
    uVar1 = param_3[2];
    param_3[2] = (uint)((ulonglong)uVar1 - 1);
    if ((ulonglong)uVar1 - 1 == 0) {
      fn_826944C8(param_3);
    }
  }
  else if (uVar1 == 5) {
    fn_8267C4F0(param_3 + -3);
  }
  else if (5 < uVar1) {
    if (uVar1 < 8) {
      fn_826BD8C8(param_3);
      fn_826824B0();
    }
    else if (uVar1 == 8) {
      uVar1 = *param_3;
      *param_3 = (uint)((ulonglong)uVar1 - 1);
      if ((longlong)((ulonglong)uVar1 - 1) < 1) {
        fn_8269A608(param_3);
        fn_8267BE38(param_3);
      }
    }
  }
  return;
}

