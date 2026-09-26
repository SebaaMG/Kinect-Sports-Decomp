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


int fn_829854A0(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_82930318(0x50);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82933088(uVar1,0,0,0,0,1,param_2);
  }
  if (iVar2 != 0) {
    uVar1 = fn_82930318(0x28);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82931D88(uVar1,3,0x16,0,1,1,0x200);
    }
    *(int *)(iVar2 + 0x10) = iVar3;
    if (iVar3 != 0) {
      uVar1 = fn_82930318(0x40);
      if ((uVar1 & 0xffffffff) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = fn_82933578(uVar1,5,0,0,param_2);
      }
      *(int *)(iVar2 + 0x20) = iVar3;
      if (iVar3 != 0) {
        uVar1 = fn_82930318(0x14);
        if ((uVar1 & 0xffffffff) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = fn_829304E0(uVar1,*(undefined4 *)(iVar2 + 0x20),0,0xffffffff8204e390);
        }
        if (iVar3 != 0) {
          *(int *)(iVar2 + 0x20) = iVar3;
          fn_82983380(param_1,iVar2);
          return iVar2;
        }
      }
    }
  }
  return 0;
}

