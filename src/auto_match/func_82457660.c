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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int fStack_4c;
extern int fn_822B2F90();
extern int fn_822B3488();
extern int fn_82457328();
extern unsigned int uStack_50;
extern V16 vectorCompareEqualToFloatingPoint();


undefined4 *
fn_82457660(double param_1,undefined4 *param_2,int param_3,undefined8 param_4,int param_5)

{
  undefined4 uVar1;
  int in_r0;
  undefined4 *puVar2;
  undefined4 **ppuVar3;
  ulonglong uVar4;
  int iVar5;
  byte in_cr6;
  undefined1 in_vs32 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puStack_60;
  undefined4 *apuStack_5c [3];
  uint uStack_50;
  float fStack_4c;
  
  uVar1 = *(undefined4 *)(param_3 + 0x14);
  fn_822B3488(-param_1,&uStack_50,uVar1);
  puVar2 = (undefined4 *)((int)&uStack_50 + in_r0 & 0xfffffff0);
  uVar6 = *puVar2;
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  vectorCompareEqualToFloatingPoint(in_vs45,in_vs32);
  uVar4 = (~((ulonglong)in_cr6 << 4) & 0xffffffff) >> 7 & 1;
  if ((uVar4 != 0) && (param_5 != 0)) {
    iVar5 = 4;
    fn_822B2F90(&uStack_50,uVar1);
    if (uStack_50 == 0) {
      iVar5 = 0;
    }
    else if (uStack_50 == 1) {
      iVar5 = 1;
    }
    else if (uStack_50 < 3) {
      iVar5 = 2;
    }
    else if (uStack_50 == 3) {
      iVar5 = 3;
    }
    puStack_60 = *(undefined4 **)(param_3 + 8);
    puVar2 = (undefined4 *)(*(undefined4 **)(param_3 + 8))[1];
    while (*(char *)((int)puVar2 + 0x31) == '\0') {
      if ((int)puVar2[3] < iVar5) {
        puVar2 = (undefined4 *)puVar2[2];
      }
      else {
        puStack_60 = puVar2;
        puVar2 = (undefined4 *)*puVar2;
      }
    }
    if ((puStack_60 == *(undefined4 **)(param_3 + 8)) || (iVar5 < (int)puStack_60[3])) {
      ppuVar3 = apuStack_5c;
      apuStack_5c[0] = *(undefined4 **)(param_3 + 8);
    }
    else {
      ppuVar3 = &puStack_60;
    }
    fn_82457328((double)fStack_4c,ZEXT48(*ppuVar3) + 0x10);
  }
  *param_2 = (int)uVar4;
  puVar2 = (undefined4 *)((uint)(param_2 + 4) & 0xfffffff0);
  *puVar2 = uVar6;
  puVar2[1] = uVar7;
  puVar2[2] = uVar8;
  puVar2[3] = uVar9;
  return param_2;
}

