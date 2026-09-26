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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82CE8E78();
extern int fn_82DCB000();
extern unsigned int iStack_f0;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;


void fn_8309A540(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  undefined1 auStack_e0 [16];
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_a0 [160];
  
  iVar2 = KeTlsGetValue(lbl_8323B4A0);
  puVar4 = *(undefined4 **)(iVar2 + 4);
  if (puVar4 < *(undefined4 **)(iVar2 + 0xc)) {
    *puVar4 = "TtCollQueryMoppAabbQuery";
    uVar1 = TBLr;
    puVar4[1] = (int)uVar1;
    *(undefined4 **)(iVar2 + 4) = puVar4 + 3;
  }
  uStack_c0 = *(undefined4 *)(param_2 + 0x30);
  puVar4 = (undefined4 *)(param_2 + 0x20U & 0xfffffff0);
  uStack_d0 = *puVar4;
  uStack_cc = puVar4[1];
  uStack_c8 = puVar4[2];
  uStack_c4 = puVar4[3];
  iVar2 = 0;
  uStack_bc = 0x200;
  uStack_b8 = 0x200;
  if (0 < *(int *)(param_2 + 0x3c)) {
    iVar5 = 0;
    do {
      iVar3 = iVar5 + *(int *)(param_2 + 0x38);
      iStack_f0 = *(int *)(iVar3 + 0x20);
      uStack_ec = 0;
      uStack_e8 = 0x80001000;
      fn_82DCB000(auStack_a0,auStack_e0,iVar3,&iStack_f0);
      iVar3 = fn_82CE5410();
      if (uStack_ec == (uStack_e8 & 0x3fffffff)) {
        fn_82CE63B0(*(undefined4 *)(iVar3 + 0x10),&iStack_f0,4);
      }
      puVar4 = (undefined4 *)(uStack_ec * 4 + iStack_f0);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0xffffffff;
      }
      uStack_ec = uStack_ec + 1;
      iVar3 = fn_82CE5410();
      uStack_ec = 0;
      if ((uStack_e8 & 0x80000000) == 0) {
        (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
                  (*(int **)(iVar3 + 0x10),iStack_f0,uStack_e8 & 0x3fffffff,4);
      }
      iVar2 = iVar2 + 1;
      iStack_f0 = 0;
      iVar5 = iVar5 + 0x30;
      uStack_e8 = 0x80000000;
    } while (iVar2 < *(int *)(param_2 + 0x3c));
  }
  iVar2 = KeTlsGetValue(lbl_8323B4A0);
  puVar4 = *(undefined4 **)(iVar2 + 4);
  if (puVar4 < *(undefined4 **)(iVar2 + 0xc)) {
    *puVar4 = &lbl_82132BC4;
    uVar1 = TBLr;
    puVar4[1] = (int)uVar1;
    *(undefined4 **)(iVar2 + 4) = puVar4 + 3;
  }
  fn_82CE8E78(param_1,param_2,param_2,0);
  return;
}

