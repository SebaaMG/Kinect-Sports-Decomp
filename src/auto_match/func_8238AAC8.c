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
extern unsigned int *auStack_a0;
extern int fn_822A1630();
extern int fn_822A1968();
extern int fn_82359698();
extern int fn_82372A58();
extern int fn_8238A840();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_825521F0();
extern int fn_825604A0();
extern int fn_82566E58();
extern int fn_82567CC0();
extern int iRam83276568;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821B44EC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_8238AD00;
extern unsigned int uStack_40;


/* WARNING: Removing unreachable block (ram,0x8238ab38) */
/* WARNING: Removing unreachable block (ram,0x8238ac74) */

void fn_8238AAC8(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 uVar4;
  double dVar5;
  undefined4 auStack_a0 [4];
  undefined **ppuStack_90;
  undefined *puStack_8c;
  undefined ***pppuStack_80;
  undefined **ppuStack_70;
  undefined *puStack_6c;
  undefined ***pppuStack_60;
  undefined4 uStack_40;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar1 = *(int *)(param_1 + 8);
  if (iVar3 == 1) {
    iVar3 = fn_822A1968(*(undefined4 *)(iVar1 + 0xd4));
    if (iVar3 != 0) {
      return;
    }
    uVar4 = 2;
  }
  else if (iVar3 == 2) {
    iVar3 = iRam83276568;
    if (*(int *)(param_1 + 0x198) == 0) {
      puStack_6c = &lbl_8238AD00;
      pppuStack_60 = &ppuStack_70;
      ppuStack_70 = &lbl_821B44EC;
      fn_825521F0((double)lbl_821CA460,(double)lbl_8218E8E8,param_1,param_2,&ppuStack_70);
      iRam83276568 = 0;
      *(undefined4 *)(param_1 + 0x198) = 1;
      iVar3 = 0;
    }
    if (iVar3 == 0) {
      return;
    }
    uVar4 = 3;
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  else {
    if (iVar3 == 3) {
      fn_822A1630(*(undefined4 *)(iVar1 + 0xd4),4);
      fn_8238A840(param_1,4);
      auStack_a0[0] = *(undefined4 *)(iVar1 + 0x314);
      auStack_a0[0] =
           fn_82535298(auStack_a0,**(undefined4 **)(iVar1 + 0x9b8),0xffffffff83296bc0,
                             0xffffffff83296bd0);
      fn_82536288(auStack_a0);
      return;
    }
    if (iVar3 != 4) {
      if (iVar3 != 5) {
        return;
      }
      dVar5 = (double)lbl_8218E8E8;
      iVar3 = iRam83276568;
      if (*(int *)(param_1 + 0x198) == 0) {
        puStack_8c = &lbl_8238AD00;
        pppuStack_80 = &ppuStack_90;
        ppuStack_90 = &lbl_821B44EC;
        fn_825521F0((double)lbl_821CA460,dVar5,param_1,param_2,&ppuStack_90);
        iRam83276568 = 0;
        *(undefined4 *)(param_1 + 0x198) = 1;
        iVar3 = 0;
      }
      if (iVar3 == 0) {
        return;
      }
      uStack_40 = 0;
      fn_825521F0((double)lbl_821CC160,dVar5);
      *(undefined4 *)(param_1 + 0x198) = 0;
      fn_82566E58(*(undefined4 *)(param_1 + 400),
                        *(undefined4 *)(*(int *)(param_1 + 8) + 0x9b4));
      *(undefined4 *)(param_1 + 400) = 0;
      fn_825604A0(param_1 + 0x10);
      uVar2 = fn_82372A58(*(undefined4 *)(param_1 + 8));
      fn_82359698(iVar1,uVar2);
      *(undefined4 *)(param_1 + 0xc) = 0;
      return;
    }
    iVar3 = fn_82567CC0(*(undefined4 *)(param_1 + 400),param_1 + 0x10);
    if (iVar3 == 0) {
      return;
    }
    uVar4 = 5;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar4;
  return;
}

