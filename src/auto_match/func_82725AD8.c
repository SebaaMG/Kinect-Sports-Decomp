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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))
extern unsigned int fStack_4c;
extern int fn_82687270();
extern int fn_826A6A38();
extern int fn_826A9280();
extern int fn_826DC448();
extern int fn_826E7438();
extern int fn_826E7800();
extern int fn_826E8488();
extern unsigned int iStack_48;
extern unsigned int lbl_8201101C;
extern unsigned int uStack_44;


void fn_82725AD8(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ushort uVar8;
  int iVar6;
  int iVar7;
  char cVar9;
  ulonglong uVar5;
  undefined8 uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  int *piVar14;
  float fStack_4c;
  int iStack_48;
  uint uStack_44;
  
  uVar8 = fn_826A6A38();
  iVar13 = *(int *)(param_1 + 0x314);
  if (iVar13 == 0) {
    iVar13 = param_1 + 0x28;
  }
  iVar6 = fn_826E8488(iVar13,2);
  iVar7 = fn_826E8488(iVar13,3);
  *(undefined1 *)(iVar13 + 0x15) = 0;
  if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 4) {
    fn_826E7800(iVar13,4);
  }
  iVar11 = *(int *)(iVar13 + 0x2c) + 4;
  puVar12 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
  uVar1 = puVar12[3];
  uVar2 = puVar12[2];
  uVar3 = puVar12[1];
  uVar4 = *puVar12;
  *(int *)(iVar13 + 0x2c) = iVar11;
  *(undefined1 *)(iVar13 + 0x15) = 0;
  fStack_4c = (float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
  if (*(int *)(iVar13 + 0x30) - iVar11 < 4) {
    fn_826E7800(iVar13,4);
  }
  puVar12 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
  uVar1 = puVar12[3];
  uVar2 = puVar12[2];
  uVar3 = puVar12[1];
  uVar4 = *puVar12;
  *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 4;
  cVar9 = fn_826E7438(iVar13);
  if (cVar9 != '\0') {
    iVar13 = param_1 + 0x14;
    fn_826A9280(iVar13,0xffffffff82011034,uVar8);
    if (iVar6 == 0) {
      uVar10 = 0xffffffff820082b8;
    }
    else {
      uVar10 = 0xffffffff82011028;
    }
    fn_826A9280(iVar13,0xffffffff82010ffc,uVar10,*(undefined4 *)(&lbl_8201101C + iVar7 * 4));
    fn_826A9280(iVar13,0xffffffff82010fd8,(double)fStack_4c,
                      (double)(float)CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4));
  }
  fStack_4c = (float)(uint)uVar8;
  iStack_48 = 0;
  uStack_44 = 0;
  cVar9 = fn_826DC448(*(undefined4 *)(param_1 + 0x20),&iStack_48,&fStack_4c);
  if (cVar9 != '\0') {
    piVar14 = (int *)(-(uint)(iStack_48 == 0) & uStack_44);
    if (piVar14 != (int *)0x0) {
      uVar5 = (**(code **)(*piVar14 + 8))(piVar14);
      if ((uVar5 & 0xff00) == 0x8300) {
        *(ushort *)(piVar14 + 0x14) = *(ushort *)(piVar14 + 0x14) | 0x400;
      }
      else {
        uVar5 = (**(code **)(*piVar14 + 8))(piVar14);
        if ((uVar5 & 0xff00) == 0x8200) {
          *(byte *)(piVar14 + 0x11) = *(byte *)(piVar14 + 0x11) | 1;
        }
      }
    }
  }
  if ((iStack_48 == 0) && (uStack_44 != 0)) {
    fn_82687270();
  }
  return;
}

