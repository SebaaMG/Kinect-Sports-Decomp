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
extern unsigned int fStack_20;
extern int fn_82DADF68();
extern int fn_82DAE040();
extern int fn_82DBFB80();
extern int fn_82DBFC60();
extern unsigned int iStack_2c;
extern unsigned int iStack_3c;
extern unsigned int lbl_8323CCA0;
extern unsigned int uStack_1c;
extern unsigned int uStack_24;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_40;


void fn_82D984B0(double param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 uStack_40;
  int iStack_3c;
  undefined *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined *puStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  iVar1 = *(int *)(*(int *)(param_3 + 0x30) + 0x1c);
  bVar3 = *(byte *)((uint)*(ushort *)(param_2 + 0x1c) + iVar1);
  if ((int)param_4 != (uint)bVar3 + (-(uint)(bVar3 == 0) - (bVar3 - 1))) {
    *(char *)((uint)*(ushort *)(param_2 + 0x1c) + iVar1) = param_4;
    iVar1 = *(int *)(param_3 + 0x30);
    if (param_4 == 0) {
      bVar3 = *(byte *)(iVar1 + 0x12) | 4;
    }
    else {
      bVar3 = *(byte *)(iVar1 + 0x12) & 0xfb;
    }
    *(byte *)(iVar1 + 0x12) = bVar3;
    uVar2 = *(undefined4 *)(*(int *)(param_3 + 8) + 0x18);
    if (param_4 != '\0') {
      uStack_1c = *(undefined4 *)(param_2 + 0x20);
      fStack_20 = (float)param_1;
      puStack_28 = &lbl_8323CCA0;
      uStack_24 = 0;
      uStack_30 = uVar2;
      iStack_2c = param_3;
      if (*(short *)(param_3 + 0x24) != 0) {
        fn_82DBFB80(&uStack_30);
      }
      fn_82DADF68(uVar2,&uStack_30);
      return;
    }
    uStack_34 = 0;
    puStack_38 = &lbl_8323CCA0;
    uStack_40 = uVar2;
    iStack_3c = param_3;
    if (*(short *)(param_3 + 0x24) != 0) {
      fn_82DBFC60(&uStack_40);
    }
    fn_82DAE040(uVar2,&uStack_40);
  }
  return;
}

