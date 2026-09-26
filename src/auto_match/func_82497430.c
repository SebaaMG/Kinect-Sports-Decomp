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
extern int fn_824974E8();


/* WARNING: Removing unreachable block (ram,0x82497474) */

void fn_82497430(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_20 [2];
  
  auStack_20[0] = *(undefined4 *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    for (iVar2 = iVar1; iVar2 != *(int *)(param_1 + 0x14); iVar2 = iVar2 + 4) {
    }
    *(int *)(param_1 + 0x14) = iVar1;
  }
  fn_824974E8((undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x10),param_2 << 1,
                    auStack_20);
  *(int *)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x20) = param_2 + -1;
  return;
}

