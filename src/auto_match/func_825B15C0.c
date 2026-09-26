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
extern int fn_82815578();
extern int fn_8283FF08();
extern int fn_82849D18();
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int lbl_821C81F4;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


void fn_825B15C0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  
  if (((*(int *)(param_1 + 300) != 0) && (*(int *)(*(int *)(param_1 + 0x128) + 4) != 0)) &&
     (uVar5 = 0, *(int *)(param_1 + 300) != 0)) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      iStack_60 = iVar7 + *(int *)(param_1 + 0x128);
      puStack_70 = &lbl_821C81F4;
      if (*(int *)(iStack_60 + 4) != 0) {
        iVar4 = iVar7 + *(int *)(param_1 + 0x128);
        iVar1 = *(int *)(iVar4 + 0xc);
        uVar2 = *(undefined4 *)(iVar4 + 4);
        uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x4c) + iVar6 + 4);
        uStack_6c = param_3;
        uStack_68 = param_4;
        iStack_64 = param_1;
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
          fn_82849D18();
        }
        fn_8283FF08(uVar2,uVar3,&puStack_70);
        fn_82815578(uVar3);
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x10;
      iVar7 = iVar7 + 0x20;
    } while (uVar5 < *(uint *)(param_1 + 300));
  }
  return;
}

