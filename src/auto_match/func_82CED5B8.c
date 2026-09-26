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
extern int fn_82CE5338();
extern int fn_82CE5410();
extern unsigned int lbl_8323B430;


void fn_82CED5B8(uint *param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xfffffffe) != 0) {
    if ((uVar1 & 1) == 1) {
      iVar2 = fn_82CE5410();
      fn_82CE5338(*(undefined4 *)(iVar2 + 0x10),(ulonglong)uVar1 - 1);
    }
    *param_1 = lbl_8323B430;
  }
  return;
}

