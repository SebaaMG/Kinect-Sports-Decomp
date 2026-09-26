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
extern int fn_82E78690();
extern int fn_82F68CC0();


undefined8 fn_82E78E18(int param_1,uint param_2,undefined8 param_3)

{
  longlong lVar1;
  uint auStack_20 [4];
  
  if ((*(byte *)(param_1 + 0x238) & 2) != 0) {
    if (*(int *)(param_1 + 0x13c) != 0) {
      return 0xffffffffc00d3a9b;
    }
    param_2 = param_2 & 0xffff;
    if (*(ushort *)(param_1 + 0x146) <= param_2) {
      return 0xffffffff80070057;
    }
    if (param_2 < *(uint *)(param_1 + 0x1e0)) {
      lVar1 = fn_82E78690(param_1 + 0x178,param_2,auStack_20);
      auStack_20[0] = -(uint)(lVar1 != 0) & auStack_20[0];
      if (auStack_20[0] == 0) {
        return 0xffffffffc00d36bb;
      }
      fn_82F68CC0(param_3,auStack_20[0],0x125);
      return 0;
    }
  }
  return 0xffffffffc00d3a98;
}

