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
extern int fn_825359D8();
extern int fn_82569980();


void fn_8260E1A8(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined4 auStack_20 [4];
  
  iVar1 = fn_82569980(param_1,*(uint *)(param_3 + 0x1c) & 0xff);
  if ((param_5 == 0) && (iVar1 != -1)) {
    auStack_20[0] = *(undefined4 *)(param_3 + 0x10);
    fn_825359D8(auStack_20,
                      *(undefined4 *)(*(int *)((int)param_1 + 0xd8) + iVar1 * 0x30 + 0x10),0,
                      *(undefined4 *)(**(int **)((int)param_1 + 0x60) + 0x84c),0xffffffff83296bc0,
                      0xffffffff83296bd0);
  }
  return;
}

