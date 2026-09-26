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
extern int fn_8278B2C8();
extern int fn_8278C0A8();
extern unsigned int lbl_82010C6C;


undefined4 * fn_8278C6C0(undefined4 *param_1,int param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  
  param_1[2] = 0;
  *param_1 = &lbl_82010C6C;
  param_1[1] = 1;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined2 *)((int)param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  if ((*(ushort *)(param_2 + 0x16) & 1) != 0) {
    uVar2 = *(ushort *)(param_3 + 0x16);
    if (((uVar2 & 1) != 0) && (((uVar2 ^ *(ushort *)(param_2 + 0x16)) & 0x600) == 0)) {
      *(ushort *)((int)param_1 + 0x16) = uVar2 & 0x600 | 1;
    }
  }
  if ((*(ushort *)(param_2 + 0x16) >> 7 & 1) != 0) {
    uVar2 = *(ushort *)(param_3 + 0x16);
    if ((uVar2 >> 7 & 1) != 0) {
      if (*(ushort *)(param_2 + 0x16) >> 0xf == (ushort)((uVar2 & 0x8000) != 0)) {
        if ((uVar2 & 0x8000) == 0) {
          uVar2 = *(ushort *)((int)param_1 + 0x16) & 0x7fff;
        }
        else {
          uVar2 = *(ushort *)((int)param_1 + 0x16) | 0x8000;
        }
        *(ushort *)((int)param_1 + 0x16) = uVar2;
        *(ushort *)((int)param_1 + 0x16) = uVar2 | 0x80;
      }
    }
  }
  if (((*(ushort *)(param_2 + 0x16) >> 1 & 1) != 0) && ((*(ushort *)(param_3 + 0x16) >> 1 & 1) != 0)
     ) {
    if (*(short *)(param_2 + 0xc) == *(short *)(param_3 + 0xc)) {
      *(short *)(param_1 + 3) = *(short *)(param_3 + 0xc);
      *(ushort *)((int)param_1 + 0x16) = *(ushort *)((int)param_1 + 0x16) | 2;
    }
  }
  if (((*(ushort *)(param_2 + 0x16) >> 2 & 1) != 0) && ((*(ushort *)(param_3 + 0x16) >> 2 & 1) != 0)
     ) {
    if (*(short *)(param_2 + 0xe) == *(short *)(param_3 + 0xe)) {
      *(short *)((int)param_1 + 0xe) = *(short *)(param_3 + 0xe);
      *(ushort *)((int)param_1 + 0x16) = *(ushort *)((int)param_1 + 0x16) | 4;
    }
  }
  if (((*(ushort *)(param_2 + 0x16) >> 3 & 1) != 0) && ((*(ushort *)(param_3 + 0x16) >> 3 & 1) != 0)
     ) {
    if (*(short *)(param_2 + 0x10) == *(short *)(param_3 + 0x10)) {
      *(short *)(param_1 + 4) = *(short *)(param_3 + 0x10);
      *(ushort *)((int)param_1 + 0x16) = *(ushort *)((int)param_1 + 0x16) | 8;
    }
  }
  if (((*(ushort *)(param_2 + 0x16) >> 4 & 1) != 0) && ((*(ushort *)(param_3 + 0x16) >> 4 & 1) != 0)
     ) {
    if (*(short *)(param_2 + 0x12) == *(short *)(param_3 + 0x12)) {
      *(short *)((int)param_1 + 0x12) = *(short *)(param_3 + 0x12);
      *(ushort *)((int)param_1 + 0x16) = *(ushort *)((int)param_1 + 0x16) | 0x10;
    }
  }
  if (((*(ushort *)(param_2 + 0x16) >> 5 & 1) != 0) && ((*(ushort *)(param_3 + 0x16) >> 5 & 1) != 0)
     ) {
    if (*(short *)(param_2 + 0x14) == *(short *)(param_3 + 0x14)) {
      *(short *)(param_1 + 5) = *(short *)(param_3 + 0x14);
      *(ushort *)((int)param_1 + 0x16) = *(ushort *)((int)param_1 + 0x16) | 0x20;
    }
  }
  if (((*(ushort *)(param_2 + 0x16) >> 6 & 1) != 0) && ((*(ushort *)(param_3 + 0x16) >> 6 & 1) != 0)
     ) {
    cVar1 = fn_8278B2C8(param_2,*(undefined4 *)(param_3 + 8));
    if (cVar1 != '\0') {
      fn_8278C0A8(param_1);
    }
  }
  if ((*(ushort *)(param_2 + 0x16) >> 8 & 1) != 0) {
    uVar2 = *(ushort *)(param_3 + 0x16);
    if (((uVar2 >> 8 & 1) != 0) && (((*(ushort *)(param_2 + 0x16) ^ uVar2) & 0x1800) == 0)) {
      *(ushort *)((int)param_1 + 0x16) =
           (uVar2 >> 0xb & 3) << 0xb | *(ushort *)((int)param_1 + 0x16) & 0xe6ff | 0x100;
    }
  }
  return param_1;
}

