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
extern int fn_822C72E0();
extern int fn_822C8C08();
extern int fn_82337B90();
extern int fn_82338F48();
extern int fn_82341BF0();
extern int fn_82349F78();
extern int fn_824CD030();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


void fn_82345140(int param_1,undefined8 param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  fn_82349F78();
  iVar2 = fn_82337B90(**(undefined4 **)(param_1 + 0xc));
  if (iVar2 == 0) {
    return;
  }
  if (param_3 == 3) {
    iVar2 = *(int *)(*(int *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0xc) + 0x174);
    if (*(int *)(*(int *)(iVar2 + 0x5c) + 0x1d4) == -1) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x5c);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x1d4) * 4 + *(int *)(iVar2 + 0x1c4));
    }
    if (*(int *)(*(int *)(iVar2 + 0x40) + 0xf0) == 0) {
      fn_822C8C08(*(undefined4 *)(param_1 + 8),0xffffffff821aca8c);
      fn_82341BF0(param_1);
      return;
    }
    iVar2 = *(int *)(**(int **)(param_1 + 0xc) + 0x118);
    fVar1 = lbl_821CC160;
LAB_82345330:
    fn_827F57E8((double)fVar1,(double)lbl_8218E8FC,*(undefined4 *)(iVar2 + 0x10));
    *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x108) =
         *(undefined4 *)(*(int *)(iVar2 + 0x10) + 0x10c);
    return;
  }
  if (param_3 == 4) {
    iVar2 = *(int *)(**(int **)(param_1 + 0xc) + 0x118);
    fVar1 = lbl_821CA460;
    goto LAB_82345330;
  }
  if (param_3 == 9) {
    uVar4 = 0;
    goto LAB_82345294;
  }
  if (0xb < param_3) {
    if (0xd < param_3) {
      if (param_3 == 0xe) {
        *(undefined4 *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0x1c) = 0;
        fn_822C72E0(*(undefined4 *)(*(int *)(param_1 + 8) + 0x20),0xffffffff821b0f54);
        iVar2 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
        if (iVar2 == 0) {
          return;
        }
        (*(int **)(param_1 + 0xc))[4] = 2;
        iVar3 = fn_824CD030(iVar2);
        if (iVar3 != 0) {
          (**(code **)(*(int *)**(undefined4 **)(iVar2 + 0xfc) + 0x24))();
          *(undefined4 *)(*(int *)(**(int **)(iVar2 + 0xfc) + 0x3c) + 0x78) = 0;
        }
        goto LAB_8234527c;
      }
      if (param_3 != 0xf) goto LAB_823451a4;
    }
    uVar4 = 1;
LAB_82345294:
    fn_82338F48(**(undefined4 **)(param_1 + 0xc),uVar4);
    return;
  }
LAB_823451a4:
  iVar2 = *(int *)(**(int **)(param_1 + 0xc) + 0x24);
  if (iVar2 == 0) {
    return;
  }
  (*(int **)(param_1 + 0xc))[4] = 2;
  iVar3 = fn_824CD030(iVar2);
  if (iVar3 != 0) {
    (**(code **)(*(int *)**(undefined4 **)(iVar2 + 0xfc) + 0x24))();
    *(undefined4 *)(*(int *)(**(int **)(iVar2 + 0xfc) + 0x3c) + 0x78) = 0;
  }
LAB_8234527c:
  *(undefined4 *)(*(int *)(iVar2 + 0xfc) + 100) = 2;
  return;
}

