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
extern int fn_82930318();
extern int fn_829304E0();
extern int fn_82931D88();
extern int fn_82933088();
extern int fn_82933578();
extern int fn_82983380();


int fn_82985CA0(int param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_2 + 4) == 0x1d) {
    *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x1c) = 1;
    return param_2;
  }
  if (*(int *)(param_2 + 4) != 0x10) {
    return 0;
  }
  if (*(uint **)(param_2 + 0x30) == (uint *)0x0) {
    return 0;
  }
  if (*(uint *)(param_2 + 0x34) < 4) {
    return 0;
  }
  uVar1 = **(uint **)(param_2 + 0x30);
  if ((uVar1 & 0xffffff00) == 0x102a1100) {
    if ((uVar1 & 1) == 1) goto LAB_82985d4c;
    if ((uVar1 & 1) != 0) goto LAB_82985d28;
  }
  else {
LAB_82985d28:
    if ((uVar1 & 0xffff0000) == 0xfffe0000) {
LAB_82985d4c:
      uVar5 = 0x2b;
      goto LAB_82985d50;
    }
    if ((uVar1 & 0xffff0000) != 0xffff0000) {
      return 0;
    }
  }
  uVar5 = 0x2a;
LAB_82985d50:
  uVar2 = fn_82930318(0x50);
  if ((uVar2 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_82933088(uVar2,0,0,0,0,1,param_2 + 0x10);
  }
  if (iVar3 != 0) {
    uVar2 = fn_82930318(0x28);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_82931D88(uVar2,3,uVar5,0,1,1,0x200);
    }
    *(int *)(iVar3 + 0x10) = iVar4;
    if (iVar4 != 0) {
      uVar2 = fn_82930318(0x40);
      if ((uVar2 & 0xffffffff) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_82933578(uVar2,5,*(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34)
                             ,param_2 + 0x10);
      }
      *(int *)(iVar3 + 0x20) = iVar4;
      if (iVar4 != 0) {
        uVar2 = fn_82930318(0x14);
        if ((uVar2 & 0xffffffff) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = fn_829304E0(uVar2,*(undefined4 *)(iVar3 + 0x20),0,0xffffffff8204e390);
        }
        if (iVar4 != 0) {
          *(int *)(iVar3 + 0x20) = iVar4;
          fn_82983380(param_1,iVar3);
          return iVar3;
        }
      }
    }
  }
  return 0;
}

