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
extern int fn_82645688();
extern int fn_826458F8();
extern int fn_82653160();
extern int fn_82653408();


undefined8 fn_826474B8(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = fn_826458F8(param_1,param_2 + 0x48);
  if ((int)uVar1 == 0) {
    fn_82645688(param_1);
    fn_82653408(param_1);
    iVar2 = fn_82653160(param_1,param_2);
    if (iVar2 == 0) {
      fn_82653408(param_1);
      uVar1 = 0xffffffff8007000e;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

