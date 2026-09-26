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
extern int fn_82D6C3E0();
extern int fn_82D74E60();
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_82138A3C;
extern unsigned int lbl_82138A6C;
extern unsigned int lbl_82138FF8;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


void fn_82D5C498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined **ppuStack_60;
  char cStack_5c;
  undefined **ppuStack_58;
  undefined1 uStack_54;
  undefined4 uStack_50;
  
  iVar3 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(undefined4 **)(iVar3 + 4);
  if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
    *puVar1 = "LtCvxList";
    puVar1[3] = "StcheckHull";
    uVar2 = TBLr;
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar3 + 4) = puVar1 + 4;
  }
  cStack_5c = '\0';
  ppuStack_60 = &lbl_82138FF8;
  fn_82D74E60(param_2,param_3,param_4,&ppuStack_60);
  if (cStack_5c != '\0') {
    iVar3 = KeTlsGetValue(lbl_8323B4A0);
    puVar1 = *(undefined4 **)(iVar3 + 4);
    if (puVar1 < *(undefined4 **)(iVar3 + 0xc)) {
      *puVar1 = "Stchildren";
      uVar2 = TBLr;
      puVar1[1] = (int)uVar2;
      *(undefined4 **)(iVar3 + 4) = puVar1 + 3;
    }
    uStack_54 = 0;
    ppuStack_58 = &lbl_82138A6C;
    uStack_50 = param_5;
    fn_82D6C3E0(param_3,param_2,param_4,&ppuStack_58);
    ppuStack_58 = &lbl_82138A3C;
  }
  ppuStack_60 = &lbl_82138A3C;
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

