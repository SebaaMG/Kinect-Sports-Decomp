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
extern int fn_82DB34D0();
extern int fn_82DB3650();
extern int fn_82DB38B8();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82DB3D88(int param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint uStack_38;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "LtkdTreeUpdate";
    puVar1[3] = "Stgather";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 4;
  }
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0x80000000;
  fn_82DB3650(param_1,&uStack_40);
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "Strebuild";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  if (((param_2 & 0xffffffff) == 0) || ((param_3 & 0xffffffff) == 0)) {
    fn_82DB34D0(param_1,param_1 + 0x10,&uStack_40);
  }
  else {
    fn_82DB38B8(param_1,param_1 + 0x10,&uStack_40,param_2,param_3);
  }
  *(undefined1 *)(param_1 + 0x20) = 0;
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  iVar3 = fn_82CE5410();
  uStack_3c = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),uStack_40,uStack_38 & 0x3fffffff,4);
  }
  return;
}

