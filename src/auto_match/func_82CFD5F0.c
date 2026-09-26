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
extern int fn_82CEB1A8();
extern unsigned int lbl_8317F688;


longlong fn_82CFD5F0(int param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = -1;
  switch(*(byte *)(param_1 + 0xc)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x20:
  case 0x21:
    iVar2 = (int)*(short *)(param_1 + 0xe);
    if (*(short *)(param_1 + 0xe) == 0) {
      iVar2 = 1;
    }
    lVar3 = (longlong)(int)*(short *)(&lbl_8317F688 + (uint)*(byte *)(param_1 + 0xc) * 0xc) *
            (longlong)iVar2;
    break;
  case 0x18:
  case 0x1f:
    iVar2 = (int)*(short *)(param_1 + 0xe);
    if (*(short *)(param_1 + 0xe) == 0) {
      iVar2 = 1;
    }
    lVar3 = (longlong)(int)*(short *)(&lbl_8317F688 + (uint)*(byte *)(param_1 + 0xd) * 0xc) *
            (longlong)iVar2;
    break;
  case 0x19:
    iVar2 = (int)*(short *)(param_1 + 0xe);
    if (*(short *)(param_1 + 0xe) == 0) {
      iVar2 = 1;
    }
    iVar1 = fn_82CEB1A8(*(undefined4 *)(param_1 + 4));
    lVar3 = (longlong)iVar1 * (longlong)iVar2;
  }
  return lVar3;
}

