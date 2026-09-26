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
extern unsigned int iStack_34;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_82138628;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


void fn_82D444D0(int param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_82138628;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  piStack_40 = *(int **)(param_1 + 0x18);
  uStack_38 = *(undefined4 *)(param_3 + 8);
  uStack_3c = 0;
  iStack_34 = param_3;
  (**(code **)(*piStack_40 + 0x24))(piStack_40,param_2,&piStack_40,param_4);
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

