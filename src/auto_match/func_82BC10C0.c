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
extern unsigned int *auStack_4c;
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82BA0310();
extern int fn_82BA0C40();
extern int fn_82BAF560();
extern int fn_82BC0088();
extern int fn_82BC2958();
extern int fn_82BC3738();
extern int fn_82BC5538();
extern unsigned int lbl_820E33A0;
extern unsigned int lbl_820E3424;
extern unsigned int uStack_50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82BC10C0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar4;
  char cVar6;
  undefined4 *puVar5;
  undefined8 uVar3;
  int iVar7;
  undefined4 uStack_50;
  undefined4 auStack_4c [19];
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(int *)(param_4 + 0x5e4) = *(int *)(param_4 + 0x5e4) + -1;
    uVar4 = fn_82BAF560(*(undefined4 *)(param_3 + 0xac),0);
    *(undefined4 *)(param_1 + 0x3c) = uVar4;
  }
  cVar6 = fn_82BA0310(param_3);
  if (cVar6 != '\0') {
    uVar4 = *(undefined4 *)(param_4 + 0x5ac);
    iVar2 = *(int *)(param_1 + 0x3c);
    puVar5 = (undefined4 *)fn_82B7BD28(uVar4,0x3c4);
    *puVar5 = uVar4;
    if (puVar5 + 1 == (undefined4 *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82BC3738(puVar5 + 1,*(undefined4 *)(param_3 + 0xc));
    }
    *(int *)(param_1 + 0x38) = (int)uVar3;
    fn_82BC2958(uVar3,0,param_1);
    fn_82BC2958(*(undefined4 *)(param_1 + 0x38),1,iVar2);
    fn_82BA0C40(param_3,*(undefined4 *)(param_1 + 0x38));
    fn_82BC5538(*(undefined4 *)(param_3 + 0xa8),*(undefined4 *)(param_1 + 0x38));
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    puVar5 = (undefined4 *)
             fn_82BC0088(*(int *)(param_3 + 0x60),*(undefined4 *)(*(int *)(param_3 + 0x60) + 4));
    *puVar5 = uVar4;
    iVar7 = 0;
    uStack_50 = lbl_820E33A0;
    auStack_4c[0] = param_2;
    do {
      bVar1 = *(byte *)((int)auStack_4c + iVar7);
      if (7 < bVar1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3404,0xffffffff820e33a8,0x169);
      }
      *(char *)((int)auStack_4c + iVar7 + -4) =
           (char)*(undefined4 *)(&lbl_820E3424 + (uint)bVar1 * 4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x80) = uStack_50;
    param_1 = iVar2;
  }
  return param_1;
}

