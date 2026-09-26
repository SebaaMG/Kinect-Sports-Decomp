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
extern int fn_82C10F40();


ulonglong fn_82C237D0(int param_1,undefined8 param_2,short param_3,undefined2 *param_4)

{
  int iVar1;
  ulonglong uVar2;
  int aiStack_20 [2];
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *param_4 = 0;
  aiStack_20[0] = 0;
  uVar2 = fn_82C10F40(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x80),param_2,aiStack_20);
  if ((uVar2 & 0xffffffff) == 0x80500016) {
    uVar2 = 0;
  }
  else {
    *param_4 = *(undefined2 *)(param_3 * 0x1c + *(int *)(aiStack_20[0] + 0x50) + 0x10);
  }
  return uVar2;
}

