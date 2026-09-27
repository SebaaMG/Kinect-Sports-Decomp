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
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern float lbl_82006848;


undefined8 fn_82C75410(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x5da8);
  if (iVar5 < 0) {
    iVar5 = 0;
    *(undefined4 *)(param_1 + 0x5da8) = 0;
  }
  iVar4 = *(int *)(param_1 + 0xe74);
  if ((-1 < iVar4) && (iVar4 < 5)) {
    *(int *)(param_1 + 0x3cfc) = iVar4;
    return 0;
  }
  if ((-1 < iVar5) && (iVar5 < 5)) {
code_r0x82c7557c:
    *(int *)(param_1 + 0x3cfc) = iVar5;
    return 0;
  }
  iVar5 = 0x1e;
  if (0 < *(int *)(param_1 + 0xe80)) {
    iVar5 = *(int *)(param_1 + 0xe80);
  }
  iVar4 = *(int *)(param_1 + 0xe84);
  if (iVar4 < 1) {
    iVar4 = 500;
  }
  iVar2 = *(int *)(param_1 + 0x5dac);
  if (((0 < iVar2) && (99 < iVar2)) && (iVar2 < 0x186a1)) {
    uVar1 = (uint)(SQRT((float)(longlong)iVar4) * (float)(longlong)(iVar5 * param_2 * param_3) *
                  lbl_82006848);
    uVar3 = iVar2 * 10000 + ((int)uVar1 >> 1);
    trapWord(6,(ulonglong)uVar1,0);
    iVar5 = (int)uVar3 / (int)uVar1;
    trapWord(5,(ulonglong)uVar1 &
               ~((((ulonglong)uVar3 & 0x7fffffff) << 1 | (ulonglong)(uVar3 >> 0x1f)) - 1),0xffff);
    if (*(int *)(param_1 + 0x3d14) == 0) {
      iVar5 = iVar5 + -0x32;
    }
    iVar5 = iVar5 + -100;
    if (0x77 < iVar5) {
      *(undefined4 *)(param_1 + 0x3cfc) = 4;
      return 0;
    }
    if (0x59 < iVar5) {
      *(undefined4 *)(param_1 + 0x3cfc) = 3;
      return 0;
    }
    if (0x40 < iVar5) {
      *(undefined4 *)(param_1 + 0x3cfc) = 2;
      return 0;
    }
    if (0x29 < iVar5) {
      iVar5 = 1;
      goto code_r0x82c7557c;
    }
  }
  *(undefined4 *)(param_1 + 0x3cfc) = 0;
  return 0;
}

