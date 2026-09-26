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
extern int fn_827BA7C0();


void fn_827BA890(int param_1,short param_2,short param_3)

{
  ulonglong uVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  short sStack_20;
  short sStack_1e;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x14) - 1;
  psVar2 = (short *)(*(int *)(((uint)((uVar1 & 0xffffffff) >> 4) & 0xffffffc) +
                             *(int *)(param_1 + 0x20)) + ((uint)((uVar1 & 0xffffffff) << 2) & 0xfc))
  ;
  if ((param_2 != *psVar2) || (param_3 != psVar2[1])) {
    sStack_20 = param_2;
    sStack_1e = param_3;
    fn_827BA7C0(param_1 + 0x14,&sStack_20);
    uVar3 = *(int *)(param_1 + 4) - 1;
    iVar4 = *(int *)((uVar3 >> 2 & 0x3ffffffc) + *(int *)(param_1 + 0x10)) + (uVar3 * 8 & 0x78);
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
  }
  return;
}

