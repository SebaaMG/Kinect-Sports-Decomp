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
extern int fn_82273CD8();
extern int fn_82A1EFC0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_822A0E10(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  double dStack_28;
  
  if ((param_2 == 0) || (bVar2 = 1, *(int *)(param_1 + 0x30) == 0)) {
    bVar2 = 0;
  }
  uVar3 = *(uint *)(param_1 + 0x2c);
  if (uVar3 == 0) {
    if (*(int *)(param_1 + 0x34) == 0) {
      uVar3 = -(uint)bVar2 & 9;
    }
    else {
      uVar3 = (-(uint)bVar2 & 9) + 8;
    }
  }
  else if (uVar3 == 1) {
    uVar3 = (-(uint)bVar2 & 9) + 2;
  }
  else if (uVar3 < 3) {
    uVar3 = (-(uint)bVar2 & 9) + 3;
  }
  else {
    uVar3 = 0;
  }
  iVar1 = *(int *)(param_1 + 0xc);
  if (uVar3 == *(uint *)(iVar1 + 8)) {
    return;
  }
  if (*(uint *)(iVar1 + 8) != uVar3) {
    *(uint *)(iVar1 + 8) = uVar3;
    uStack_30 = 0;
    uStack_2c = 0;
    fn_82273CD8(&uStack_30,3);
    *(undefined2 *)(iVar1 + 0x9c) = 0;
    dStack_28 = (double)(longlong)(int)uVar3;
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(iVar1 + 0x14,0,0x20);
  }
  return;
}

