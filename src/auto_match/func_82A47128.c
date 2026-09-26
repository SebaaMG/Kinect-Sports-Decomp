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
extern unsigned int *auStack_14e;
extern int fn_82A3FF60();
extern int fn_82A447A0();
extern int fn_82A4F4E0();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_8208E054;
extern unsigned int lbl_8208E058;
extern unsigned int lbl_8208E05C;
extern unsigned int uStack_150;
extern unsigned int uStack_15c;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_170;
extern unsigned int uStack_174;
extern unsigned int uStack_178;
extern unsigned int uStack_17c;
extern unsigned int uStack_180;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
fn_82A47128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             int param_5)

{
  int iVar1;
  short *psVar3;
  undefined8 uVar2;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined2 uStack_150;
  undefined1 auStack_14e [334];
  
  psVar3 = (short *)fn_82A3FF60(0xffffffff83219d50,
                                      (ulonglong)*(ushort *)(param_5 + 0x10) + 0x12,0x20970002,0);
  if (psVar3 == (short *)0x0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    fn_82F68CC0(psVar3,param_5,(ulonglong)*(ushort *)(param_5 + 0x10) + 0x12);
    if (*psVar3 == -2) {
      uStack_17c = lbl_8208E054;
      uStack_178 = lbl_8208E058;
      uStack_174 = lbl_8208E05C;
      uStack_180 = 1;
      fn_82F68CC0(psVar3 + 0xc,&uStack_180,0x10);
      psVar3[9] = 0x10;
    }
    else {
      *psVar3 = 1;
    }
    iVar1 = ((ushort)psVar3[1] & 0x7fff) * 2;
    psVar3[7] = 0x10;
    psVar3[6] = (short)iVar1;
    *(int *)(psVar3 + 4) = *(int *)(psVar3 + 2) * iVar1;
    uVar2 = fn_82A447A0(param_1,param_2,param_3);
    fn_82A4F4E0(psVar3);
    if (-1 < (int)uVar2) {
      uStack_170 = *(undefined4 *)(param_5 + 4);
      uStack_150 = 0;
      uStack_168 = 0;
      uStack_164 = 0x10;
      uStack_160 = 2;
      uStack_15c = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_14e,0,0x16);
    }
  }
  return uVar2;
}

