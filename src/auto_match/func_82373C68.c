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
extern unsigned int *auStack_ec;
extern unsigned int *auStack_f0;
extern int fn_82230300();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FBB0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82372DE8();
extern int fn_824C97F0();
extern int fn_8255A780();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_fc;


void fn_82373C68(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  undefined4 ****ppppuVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  int *piVar10;
  double dVar11;
  double dVar12;
  undefined4 ***apppuStack_110 [5];
  uint uStack_fc;
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [236];
  
  piVar10 = *(int **)(param_2 * 4 + **(int **)(param_1 + 8));
  lVar5 = fn_8255A780((double)*(float *)(*(int *)(piVar10[4] * 4 + *piVar10) + 0x14),
                       (double)lbl_82193E50,(double)lbl_82193AF0);
  if (lVar5 == 0) {
    uVar9 = 0xffffffff821b3eb4;
  }
  else {
    uVar9 = 0xffffffff821b3ea8;
  }
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 0x54c) + 4);
  piVar3 = (int *)puVar2[1];
  for (piVar10 = (int *)*puVar2; piVar10 != piVar3; piVar10 = piVar10 + 2) {
    fn_824C97F0(*(undefined4 *)(*piVar10 + 0x28),uVar9);
  }
  dVar12 = (double)lbl_821CA460;
  dVar11 = dVar12;
  if (param_3 == 0) {
    dVar11 = (double)lbl_8218E8E8;
  }
  iVar6 = fn_82372DE8(param_1,0);
  if (iVar6 == 0) {
    iVar6 = fn_82372DE8(param_1,1);
    uVar8 = 0;
    if (iVar6 == 0) goto LAB_82373d58;
  }
  uVar8 = 1;
LAB_82373d58:
  iVar6 = *(int *)(param_1 + 0x54c);
  piVar10 = *(int **)**(int **)(param_1 + 8);
  piVar3 = (int *)((int *)**(int **)(param_1 + 8))[1];
  fVar1 = *(float *)(*(int *)(piVar3[4] * 4 + *piVar3) + 0x20);
  *(int *)(iVar6 + 0x18) = (int)*(float *)(*(int *)(piVar10[4] * 4 + *piVar10) + 0x20);
  *(float *)(iVar6 + 0xc) = (float)dVar11;
  *(undefined4 *)(iVar6 + 0x10) = 0;
  *(int *)(iVar6 + 0x1c) = (int)fVar1;
  *(undefined4 *)(iVar6 + 0x14) = uVar8;
  if ((int)lVar5 == 0) {
    uVar9 = 0xffffffff821b35ec;
  }
  else {
    uVar9 = 0xffffffff821b35d8;
  }
  piVar3 = (int *)(*(undefined4 **)(param_1 + 0xa8))[1];
  for (piVar10 = (int *)**(undefined4 **)(param_1 + 0xa8); piVar10 != piVar3; piVar10 = piVar10 + 2)
  {
    fn_824C97F0(*(undefined4 *)(*piVar10 + 0x28),uVar9);
  }
  if (param_2 == 0) {
    uVar9 = 0xffffffff821a6a9c;
  }
  else {
    uVar9 = 0xffffffff821a6b18;
  }
  piVar3 = (int *)(*(undefined4 **)(param_1 + 0xa8))[1];
  for (piVar10 = (int *)**(undefined4 **)(param_1 + 0xa8); piVar10 != piVar3; piVar10 = piVar10 + 2)
  {
    fn_824C97F0(*(undefined4 *)(*piVar10 + 0x28),uVar9);
  }
  fn_8223CFC0(auStack_f0,2,1);
  iVar6 = *(int *)(param_1 + 0xa0c);
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar4 = lbl_83265A28 & 0x7fffff;
  uVar9 = fn_82240158(auStack_f0,0xffffffff821b3600);
  fn_8223FBB0(uVar9,(int)((double)(float)((double)(float)(uVar4 | 0x3f800000) - dVar12) *
                                (double)(longlong)iVar6 + dVar12));
  fn_822403C8(apppuStack_110,auStack_ec);
  piVar3 = (int *)(*(undefined4 **)(param_1 + 0xa8))[1];
  for (piVar10 = (int *)**(undefined4 **)(param_1 + 0xa8); piVar10 != piVar3; piVar10 = piVar10 + 2)
  {
    ppppuVar7 = (undefined4 ****)apppuStack_110[0];
    if (uStack_fc < 0x10) {
      ppppuVar7 = apppuStack_110;
    }
    fn_824C97F0(*(undefined4 *)(*piVar10 + 0x28),ppppuVar7);
  }
  fn_82230300(apppuStack_110,1,0);
  fn_8223DCC8(auStack_f0);
  return;
}

