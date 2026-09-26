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
extern int fn_82BE5240();
extern int fn_82BE52B8();
extern int fn_82BE56B0();
extern int fn_82BEB628();


undefined8 fn_82BEAC00(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((param_2 & 0xffffffff) == 0) || (*(int *)(param_1 + 0x40) == 0)) {
    fn_82BE5240(param_1,0x130,0xffffffff820ead08,*(undefined4 *)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar1 = fn_82BE56B0(0xc);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_82BEB628(uVar1,param_2);
    }
    if (iVar2 == 0) {
      uVar3 = 0x65;
      uVar4 = 0xffffffff820ead74;
    }
    else {
      iVar2 = fn_82BE52B8(*(undefined4 *)(param_1 + 0x40));
      if (iVar2 != 0) {
        return 1;
      }
      uVar3 = 100;
      uVar4 = 0xffffffff820ead4c;
    }
    fn_82BE5240(param_1,uVar3,uVar4);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return 0;
}

