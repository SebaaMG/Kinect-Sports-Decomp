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


undefined8
fn_82CE38F8(int param_1,uint param_2,ulonglong param_3,ulonglong param_4,undefined8 param_5,
             int param_6,uint param_7)

{
  ulonglong uVar1;
  uint *puVar2;
  
  if ((param_2 < 0x40) && ((param_3 & 0xffffffff) < 4)) {
    puVar2 = (uint *)(param_2 * 0x10 + param_1);
    if ((*puVar2 & 0x40000000) != 0) {
      return 0xffffffff80004005;
    }
    if ((param_6 != 0) && ((*(byte *)(param_6 + 1) & 1) != 0)) {
      uVar1 = 1L << (param_3 & 0x7f);
      param_4 = param_4 / uVar1;
      trapDoubleWordImmediate(6,uVar1,0);
    }
    puVar2[1] = param_7;
    *(ulonglong *)(puVar2 + 2) = param_4;
    *puVar2 = (uint)param_3 & 3 | 0x80000000;
    return 0;
  }
  return 0xffffffff80070057;
}

