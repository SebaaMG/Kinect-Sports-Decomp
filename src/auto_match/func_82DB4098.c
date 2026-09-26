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
extern int fn_82DAD0D8();
extern int fn_82DAE1F0();
extern int fn_82DC7820();
extern unsigned int iStack_2c;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_30;


void fn_82DB4098(undefined8 param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = "TtCollLtUtil";
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  piVar2 = *(int **)(param_2 + 0xc);
  iVar5 = (**(code **)(*piVar2 + 0x20))(piVar2);
  if (iVar5 == 0xb) {
    uStack_24 = fn_82DC7820(piVar2);
    iVar5 = *(int *)(param_2 + 0x14);
    uVar3 = *(undefined4 *)(param_2 + 0x18);
    uStack_30 = 2;
    iStack_2c = iVar5;
    uStack_28 = uVar3;
    fn_82DAE1F0(*(undefined4 *)(iVar5 + 8),&uStack_30);
    uStack_30 = 0;
    fn_82DAD0D8(iVar5,&uStack_30);
    uStack_30 = 1;
    fn_82DAD0D8(uVar3,&uStack_30);
  }
  iVar5 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar5 + 4);
  if (puVar1 < *(undefined4 **)(iVar5 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar4 = TBLr;
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 4) = puVar1 + 3;
  }
  return;
}

