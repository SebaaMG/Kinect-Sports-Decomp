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
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5458();
extern int fn_82D89BD8();
extern int fn_82D8AAA8();
extern int fn_82D8B2F8();
extern int fn_82D8B400();
extern int fn_82D8B4B8();
extern int fn_82D93120();
extern int fn_82D9D520();
extern int fn_83095E98();
extern unsigned int lbl_82002C2C;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82134508;
extern unsigned int lbl_8213C624;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


undefined4 * fn_82D8C258(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  float fVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char cVar9;
  undefined4 *puVar10;
  double dVar11;
  double dVar12;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  fn_82D8AAA8(param_1,param_2[1]);
  *param_1 = &lbl_8213C624;
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 3);
  *(undefined2 *)((int)param_1 + 0xaa) = *(undefined2 *)((int)param_2 + 0xe);
  param_1[0xb] = *param_2;
  iVar1 = param_2[2];
  if (iVar1 != 0) {
    fn_82CE4040(iVar1);
    if (param_1[0x84] != 0) {
      fn_82CE4118();
    }
    param_1[0x84] = iVar1;
    fn_82CE4040(iVar1);
  }
  puVar10 = param_1 + 0x38;
  dVar12 = (double)lbl_821AAD20;
  if (*(char *)(param_2 + 0x2d) == '\x05') {
    if (puVar10 == (undefined4 *)0x0) {
      lVar3 = 0;
    }
    else {
      lVar3 = fn_82D9D520(puVar10,param_2 + 4,param_2 + 8);
    }
    fn_82CE5458(lVar3 + 0xbc,param_2 + 0x2a);
    fn_82CE5458(lVar3 + 0xbd,param_2 + 0x2b);
    fn_82D93120(lVar3,1);
    param_1[6] = param_1 + 0x3c;
    dVar11 = (double)(float)param_2[0x2c];
    if (dVar11 <= dVar12) {
      dVar11 = (double)lbl_82134508;
    }
  }
  else {
    fn_82D8B4B8((double)(float)param_2[0x24],(double)(float)param_2[0x2a],
                  (double)(float)param_2[0x2b],*(char *)(param_2 + 0x2d),param_2 + 4,param_2 + 8);
    fn_82D93120(puVar10,*(undefined1 *)((int)param_2 + 0xb6));
    fn_82D89BD8(param_1);
    (**(code **)(param_1[0x38] + 0x40))(puVar10,param_2 + 0xc);
    fn_82D89BD8(param_1);
    (**(code **)(param_1[0x38] + 0x44))(puVar10,param_2 + 0x10);
    param_1[6] = param_1 + 0x3c;
    dVar11 = (double)(float)param_2[0x2c];
  }
  param_1[0x17] = (float)dVar11;
  if (*(char *)((int)param_2 + 0xb5) == '\0') {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    iVar1 = param_1[2];
    uVar5 = 1;
    uVar6 = param_1[0x35];
    if (iVar1 != 0) {
      uVar4 = *(undefined1 *)(iVar1 + 0x307);
      uVar8 = *(undefined1 *)(iVar1 + 0x306);
      uVar7 = *(undefined1 *)(iVar1 + 0x305);
      goto LAB_82d8c41c;
    }
  }
  uVar7 = 0;
  uVar8 = 0;
  uVar4 = 0;
LAB_82d8c41c:
  fn_82D8B2F8(puVar10,uVar5,uVar6,uVar7,uVar8,uVar4);
  param_1[0x65] = param_2[0x25];
  param_1[0x66] = param_2[0x26];
  if ((param_1[4] != 0) &&
     (fn_82D8B400(param_1,param_1[4],&fStack_40), (double)(float)param_1[0x17] <= dVar12)) {
    if (fStack_40 - fStack_3c < 0.0) {
      fStack_3c = fStack_40;
    }
    if (fStack_3c - fStack_38 < 0.0) {
      fStack_38 = fStack_3c;
    }
    fVar2 = lbl_82186E6C;
    if (fStack_38 < lbl_82002C5C) {
      fVar2 = fStack_38 * lbl_82002C2C;
    }
    param_1[0x17] = fVar2;
  }
  cVar9 = *(char *)((int)param_2 + 0xb7);
  if (cVar9 == -1) {
    if (*(char *)(param_1 + 0x3a) == '\x05') {
      cVar9 = '\0';
    }
    else {
      cVar9 = '\x01';
      if (*(char *)(param_2 + 0x2d) != '\x04') {
        cVar9 = '\x02';
      }
    }
  }
  *(char *)((int)param_1 + 0x2a) = cVar9;
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(param_2 + 0x2e);
  if (*(char *)((int)param_2 + 0xbb) != '\0') {
    *(byte *)((int)param_1 + 0x21) = *(byte *)((int)param_1 + 0x21) | 1;
  }
  param_1[0x24] = param_2[0x28];
  param_1[0x25] = param_2[0x29];
  *(undefined2 *)((int)param_1 + 0x1fe) = *(undefined2 *)(param_2 + 0x27);
  if (*(char *)((int)param_2 + 0xba) < '\0') {
    uVar4 = fn_83095E98(param_2[1]);
    *(undefined1 *)((int)param_1 + 0xd1) = uVar4;
  }
  else {
    *(char *)((int)param_1 + 0xd1) = *(char *)((int)param_2 + 0xba);
  }
  *(undefined1 *)((int)param_1 + 0xd2) = *(undefined1 *)((int)param_2 + 0xb9);
  return param_1;
}

