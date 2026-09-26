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
extern unsigned int fStack_30;
extern int fn_823E28B0();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_82560010();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


void fn_823E3560(int param_1,undefined4 param_2,undefined8 param_3)

{
  ushort uVar1;
  int iVar3;
  int iVar4;
  longlong lVar2;
  ushort *puVar5;
  undefined4 *puVar6;
  double dVar7;
  undefined4 auStack_40 [2];
  undefined4 uStack_38;
  undefined4 uStack_34;
  float fStack_30;
  
  auStack_40[0] = param_2;
  iVar3 = fn_82560010(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x118) + 0x24),param_3)
  ;
  fStack_30 = lbl_821CC160;
  if (iVar3 != 0) {
    iVar4 = fn_8251F720(iVar3 + 0x40,0);
    dVar7 = (double)*(float *)(iVar4 + 0x1c);
    fn_8251FA58();
    fStack_30 = (float)((double)(lbl_821CA460 / *(float *)(iVar3 + 0x48)) * dVar7);
  }
  lVar2 = fn_82560010(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x118) + 0x24),param_3)
  ;
  puVar5 = (ushort *)fn_8251F720(lVar2 + 0x44,0);
  uVar1 = puVar5[6];
  while (uVar1 != 0) {
    if (uVar1 == 0x24) goto LAB_823e3620;
    puVar5 = (ushort *)((uint)*puVar5 + (int)puVar5);
    uVar1 = puVar5[6];
  }
  puVar5 = (ushort *)0x0;
LAB_823e3620:
  uStack_38 = *(undefined4 *)(puVar5 + 2);
  uStack_34 = *(undefined4 *)(puVar5 + 4);
  fn_8251FA58();
  puVar6 = (undefined4 *)fn_823E28B0(*(undefined4 *)(param_1 + 8),auStack_40);
  *puVar6 = uStack_38;
  puVar6[1] = uStack_34;
  puVar6[2] = fStack_30;
  return;
}

