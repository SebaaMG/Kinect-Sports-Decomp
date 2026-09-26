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
extern unsigned int lbl_83217324;
extern unsigned int lbl_83217328;
extern unsigned int lbl_83217334;


undefined8 fn_829CB7D8(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar2 = KfAcquireSpinLock(0xffffffff8321732c);
  uVar4 = 1;
  if (param_1 != 0) {
    lbl_83217334 = 1;
  }
  piVar3 = &lbl_83217324;
  lVar5 = 2;
  do {
    iVar1 = *piVar3;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x34) == 0)) {
      *(undefined4 *)(iVar1 + 0x34) = 1;
    }
    piVar3 = piVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  sync(0);
  if ((lbl_83217324 == 0) && (lbl_83217328 == 0)) {
    uVar4 = 0;
  }
  KfReleaseSpinLock(0xffffffff8321732c,uVar2);
  return uVar4;
}

