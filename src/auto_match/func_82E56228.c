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
extern unsigned int *auStack_40;
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E561A8();
extern int fn_82F68CC0();


ulonglong fn_82E56228(int param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  int *piVar3;
  longlong lVar2;
  undefined8 in_r8;
  ulonglong uVar4;
  uint auStack_40 [16];
  
  uVar4 = 0;
  auStack_40[0] = 0;
  if (param_2 == (undefined4 *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  fn_82E50CB8(param_1 + 8);
  uVar1 = fn_82E50BE8(0x68,0,0,0,0);
  if ((uVar1 & 0xffffffff) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_82E561A8(uVar1,auStack_40);
    uVar4 = (ulonglong)auStack_40[0];
  }
  if (piVar3 == (int *)0x0) {
    uVar4 = 0xffffffff8007000e;
  }
  else {
    if (-1 < (int)uVar4) {
      piVar3[0x11] = *(int *)(param_1 + 0x44);
      piVar3[0x12] = *(int *)(param_1 + 0x48);
      piVar3[0x13] = *(int *)(param_1 + 0x4c);
      piVar3[0x14] = *(int *)(param_1 + 0x50);
      piVar3[0x15] = *(int *)(param_1 + 0x54);
      piVar3[0x16] = *(int *)(param_1 + 0x58);
      piVar3[0x17] = *(int *)(param_1 + 0x5c);
      piVar3[0x18] = *(int *)(param_1 + 0x5c);
      lVar2 = ((ulonglong)*(uint *)(param_1 + 0x5c) & 0x7fffffff) << 1;
      if (0x7fffffff < *(uint *)(param_1 + 0x5c)) {
        lVar2 = -1;
      }
      uVar4 = fn_82E50BE8(lVar2,0,0,0,0,in_r8,piVar3 + 0x11);
      piVar3[0x19] = (int)uVar4;
      if ((uVar4 & 0xffffffff) == 0) {
        uVar4 = 0xffffffff8007000e;
      }
      else {
        fn_82F68CC0(uVar4,*(undefined4 *)(param_1 + 100),*(int *)(param_1 + 0x5c) << 1);
        uVar4 = (**(code **)*piVar3)(piVar3,0xffffffff8215ed78,param_2);
        if (-1 < (longlong)uVar4) goto LAB_82e5639c;
      }
    }
    (**(code **)(*piVar3 + 0x2c))(piVar3,1);
  }
LAB_82e5639c:
  fn_82E50F10(param_1 + 8);
  return uVar4;
}

