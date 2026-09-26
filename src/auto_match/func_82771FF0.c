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
#define CONCAT24(h,l) ((U64)((((U16)(h)) << 32) | ((U32)(l))))
extern int fn_8267B890();
extern int fn_826C8C70();
extern int fn_826D6290();
extern int fn_826DC448();
extern int fn_826E7800();
extern int fn_826E7990();
extern int fn_826E8AF0();
extern int fn_826E9188();
extern int fn_826E9200();
extern int fn_827590B0();
extern int fn_8275A528();
extern unsigned int lbl_8200D4C0;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82771FF0(undefined8 param_1,int param_2,undefined8 param_3,byte *param_4,byte *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 *puVar8;
  bool bVar9;
  uint uVar10;
  uint uVar12;
  longlong lVar11;
  int iVar13;
  double dVar14;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  
  iVar13 = *(int *)(param_2 + 0x314);
  if (iVar13 == 0) {
    iVar13 = param_2 + 0x28;
  }
  *(undefined1 *)(iVar13 + 0x15) = 0;
  if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 1) {
    fn_826E7990(iVar13);
  }
  bVar3 = *(byte *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
  *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 1;
  *param_4 = bVar3;
  *param_5 = bVar3;
  fn_826C8C70(iVar13,0xffffffff82015250,*param_4);
  bVar3 = *param_4;
  if (bVar3 == 0) {
    fn_826E9188(iVar13,&uStack_70);
    fn_826E9188(iVar13,&uStack_6c);
    *(undefined4 *)(param_4 + 4) = uStack_70;
    *(undefined4 *)(param_5 + 4) = uStack_6c;
    fn_826C8C70(iVar13,0xffffffff82015230);
    fn_826E9200(iVar13,&uStack_68);
    fn_826C8C70(iVar13,0xffffffff82015210);
    fn_826E9200(iVar13,&uStack_68);
  }
  else if ((bVar3 & 0x10) == 0) {
    if ((bVar3 & 0x40) != 0) {
      *(undefined1 *)(iVar13 + 0x15) = 0;
      if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
        fn_826E7800(iVar13,2);
      }
      puVar8 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
      uVar1 = puVar8[1];
      uVar2 = *puVar8;
      *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
      uVar4 = CONCAT11(uVar1,uVar2);
      fn_826C8C70(iVar13,0xffffffff820151d4,uVar4);
      uStack_68 = (ulonglong)CONCAT24(uVar4,(((U64)(uStack_68) >> 32) & 0xFFFFFFFF));
      fn_826DC448(*(undefined4 *)(param_2 + 0x20),param_4 + 8,&uStack_68);
      fn_826D6290(param_5 + 8,param_4 + 8);
      fn_826E8AF0(iVar13,param_4 + 0x10);
      fn_826E8AF0(iVar13,param_5 + 0x10);
    }
  }
  else {
    fn_826E8AF0(iVar13,param_4 + 0x10);
    fn_826E8AF0(iVar13,param_5 + 0x10);
    *(undefined1 *)(iVar13 + 0x15) = 0;
    if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 1) {
      fn_826E7990(iVar13);
    }
    bVar9 = false;
    bVar3 = *(byte *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
    uVar12 = (uint)bVar3;
    *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 1;
    if (((int)param_3 == 0x54) || (*param_4 == 0x13)) {
      bVar9 = (bVar3 & 0x10) != 0;
      uVar12 = uVar12 & 0xf;
    }
    uVar5 = fn_8267B890(lbl_831E7E64,0x14,0);
    if ((uVar5 & 0xffffffff) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = fn_8275A528(uVar5,*param_4,uVar12,bVar9);
    }
    *(undefined4 *)(param_4 + 4) = uVar6;
    uVar5 = fn_8267B890(lbl_831E7E64,0x14,0);
    if ((uVar5 & 0xffffffff) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = fn_8275A528(uVar5,*param_5,uVar12,bVar9);
    }
    *(int *)(param_5 + 4) = iVar7;
    if ((*(int *)(param_4 + 4) == 0) || (iVar7 == 0)) {
      *param_4 = 0;
      *param_5 = 0;
    }
    else {
      uVar10 = 0;
      if (uVar12 != 0) {
        lVar11 = 0;
        do {
          fn_827590B0((ulonglong)*(uint *)(*(int *)(param_4 + 4) + 0xc) + lVar11,param_2,
                            param_3);
          fn_827590B0((ulonglong)*(uint *)(*(int *)(param_5 + 4) + 0xc) + lVar11,param_2,
                            param_3);
          uVar10 = uVar10 + 1;
          lVar11 = lVar11 + 8;
        } while (uVar10 < uVar12);
      }
      fn_826C8C70(iVar13,0xffffffff820151f0,uVar12);
      if (*param_4 == 0x13) {
        *(undefined1 *)(iVar13 + 0x15) = 0;
        if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
          fn_826E7800(iVar13,2);
        }
        puVar8 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
        dVar14 = (double)lbl_8200D4C0;
        uVar1 = puVar8[1];
        uVar2 = *puVar8;
        *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
        uStack_68 = (ulonglong)CONCAT11(uVar1,uVar2);
        *(float *)(*(int *)(param_4 + 4) + 0x10) = (float)((double)(longlong)uStack_68 * dVar14);
        *(undefined1 *)(iVar13 + 0x15) = 0;
        if (*(int *)(iVar13 + 0x30) - *(int *)(iVar13 + 0x2c) < 2) {
          fn_826E7800(iVar13,2);
        }
        puVar8 = (undefined1 *)(*(int *)(iVar13 + 0x3c) + *(int *)(iVar13 + 0x2c));
        uVar1 = puVar8[1];
        uVar2 = *puVar8;
        *(int *)(iVar13 + 0x2c) = *(int *)(iVar13 + 0x2c) + 2;
        *(float *)(*(int *)(param_5 + 4) + 0x10) =
             (float)((double)(longlong)CONCAT11(uVar1,uVar2) * dVar14);
      }
    }
  }
  return;
}

