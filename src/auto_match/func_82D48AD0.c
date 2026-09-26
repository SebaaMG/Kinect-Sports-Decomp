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
extern unsigned int *auStack_240;
extern unsigned int iStack_244;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_248;
extern unsigned int uStack_24c;


void fn_82D48AD0(int param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar3;
  undefined8 uVar2;
  int *piVar4;
  int *piStack_250;
  undefined4 uStack_24c;
  undefined4 uStack_248;
  int iStack_244;
  undefined1 auStack_240 [576];
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "TtrcShpCollect";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  piVar4 = (int *)(param_1 + 0x14);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 8))(piVar4);
  iVar3 = (int)uVar2;
  while (iVar3 != -1) {
    piStack_250 = (int *)(**(code **)(*piVar4 + 0x14))(piVar4,uVar2,auStack_240);
    uStack_248 = *(undefined4 *)(param_3 + 8);
    uStack_24c = (undefined4)uVar2;
    iStack_244 = param_3;
    (**(code **)(*piStack_250 + 0x24))(piStack_250,param_2,&piStack_250,param_4);
    uVar2 = (**(code **)(*piVar4 + 0xc))(piVar4,uVar2);
    iVar3 = (int)uVar2;
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

