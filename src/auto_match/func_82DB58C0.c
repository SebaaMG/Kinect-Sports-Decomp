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
extern unsigned int *auStack_30e0;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_c0;
extern int fn_82D7D528();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82134508;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_30ec;
extern unsigned int uStack_70;


void fn_82DB58C0(undefined8 param_1,int *param_2,longlong param_3,int *param_4,undefined4 param_5,
                  char param_6)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined1 *puStack_30f0;
  undefined4 uStack_30ec;
  undefined1 auStack_30e0 [12320];
  float fStack_c0;
  float fStack_a0;
  float fStack_9c;
  undefined4 uStack_70;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtNarrowPhaseTOI";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  if (0 < (int)param_3) {
    dVar5 = (double)lbl_82134508;
    dVar6 = (double)lbl_821AAD20;
    do {
      puStack_30f0 = auStack_30e0;
      iVar4 = *param_2;
      fStack_a0 = (float)dVar6;
      fStack_9c = (float)dVar6;
      iVar2 = *param_4;
      fStack_c0 = (float)dVar5;
      uStack_70 = 0;
      if (param_6 == '\0') {
        param_4[0x18] = *(char *)(iVar4 + 0xc) * 0x40 + iVar2 + 0x1c20;
      }
      else {
        param_4[0x18] = iVar2 + 0x1de0;
      }
      param_4[5] = *(int *)(*(char *)(iVar4 + 0xc) * 0x40 + iVar2 + 0x1c30);
      uStack_30ec = param_5;
      fn_82D7D528(iVar4,param_4,&puStack_30f0,*(undefined4 *)(iVar4 + 8));
      if (puStack_30f0 != auStack_30e0) {
        (**(code **)(**(int **)(iVar4 + 8) + 0x18))
                  (*(int **)(iVar4 + 8),*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),
                   param_4,&puStack_30f0);
      }
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  return;
}

