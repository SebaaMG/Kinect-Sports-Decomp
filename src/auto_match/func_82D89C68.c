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
extern int fn_82D907E8();
extern int fn_82D92868();
extern unsigned int lbl_82134508;


void fn_82D89C68(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if (iVar1 == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = *(byte *)(iVar1 + 0x26) >> 4 & 3;
  }
  if (bVar5 != 0) {
    if (((*(byte *)(iVar1 + 0x25) & 0x30) != 0) || ((*(byte *)(iVar1 + 0x25) & 0xc0) != 0)) {
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xb4);
      *(undefined4 *)(*(int *)(param_1 + 8) + 0xb4) = 0;
      *(byte *)(*(int *)(param_1 + 0xcc) + 0x25) = *(byte *)(*(int *)(param_1 + 0xcc) + 0x25) & 0xcf
      ;
      *(byte *)(*(int *)(param_1 + 0xcc) + 0x25) =
           *(byte *)(*(int *)(param_1 + 0xcc) + 0x25) & 0x3f | 0x40;
      fn_82D92868(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xcc));
      *(undefined4 *)(*(int *)(param_1 + 8) + 0xb4) = uVar2;
    }
    uVar2 = lbl_82134508;
    iVar1 = *(int *)(param_1 + 0xcc);
    iVar6 = 0;
    if (0 < *(int *)(iVar1 + 0x4c)) {
      piVar4 = (int *)(*(int *)(iVar1 + 0x48) + -4);
      do {
        piVar4 = piVar4 + 1;
        iVar3 = *piVar4;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(iVar3 + 0x1dc) = uVar2;
        *(undefined4 *)(iVar3 + 0x1ec) = uVar2;
      } while (iVar6 < *(int *)(iVar1 + 0x4c));
    }
    fn_82D907E8(*(undefined4 *)(param_1 + 8));
  }
  return;
}

