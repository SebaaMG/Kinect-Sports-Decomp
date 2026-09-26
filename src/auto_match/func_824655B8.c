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
extern int fn_82270B70();
extern int fn_82F68CC0();
extern unsigned int lbl_831D0FD4;
extern unsigned int lbl_832765C0;


void fn_824655B8(uint *param_1,uint param_2)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  if (*param_1 != param_2) {
    *param_1 = param_2;
    if (param_2 == 0) {
      dVar3 = (double)lbl_831D0FD4;
      iVar1 = fn_82270B70();
      *(float *)(iVar1 + 0x124) = (float)dVar3;
      uVar2 = 0xffffffff832764c8;
      fn_82F68CC0(iVar1 + 0x144,0xffffffff832764a8,0x1c);
      iVar1 = iVar1 + 0x1c8;
    }
    else if (param_2 == 1) {
      dVar3 = (double)lbl_832765C0;
      iVar1 = fn_82270B70();
      *(float *)(iVar1 + 0x124) = (float)dVar3;
      fn_82F68CC0(iVar1 + 0x144,0xffffffff8327662c,0x1c);
      iVar1 = iVar1 + 0x1c8;
      uVar2 = 0xffffffff832765c4;
    }
    else {
      if (2 < param_2) {
        return;
      }
      dVar3 = (double)lbl_832765C0;
      iVar1 = fn_82270B70();
      *(float *)(iVar1 + 0x124) = (float)dVar3;
      fn_82F68CC0(iVar1 + 0x144,0xffffffff832766b0,0x1c);
      iVar1 = iVar1 + 0x1c8;
      uVar2 = 0xffffffff83276648;
    }
    fn_82F68CC0(iVar1,uVar2,0x68);
  }
  return;
}

