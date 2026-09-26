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
extern int fn_82CE5410();
extern int fn_82CEA480();
extern int fn_82D34D78();
extern int fn_82D93430();
extern int fn_82DB1318();
extern int fn_82DB1478();
extern int fn_82DB1B80();
extern int fn_82DB2098();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82DB2BA8(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0x80000000;
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    puVar1[3] = "StGather";
    *puVar1 = "LtActiveTree";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 4;
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  piVar4 = (int *)(param_1 + 0x44);
  fn_82DB1318(piVar4,*(undefined4 *)(param_1 + 0x28));
  if (*(char *)(param_1 + 0x24) == '\0') {
    fn_82DB1478(piVar4,*(undefined4 *)(param_1 + 0x28));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    iVar5 = 0;
    do {
      fn_82D93430((int)*(char *)(*(int *)(iVar5 + *piVar4) + 0x10) + *(int *)(iVar5 + *piVar4),
                   0xffff);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x48));
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "StClear";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "StRebuild";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    fn_82DB2098(param_1,param_1 + 0x10,piVar4,*(undefined4 *)(param_1 + 0x28),param_2,param_3);
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  if (*(char *)(param_1 + 0x24) != '\0') {
    iVar3 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar3 + 4);
    if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
      puVar1[3] = "StGather";
      *puVar1 = "LtInactiveTree";
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar3 + 4) = puVar1 + 4;
    }
    uStack_6c = 0;
    fn_82DB1478(&uStack_70,*(undefined4 *)(param_1 + 0x28));
    iVar3 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar3 + 4);
    if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
      *puVar1 = "StClear";
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
    }
    fn_82D34D78(*(undefined4 *)(param_1 + 0xc));
    iVar3 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar3 + 4);
    if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
      *puVar1 = "StRebuild";
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
    }
    fn_82DB1B80(param_1,&uStack_70,param_2,param_3);
    iVar3 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar3 + 4);
    if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
      *puVar1 = &lbl_8202CF7C;
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
    }
  }
  *(undefined1 *)(param_1 + 0x69) = 0;
  fn_82CEA480(param_1 + 0x50);
  iVar3 = fn_82CE5410();
  uStack_6c = 0;
  if ((uStack_68 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),uStack_70,uStack_68 & 0x3fffffff,4);
  }
  return;
}

