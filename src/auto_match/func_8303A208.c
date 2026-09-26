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
extern int fn_82F655D8();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820570D4;
extern unsigned int lbl_8217D2F8;
extern unsigned int lbl_8217D2FC;
extern unsigned int lbl_8217D300;
extern unsigned int uStack_4c;


void fn_8303A208(void)

{
  int iVar1;
  undefined4 uVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined4 uStack_4c;
  
  iVar1 = fn_82F6A544();
  dVar5 = (double)lbl_820570D4;
  dVar7 = (double)lbl_8217D2F8;
  dVar4 = extraout_f1;
  if ((float)(extraout_f1 - (double)lbl_8217D300) < 0.0) {
    dVar4 = (double)lbl_8217D300;
  }
  dVar8 = (double)lbl_8217D2FC;
  if ((float)(dVar4 - (double)lbl_8217D2FC) < 0.0) {
    dVar8 = dVar4;
  }
  dVar4 = lbl_82005730;
  uVar6 = lbl_82002C40;
  if (*(char *)(iVar1 + 0x4f) != '\0') {
    dVar3 = (double)fn_82F655D8(lbl_82002C40,(double)(float)(dVar8 * dVar7));
    *(float *)(iVar1 + 0x48) = (float)dVar8;
    *(undefined1 *)(iVar1 + 0x4f) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0x400;
    uStack_4c = (undefined4)
                (longlong)
                ((double)(float)((double)(*(float *)(iVar1 + 0x44) * (float)dVar3) * dVar5) + dVar4)
    ;
    *(undefined4 *)(iVar1 + 0x24) = uStack_4c;
    *(undefined4 *)(iVar1 + 0x28) = uStack_4c;
  }
  if (dVar8 != (double)*(float *)(iVar1 + 0x48)) {
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    dVar7 = (double)fn_82F655D8(uVar6,(double)(float)(dVar8 * dVar7));
    *(float *)(iVar1 + 0x48) = (float)dVar8;
    *(int *)(iVar1 + 0x28) =
         (int)(longlong)
              ((double)(float)((double)(*(float *)(iVar1 + 0x44) * (float)dVar7) * dVar5) + dVar4);
  }
  if (*(int *)(iVar1 + 0x24) == *(int *)(iVar1 + 0x28)) {
    if (*(int *)(iVar1 + 0x24) == 0x10000) {
      *(undefined4 *)(iVar1 + 0x40) = 0;
      goto LAB_8303a330;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  *(undefined4 *)(iVar1 + 0x40) = uVar2;
LAB_8303a330:
  fn_82F6A590();
  return;
}

