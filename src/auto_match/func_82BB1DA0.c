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
extern int fn_82AB15D0();
extern int fn_82BB1B38();


ulonglong fn_82BB1DA0(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = fn_82BB1B38(*(undefined4 *)(param_1 + 0x858));
  if ((uint)uVar2 == 0xffffffff) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfc1c,0xffffffff820dfc28,0x226);
  }
  iVar1 = ((int)((uVar2 & 0xffffffff) >> 5) + 2) * 4;
  *(uint *)(iVar1 + *(int *)(param_1 + 0x858)) =
       *(uint *)(iVar1 + *(int *)(param_1 + 0x858)) & ~(1 << ((uint)uVar2 & 0x1f));
  return uVar2;
}

