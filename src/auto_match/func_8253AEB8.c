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
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern int fn_82811980();
extern int fn_828119D8();
extern int fn_82811AD8();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_38;
extern unsigned int uStack_60;


void fn_8253AEB8(void)

{
  undefined4 *puVar2;
  undefined8 uVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  puVar2 = (undefined4 *)fn_82F6A548();
  uStack_60 = fn_828119D8(auStack_48,auStack_58);
  uVar1 = fn_828119D8(auStack_40,auStack_50);
  uStack_38 = ((((U64)(uStack_38)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)uVar1)) & ((U64)0xFFFFFFFF)) << 32));
  dVar6 = (double)(((U64)(uStack_38) >> 32) & 0xFFFFFFFF);
  uStack_38 = ((((U64)(uStack_38)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)uVar1 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
  dVar7 = (double)(((U64)(uStack_38) >> 0) & 0xFFFFFFFF);
  dVar3 = (double)(float)(dVar6 * (double)(((U64)(uStack_60) >> 0) & 0xFFFFFFFF) -
                         (double)(float)(dVar7 * (double)(((U64)(uStack_60) >> 32) & 0xFFFFFFFF)));
  uStack_38 = uVar1;
  if ((double)lbl_8218EC10 <= ABS(dVar3)) {
    dVar8 = (double)lbl_821CA460;
    dVar9 = (double)(float)(dVar8 / dVar3);
    uVar1 = fn_828119D8(auStack_58,auStack_50);
    uStack_38 = ((((U64)(uStack_38)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)uVar1 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    dVar5 = (double)(((U64)(uStack_38) >> 0) & 0xFFFFFFFF);
    uStack_38 = ((((U64)(uStack_38)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)uVar1)) & ((U64)0xFFFFFFFF)) << 32));
    dVar4 = (double)(((U64)(uStack_38) >> 32) & 0xFFFFFFFF);
    dVar3 = (double)(float)((double)(float)(dVar4 * dVar7 - (double)(float)(dVar5 * dVar6)) * dVar9)
    ;
    uStack_38 = uVar1;
    if (((double)lbl_821CC160 <= dVar3) && (dVar3 <= dVar8)) {
      dVar3 = (double)(float)((double)(float)(dVar4 * (double)(((U64)(uStack_60) >> 0) & 0xFFFFFFFF) -
                                             (double)(float)(dVar5 * (double)(((U64)(uStack_60) >> 32) & 0xFFFFFFFF))) *
                             dVar9);
      if (((double)lbl_821CC160 <= dVar3) && (dVar3 <= dVar8)) {
        if (puVar2 != (undefined4 *)0x0) {
          uStack_38 = fn_82811AD8(&uStack_60);
          uVar1 = fn_82811980(auStack_58,&uStack_38);
          uStack_38 = ((((U64)(uStack_38)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)uVar1 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
          *puVar2 = (((U64)(uStack_38) >> 0) & 0xFFFFFFFF);
          uStack_38 = ((((U64)(uStack_38)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((float)uVar1)) & ((U64)0xFFFFFFFF)) << 32));
          puVar2[2] = (((U64)(uStack_38) >> 32) & 0xFFFFFFFF);
          uStack_38 = uVar1;
        }
        uVar1 = 1;
        goto LAB_8253b030;
      }
    }
  }
  uVar1 = 0;
LAB_8253b030:
  fn_82F6A594(uVar1);
  return;
}

