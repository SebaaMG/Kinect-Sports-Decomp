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
extern int fn_82930458();
extern int fn_829304E0();
extern int fn_82980D80();
extern int fn_829843D0();


undefined8 fn_82986B98(int param_1,ulonglong param_2)

{
  ulonglong uVar1;
  int iVar3;
  undefined8 uVar2;
  int iVar4;
  
  uVar1 = fn_82930318(0x14);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_829304E0(uVar1,0,*(undefined4 *)(param_1 + 0x18),0xffffffff8204e3c0);
  }
  if (iVar3 == 0) {
LAB_82986be8:
    fn_82980D80(param_1,0);
    uVar2 = 0xffffffff8007000e;
  }
  else {
    *(int *)(param_1 + 0x18) = iVar3;
    if ((param_2 & 0xffffffff) != 0) {
      iVar4 = fn_82930458(param_2);
      *(int *)(iVar3 + 8) = iVar4;
      if (iVar4 == 0) goto LAB_82986be8;
      uVar2 = fn_829843D0(param_1,iVar4,*(undefined4 *)(iVar4 + 0x18));
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *(uint *)(iVar4 + 0x10) = *(uint *)(iVar4 + 0x10) & 0xfffff1ff;
    }
    uVar2 = 0;
  }
  return uVar2;
}

