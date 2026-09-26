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
extern int fn_8267C8D8();
extern int fn_8267CF60();
extern int fn_8267D9C0();


bool fn_826D74E8(int param_1,uint param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = (ulonglong)*(uint *)(param_1 + 0x80) + 8;
  fn_8267C8D8(lVar2);
  while (((*(uint *)(param_1 + 0x7c) & 0xf) < 3 && ((*(uint *)(param_1 + 0x7c) & param_2) == 0))) {
    fn_8267CF60((ulonglong)*(uint *)(param_1 + 0x80) + 0x1c,
                 (ulonglong)*(uint *)(param_1 + 0x80) + 8,0xffffffffffffffff);
  }
  uVar1 = *(uint *)(param_1 + 0x7c);
  fn_8267D9C0(lVar2);
  return (uVar1 & param_2) != 0;
}

