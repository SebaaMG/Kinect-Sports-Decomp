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
#define TBLr 0
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern int fn_82D378E8();
extern int fn_83084210();
extern int fn_83096D00();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82141F1C;
extern unsigned int lbl_82141F30;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_44;
extern unsigned int uStack_50;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;


void fn_82DB0C38(int param_1,longlong param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined1 auStack_90 [16];
  undefined **ppuStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [12];
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  undefined4 uStack_44;
  
  fn_83096D00(auStack_60);
  if (param_3 == 0) {
    iStack_4c = 0;
    iStack_48 = 0;
  }
  else {
    iStack_4c = param_3 + 0x14;
    iStack_48 = param_3 + 0x10;
  }
  uStack_50 = (int)param_2;
  uStack_44 = param_4;
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "LtCastRay";
    puVar1[3] = "StActiveTree";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 4;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    uStack_6c = 0;
    ppuStack_80 = &lbl_82141F30;
    if (param_3 == 0) {
      iStack_78 = 0;
      iStack_74 = 0;
    }
    else {
      iStack_78 = param_3 + 0x14;
      iStack_74 = param_3 + 0x10;
    }
    uStack_7c = (int)param_2;
    uStack_70 = param_4;
    fn_83084210(auStack_90,*(int *)(param_1 + 0x10),param_2,param_2 + 0x10,&ppuStack_80);
    ppuStack_80 = &lbl_82141F1C;
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "StInactiveTree";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    fn_82D378E8((double)lbl_82002AE0,*(undefined4 *)(param_1 + 0xc),param_2,param_2 + 0x10,
                    auStack_5c);
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

