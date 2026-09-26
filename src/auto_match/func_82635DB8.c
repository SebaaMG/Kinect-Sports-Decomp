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
extern unsigned int *auStack_10;
extern int fn_82637238();


void fn_82635DB8(int *param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint auStack_10 [4];
  
  iVar1 = *param_1;
  if ((*(uint *)(param_1[iVar1 * 0x9b4 + 4] + 0x4db4) >> 2 & 1) == 0) {
    auStack_10[0] = ((param_3 & 0xf) << 1 | param_2 & 1) << 8 | param_4 & 0xff;
    fn_82637238(param_1 + iVar1 * 0x9b4 + 0x4a,auStack_10,param_1 + iVar1 * 0x9b4 + 0x18);
  }
  return;
}

