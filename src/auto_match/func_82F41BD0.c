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
extern int fn_82A3F758();
extern int fn_82F41B70();
extern int fn_82F64CE0();


undefined8 fn_82F41BD0(int param_1,undefined8 param_2)

{
  int iVar2;
  undefined8 uVar1;
  
  iVar2 = fn_82F64CE0(param_2);
  if (iVar2 + 1U < 0x10000) {
    uVar1 = fn_82F41B70(param_1,iVar2 + 1U & 0xffff);
    if (-1 < (int)uVar1) {
      if ((ulonglong)*(ushort *)(param_1 + 0x16) < 0x80000000) {
        uVar1 = fn_82A3F758(*(undefined4 *)(param_1 + 0x18),(ulonglong)*(ushort *)(param_1 + 0x16),
                             param_2);
      }
      else {
        uVar1 = 0xffffffff80070057;
      }
    }
  }
  else {
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}

