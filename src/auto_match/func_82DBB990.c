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
extern unsigned int *auStack_30;
extern int fn_82DBBBA0();
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_2c;


void fn_82DBB990(int param_1,int *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined1 auStack_30 [4];
  uint uStack_2c;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(undefined4 **)(iVar3 + 4);
  if (puVar5 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar5 = "TtEnblConstr";
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(undefined4 **)(iVar3 + 4) = puVar5 + 3;
  }
  fn_82DBBBA0(param_1,param_2,0x1b);
  iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 0x1c);
  if (iVar3 != 0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 0x24))(*(int **)(param_1 + 0xc),1,auStack_30);
    uVar2 = lbl_821AAD20;
    uVar4 = (ulonglong)uStack_2c;
    if (0 < (int)uStack_2c) {
      puVar5 = (undefined4 *)(iVar3 + -4);
      do {
        puVar5[1] = uVar2;
        puVar5 = puVar5 + 2;
        *puVar5 = uVar2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar5 = *(undefined4 **)(iVar3 + 4);
  if (puVar5 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar5 = &lbl_82132BC4;
    uVar1 = TBLr;
    puVar5[1] = (int)uVar1;
    *(undefined4 **)(iVar3 + 4) = puVar5 + 3;
  }
  return;
}

