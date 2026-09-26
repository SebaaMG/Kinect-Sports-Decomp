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
extern int fn_8265C990();
extern int fn_8291AF98();


longlong fn_8291C018(int param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 4);
  lVar2 = (ulonglong)uVar1 - 1;
  *(int *)(param_1 + 4) = (int)lVar2;
  if ((ulonglong)uVar1 == 1) {
    fn_8291AF98();
    fn_8265C990(param_1,0x24810000);
  }
  return lVar2;
}

