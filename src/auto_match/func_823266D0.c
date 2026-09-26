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
extern int fn_82326810();
extern int fn_8255FD70();
extern int fn_82560010();
extern int fn_8265CA20();
extern unsigned int lbl_831DA168;
extern unsigned int lbl_831DA174;


void fn_823266D0(int param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 *puStack_50;
  undefined4 *puStack_4c;
  
  ppuVar3 = &lbl_831DA168;
  do {
    uVar2 = fn_82560010(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x24),*ppuVar3);
    dVar7 = (double)*(float *)(param_1 + 0xc0);
    dVar5 = (double)fn_82326810();
    dVar6 = (double)(float)(dVar7 - dVar5);
    dVar5 = (double)fn_82326810(uVar2);
    if (dVar6 < 0.0) {
      dVar7 = dVar5;
    }
    ppuVar3 = ppuVar3 + 1;
    *(float *)(param_1 + 0xc0) = (float)dVar7;
  } while (ppuVar3 != &lbl_831DA174);
  ppuVar3 = &lbl_831DA174;
  do {
    uVar2 = fn_82560010(*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x24),*ppuVar3);
    dVar7 = (double)*(float *)(param_1 + 0xc4);
    dVar5 = (double)fn_82326810();
    dVar6 = (double)(float)(dVar7 - dVar5);
    dVar5 = (double)fn_82326810(uVar2);
    if (dVar6 < 0.0) {
      dVar7 = dVar5;
    }
    ppuVar3 = ppuVar3 + 1;
    *(float *)(param_1 + 0xc4) = (float)dVar7;
  } while (ppuVar3 != (undefined **)0x831da180);
  fn_8255FD70(&puStack_50,*(undefined4 *)(*(int *)(param_1 + 0x80) + 0x24),0xffffffff821b02cc)
  ;
  for (puVar4 = puStack_50; puVar4 != puStack_4c; puVar4 = puVar4 + 1) {
    uVar1 = *puVar4;
    dVar7 = (double)fn_82326810(uVar1);
    dVar5 = (double)(float)((double)*(float *)(param_1 + 200) - dVar7);
    dVar7 = (double)fn_82326810(uVar1);
    if (dVar5 < 0.0) {
      dVar7 = (double)*(float *)(param_1 + 200);
    }
    *(float *)(param_1 + 200) = (float)dVar7;
  }
  if (puStack_50 != (undefined4 *)0x0) {
    fn_8265CA20(puStack_50);
  }
  return;
}

