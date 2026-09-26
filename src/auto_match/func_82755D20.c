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
extern unsigned int *auStack_50;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern int fn_8268CEC0();
extern int fn_8268D280();
extern int fn_8268D5D8();
extern int fn_827554A8();
extern int fn_82758E40();
extern int fn_827A9CF0();
extern int fn_827AF5B8();
extern int fn_82F68CC0();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_52;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_59;
extern unsigned int uStack_5a;
extern unsigned int uStack_5b;
extern unsigned int uStack_5c;
extern unsigned int uStack_5e;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_65;
extern unsigned int uStack_66;
extern unsigned int uStack_67;
extern unsigned int uStack_68;
extern unsigned int uStack_6a;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_82755D20(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  double dVar6;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined1 uStack_6a;
  byte bStack_69;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined4 uStack_64;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  byte bStack_5d;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined1 auStack_50 [80];
  
  puVar1 = (undefined4 *)param_2[0x10];
  uStack_90 = *puVar1;
  iVar2 = param_1[0x1a];
  uStack_8c = puVar1[1];
  uStack_88 = puVar1[2];
  uStack_84 = puVar1[3];
  uStack_80 = puVar1[4];
  uStack_7c = puVar1[5];
  fn_8268CEC0(&uStack_90,param_1 + 0x11);
  fn_82F68CC0(auStack_50,param_2[0x11],0x20);
  fn_8268D5D8(auStack_50,param_1 + 9);
  dVar6 = (double)lbl_821AAD20;
  fStack_a0 = lbl_821AAD20;
  fStack_9c = lbl_821AAD20;
  fStack_98 = lbl_821AAD20;
  fStack_94 = lbl_821AAD20;
  fn_8268D280(&uStack_90,&fStack_a0,iVar2 + 0x10);
  iVar5 = (**(code **)(*param_1 + 0x40))(param_1);
  bVar4 = false;
  if ((((*(float *)(iVar5 + 0xd4) < fStack_9c) || (fStack_94 < *(float *)(iVar5 + 0xcc))) ||
      (fStack_98 < *(float *)(iVar5 + 200))) || (bVar3 = true, *(float *)(iVar5 + 0xd0) < fStack_a0)
     ) {
    bVar3 = false;
  }
  if ((!bVar3) && ((*(uint *)(*param_2 + 0x14) & 0x100) == 0)) {
    return;
  }
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  bStack_69 = 0;
  uStack_68 = 0;
  uStack_67 = 0;
  uStack_66 = 0x10;
  uStack_65 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5e = 0;
  bStack_5d = 0;
  uStack_5c = 0;
  uStack_5b = 0;
  uStack_5a = 0x10;
  uStack_59 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_52 = 0;
  fn_827554A8(&uStack_70,param_1 + 0x4e);
  if ((*(byte *)(iVar2 + 0x44) & 1) != 0) {
    bStack_69 = bStack_69 | 3;
    bStack_5d = bStack_5d | 3;
  }
  fn_8268CEC0(&uStack_90,iVar2 + 0x20);
  iVar2 = param_1[0x55];
  if (iVar2 == 0) goto LAB_82755f68;
  if (*(char *)(iVar2 + 0x18) == '\0') {
    fn_827AF5B8(dVar6,dVar6,iVar2,iVar2 + 0x1c,param_1 + 0x1b,param_1 + 0x21,0);
    *(undefined1 *)(iVar2 + 0x18) = 1;
  }
  iVar2 = *(int *)(param_1[0x55] + 0x24);
  if (iVar2 == 0) {
LAB_82755f44:
    bVar4 = true;
  }
  else {
    if ((*(int *)(iVar2 + 0x54) != 0) || (bVar3 = true, *(int *)(iVar2 + 0x60) != 0)) {
      bVar3 = false;
    }
    if (bVar3) goto LAB_82755f44;
  }
  if (!bVar4) {
    fn_82758E40(param_1[0x55] + 0x1c,param_2,&uStack_90,auStack_50,0,0);
  }
LAB_82755f68:
  fn_827A9CF0(param_1 + 0x1b,param_2,&uStack_90,auStack_50,*(byte *)(param_1 + 0x56) >> 1 & 1,
                    &uStack_70,0);
  *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) & 0xfd;
  return;
}

