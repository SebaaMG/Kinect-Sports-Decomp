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
extern int fn_82F242D8();
extern unsigned int lbl_8324E3B0;


void fn_82F0EB98(int param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = (longlong)(*(int *)(param_1 + 0x568) >> 1) * (longlong)*(int *)(param_1 + 0x6de4);
  fn_82F242D8(param_1,(longlong)(*(int *)(param_1 + 0x564) >> 1) *
                            (longlong)*(int *)(param_1 + 0x6de4) +
                            (ulonglong)*(uint *)(param_1 + 0x4a94),
                    (ulonglong)*(uint *)(param_1 + 0x4a98) + lVar1,
                    (ulonglong)*(uint *)(param_1 + 0x4a9c) + lVar1,lbl_8324E3B0,
                    (ulonglong)*(uint *)(param_1 + 0x658) - 1,*(undefined4 *)(param_2 + 4),1);
  return;
}

