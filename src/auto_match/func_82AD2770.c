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
extern int fn_82AA66A8();
extern int fn_82ABDAA0();
extern int fn_82AC65F0();


int fn_82AD2770(undefined8 param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  char cVar4;
  
  iVar3 = *(int *)(param_2 + 0x70);
  if ((*(uint *)(iVar3 + 0x30) >> 0x16 & 1) != 0) {
LAB_82ad27a8:
    do {
      iVar3 = *(int *)(iVar3 + 0x50);
      if (iVar3 != 0) {
        if ((*(uint *)(iVar3 + 0x30) & 0x400000) != 0) goto LAB_82ad27a8;
      }
    } while ((*(uint *)(iVar3 + 0x30) >> 0x16 & 1) != 0);
    *(int *)(param_2 + 0x70) = iVar3;
  }
  iVar3 = *(int *)(param_2 + 0x70);
  if ((((*(uint *)(iVar3 + 0x24) & 1) == 0) &&
      (uVar1 = *(uint *)(iVar3 + 0x20) & 0xfffffffe, uVar1 != 0x28)) &&
     (uVar1 = *(uint *)(uVar1 - 0x20), (uVar1 >> 0x11 & 1) != 0)) {
    uVar1 = uVar1 >> 7 & 0x7f;
    if ((((uVar1 == 0x56) || (uVar1 == 0x57)) ||
        ((uVar1 == 0x59 || ((uVar1 == 0x5a || (uVar1 == 0x54)))))) || (bVar2 = false, uVar1 == 0x55)
       ) {
      bVar2 = true;
    }
    if (bVar2) {
      iVar3 = fn_82AC65F0();
      iVar3 = *(int *)(iVar3 + 0xc);
      goto LAB_82ad2844;
    }
  }
  iVar3 = *(int *)(iVar3 + 0x60);
LAB_82ad2844:
  if ((iVar3 != 0) && (cVar4 = fn_82ABDAA0(iVar3), cVar4 != '\0')) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_1,0x12c0);
}

