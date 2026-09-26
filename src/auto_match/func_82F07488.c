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
extern int fn_82ED3678();
extern int fn_82ED3BB0();
extern int fn_82F65350();


void fn_82F07488(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  
  *(int *)(param_2 + 0x60) = *(int *)(param_1 + 0x588) * 2 + *(int *)(param_1 + 0x590) + -1;
  *(undefined4 *)(param_2 + 100) = *(undefined4 *)(param_1 + 0x588);
  *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x58c);
  if (*(int *)(param_1 + 0x97c) == 0) goto LAB_82f07624;
  if (*(uint *)(param_1 + 0x984) == 0) {
    if (*(char *)(param_1 + 0x980) == '\x01') {
      if ((*(char *)(param_1 + 0x7b30) == '\0') || (bVar5 = true, *(int *)(param_1 + 0xaf0) != 0)) {
        bVar5 = false;
      }
      if (((*(byte *)(param_1 + 0x7b31) == 0) || (*(int *)(param_1 + 0xaf0) != 1)) ||
         (bVar1 = true, *(byte *)(param_1 + 0x7b32) < *(byte *)(param_1 + 0x7b31))) {
        bVar1 = false;
      }
      if ((bVar5) || (bVar1)) {
        iVar3 = fn_82ED3BB0(*(undefined4 *)(param_1 + 0x7b40),param_4,param_3);
        if (iVar3 == 0) goto LAB_82f07624;
        *(uint *)(param_2 + 0x60) = (uint)*(byte *)(param_1 + 0x981) * 2 + -1;
        uVar4 = (uint)*(byte *)(param_1 + 0x981);
        *(uint *)(param_2 + 100) = (uint)*(byte *)(param_1 + 0x981);
        goto LAB_82f07620;
      }
      if (*(int *)(param_1 + 0x1a74) == 0) goto LAB_82f07624;
      uVar2 = fn_82F65350();
      if ((uVar2 & 1) == 0) {
        uVar6 = (uint)*(byte *)(param_1 + 0x981);
      }
      else {
        uVar6 = *(uint *)(param_1 + 0x588);
      }
    }
    else {
      if (*(int *)(param_1 + 0x1a74) == 0) goto LAB_82f07624;
      uVar2 = fn_82F65350();
      if ((uVar2 & 0x1f) == 0) {
        uVar6 = 1;
      }
      else {
        uVar6 = fn_82F65350();
        uVar6 = uVar6 & 0x1f;
      }
    }
    *(uint *)(param_2 + 100) = uVar6;
    uVar4 = *(uint *)(param_2 + 100);
    *(uint *)(param_2 + 0x60) = uVar6 * 2 + *(int *)(param_1 + 0x590) + -1;
  }
  else {
    if ((*(uint *)(param_2 + 0x78) & *(uint *)(param_1 + 0x984)) == 0) goto LAB_82f07624;
    *(uint *)(param_2 + 0x60) = (uint)*(byte *)(param_1 + 0x981) * 2 + -1;
    uVar4 = (uint)*(byte *)(param_1 + 0x981);
    *(uint *)(param_2 + 100) = (uint)*(byte *)(param_1 + 0x981);
  }
LAB_82f07620:
  *(uint *)(param_2 + 0x68) = uVar4;
LAB_82f07624:
  if ((((*(uint *)(param_1 + 0x7b2c) & 0x20) != 0) && (*(int *)(param_1 + 0x6d54) == 0)) &&
     ((*(int *)(param_1 + 0xaf0) != 2 && (*(int *)(param_1 + 0xb08) == 0)))) {
    iVar3 = *(int *)(param_1 + 0x7784);
    if (iVar3 == 0) {
      iVar3 = fn_82ED3678(*(undefined4 *)(param_1 + 0x7b40),param_4,param_3,0,0);
      if (iVar3 == 1) {
        *(undefined4 *)(param_1 + 0x7b2c) = 0x20;
        if (*(int *)(param_1 + 0xaf0) == 0) {
          return;
        }
        if (*(int *)(param_2 + 0x60) < 7) {
          return;
        }
        *(undefined4 *)(param_1 + 0x7b2c) = 0x2b;
        return;
      }
      iVar3 = 0x20;
    }
    *(int *)(param_1 + 0x7b2c) = iVar3;
  }
  return;
}

