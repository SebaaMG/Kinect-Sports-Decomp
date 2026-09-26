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
extern int fn_82CE5250();
extern int fn_82CE52A8();
extern int fn_82CE5410();
extern int fn_82CE9108();
extern int fn_82CFBA90();
extern int fn_82CFBAD0();
extern int fn_82CFBAD8();
extern int fn_82D80CA0();
extern int fn_82D80CA8();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;


void fn_82DFF450(int *param_1,int param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar3;
  
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = "TtDoVehiclesSynchronously";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  (**(code **)(*param_1 + 0x1c))(param_1);
  iVar5 = (**(code **)(*param_1 + 0x20))(param_1,param_5);
  piVar6 = (int *)fn_82CE5410();
  iVar4 = *piVar6;
  *piVar6 = (iVar5 + 0x7fU & 0xffffff80) + iVar4;
  iVar5 = fn_82CE5410();
  uVar3 = fn_82CE5250(*(undefined4 *)(iVar5 + 0x10),4,0x80);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_82CFBA90(uVar3,0,1000);
  }
  (**(code **)(*param_1 + 0x24))
            (param_1,param_2,-(ulonglong)(*(int *)(*(int *)(param_2 + 0x7c) + 0x20) == 2) & 0x100,
             param_5,param_4,uVar3,iVar4);
  fn_82D80CA0(param_2);
  (**(code **)(*param_3 + 0xc))(param_3,param_4,0xb);
  fn_82CE9108(param_4);
  (**(code **)(*param_3 + 0x10))(param_3);
  fn_82CFBAD8(uVar3);
  fn_82D80CA8(param_2);
  fn_82CFBAD0(uVar3);
  iVar5 = fn_82CE5410();
  fn_82CE52A8(*(undefined4 *)(iVar5 + 0x10),uVar3);
  (**(code **)(*param_1 + 0x28))(param_1,param_2 + 0x1d0,param_5,iVar4);
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = iVar4;
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 < *(undefined4 **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar4 + 4) = puVar1 + 3;
  }
  return;
}

