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
extern unsigned int *auStack_7c;
extern int fn_822AA770();
extern int fn_822AEA70();
extern int fn_822CEEC8();
extern int fn_82372CA0();
extern int fn_824CCD80();
extern int fn_825521F0();
extern int fn_825603C8();
extern int fn_825605B0();
extern int fn_82566CA8();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821B44D4;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_40;
extern unsigned int uStack_80;


void fn_8238A840(int param_1,int param_2)

{
  int iVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  undefined4 uVar5;
  undefined4 *puVar6;
  double dVar7;
  undefined4 uStack_80;
  undefined4 auStack_7c [3];
  undefined **appuStack_70 [4];
  undefined ***pppuStack_60;
  undefined4 uStack_40;
  
  iVar1 = *(int *)(param_1 + 8);
  *(int *)(param_1 + 0xc) = param_2;
  if (param_2 == 4) {
    uStack_80 = *(undefined4 *)(iVar1 + 0x2d4);
    auStack_7c[0] = *(undefined4 *)(iVar1 + 0x2d8);
    iVar3 = fn_822AA770(*(undefined4 *)(*(int *)(iVar1 + 0xcc) * 4 + **(int **)(iVar1 + 8)));
    iVar4 = fn_822CEEC8();
    puVar6 = &uStack_80;
    if (iVar4 == 0) {
      puVar6 = auStack_7c;
    }
    uVar2 = fn_824CCD80(*(undefined4 *)(iVar3 + 0x24));
    fn_825603C8(uVar2,param_1 + 0x10,1);
    fn_825605B0(uVar2,param_1 + 0x94);
    dVar7 = (double)lbl_821CC160;
    uVar5 = fn_82566CA8(dVar7,*(undefined4 *)(iVar1 + 0x9b4),puVar6,0,param_1 + 0x10,0,0);
    *(undefined4 *)(param_1 + 400) = uVar5;
    fn_82372CA0(iVar1);
    pppuStack_60 = appuStack_70;
    appuStack_70[0] = &lbl_821B44D4;
    fn_822AEA70(*(undefined4 *)(iVar1 + 8),appuStack_70);
    uStack_40 = 0;
    fn_825521F0(dVar7,(double)lbl_8218E8E8);
  }
  return;
}

