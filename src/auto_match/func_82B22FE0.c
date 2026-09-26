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
extern int fn_82B20868();


bool fn_82B22FE0(undefined8 param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = fn_82B20868(param_2);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = (*(uint *)(*(int *)((-(uint)((*(uint *)(param_2 + 4) & 1) == 0) & *(uint *)(param_2 + 4)
                                ) + 0x10) + 8) & 0x3f80) == 16000;
  }
  return bVar2;
}

