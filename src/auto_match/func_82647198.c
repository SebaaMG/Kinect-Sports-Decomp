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
extern int fn_8265C990();


undefined8 fn_82647198(int param_1)

{
  int iVar1;
  int iVar3;
  undefined8 uVar2;
  longlong lVar4;
  
  iVar3 = fn_8265C940(0x2000,0xffffffffb5800000);
  *(int *)(param_1 + 0x5ea8) = iVar3;
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = fn_8265C940(0x4ec,0x64800000);
    *(int *)(param_1 + 0x5eb0) = iVar3;
    if (iVar3 == 0) {
      fn_8265C990(*(undefined4 *)(param_1 + 0x5ea8),0xffffffffb1800000);
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x5ea8) = 0;
    }
    else {
      iVar3 = 0;
      lVar4 = 0x3f;
      do {
        *(undefined4 *)(iVar3 + *(int *)(param_1 + 0x5ea8)) = 0x80000000;
        iVar1 = iVar3 + *(int *)(param_1 + 0x5ea8);
        iVar3 = iVar3 + 0x80;
        *(undefined4 *)(iVar1 + 4) = 0xbadd00d;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      uVar2 = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x5ea8) + 0x1f80) = 0x80000000;
    }
  }
  return uVar2;
}

