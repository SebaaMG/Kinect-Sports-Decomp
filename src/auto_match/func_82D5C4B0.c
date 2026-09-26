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
extern int fn_82D5D320();
extern int fn_82D75FD0();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82134508;
extern unsigned int lbl_82138A2C;
extern unsigned int lbl_82139008;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_44;
extern unsigned int uStack_6c;


void fn_82D5C4B0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined **ppuStack_70;
  undefined4 uStack_6c;
  char cStack_68;
  undefined4 uStack_44;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "LtCvsListAgent";
    puVar1[3] = "StcheckHull";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 4;
  }
  cStack_68 = '\0';
  ppuStack_70 = &lbl_82139008;
  uStack_44 = lbl_82134508;
  uStack_6c = lbl_82134508;
  fn_82D75FD0(param_1,param_2,param_3,&ppuStack_70,&ppuStack_70);
  if (cStack_68 != '\0') {
    iVar3 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar3 + 4);
    if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
      *puVar1 = "Stchild";
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
    }
    fn_82D5D320(param_1,param_2,param_3,param_4,param_5);
  }
  ppuStack_70 = &lbl_82138A2C;
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
  }
  return;
}

