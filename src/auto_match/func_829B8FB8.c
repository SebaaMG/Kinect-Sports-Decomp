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
extern int fn_829B0F38();


bool fn_829B8FB8(int param_1)

{
  bool bVar1;
  byte bStack_20;
  byte bStack_1f;
  byte bStack_1e;
  byte bStack_1d;
  
  bVar1 = true;
  if ((*(byte *)(param_1 + 0x60c) & 0x20) == 0) {
    bVar1 = (*(uint *)(param_1 + 0x55c) & 0x800) == 0;
  }
  else if ((*(uint *)(param_1 + 0x55c) & 0x300) == 0x300) {
    bVar1 = false;
  }
  fn_829B0F38(param_1,&bStack_20,4);
  if (bVar1) {
    bVar1 = *(int *)(param_1 + 0x600) !=
            (((uint)bStack_20 * 0x100 + (uint)bStack_1f) * 0x100 + (uint)bStack_1e) * 0x100 +
            (uint)bStack_1d;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

