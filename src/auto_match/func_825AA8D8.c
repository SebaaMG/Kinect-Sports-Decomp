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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_822CB020();
extern int fn_825117D8();
extern int fn_82511928();
extern int fn_82513A80();
extern int fn_825290F0();
extern int fn_8255BCC0();
extern int fn_825AD9E8();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_83297800;
extern unsigned int lbl_83297810;


bool fn_825AA8D8(int *param_1)

{
  int iVar3;
  int iVar4;
  longlong lVar1;
  int iVar5;
  undefined1 uVar6;
  undefined8 uVar2;
  ulonglong uVar7;
  bool bVar8;
  undefined4 auStack_60 [2];
  int iStack_58;
  int iStack_54;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  iVar3 = lbl_83297800;
  if (lbl_83297800 == 0) {
    iVar3 = fn_825117D8();
  }
  if (*(char *)(iVar3 + 9) == '\0') {
    bVar8 = false;
  }
  else {
    iVar3 = param_1[4];
    bVar8 = false;
    uVar7 = (ulonglong)lbl_83297810;
    if (uVar7 == 0) {
      uVar7 = fn_82511928();
    }
    fn_82513A80(&iStack_58,uVar7,iVar3);
    if (iStack_58 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_8255BCC0(*(undefined4 *)(iStack_58 + 4));
    }
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x10) != 2)) {
      iVar4 = (**(code **)(*param_1 + 8))(param_1);
      auStack_60[0] = (**(code **)(*(int *)(iVar4 + 0x48) + 0x3c))();
      lVar1 = (**(code **)(*param_1 + 8))(param_1);
      fn_825AD9E8(auStack_40,lVar1 + 0x248);
      lVar1 = (**(code **)(*param_1 + 8))(param_1);
      fn_822CB020(auStack_50,lVar1 + 0x29c);
      iVar4 = (**(code **)(*param_1 + 8))(param_1);
      iVar5 = (**(code **)(*param_1 + 8))(param_1);
      uVar6 = (**(code **)(*(int *)(iVar4 + 0x198) + 0x3c))((int *)(iVar4 + 0x198));
      uVar2 = (**(code **)(*(int *)(iVar5 + 0x144) + 0x3c))((int *)(iVar5 + 0x144));
      lVar1 = fn_825290F0(iVar3,auStack_60,param_1,auStack_40,auStack_50,uVar2,uVar6);
      bVar8 = lVar1 != 0;
    }
    if (iStack_54 != 0) {
      fn_822315A0();
    }
  }
  return bVar8;
}

