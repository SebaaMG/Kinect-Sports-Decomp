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
extern int fn_8265C940();
extern int fn_82F691F0();


undefined8 fn_82ED41C8(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((*(int *)(iVar1 + 0x588) < 3) || (0x15 < *(int *)(iVar1 + 0x588))) {
    return 0;
  }
  uVar2 = (ulonglong)*(uint *)(param_1 + 0x3c);
  if (uVar2 == 0) {
    iVar3 = (int)(((ulonglong)*(uint *)(iVar1 + 0x2d0) + 7 & 0xffffffff) >> 3);
    *(int *)(param_1 + 0x40) = iVar3;
    iVar4 = *(int *)(iVar1 + 0x2d4);
    if (*(int *)(iVar1 + 0x7b38) != 0) {
      iVar4 = iVar4 << 1;
    }
    uVar2 = fn_8265C940((longlong)iVar3 * (longlong)iVar4,0x248c8000);
    *(int *)(param_1 + 0x3c) = (int)uVar2;
    if ((uVar2 & 0xffffffff) == 0) {
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,(longlong)*(int *)(*(int *)(param_1 + 0x38) + 0x2d4) *
                       (longlong)*(int *)(param_1 + 0x40));
}

