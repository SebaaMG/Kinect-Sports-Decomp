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
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8239D490();
extern int fn_8256D470();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int lbl_821CC160;


undefined8 fn_823AB790(int *param_1,int param_2,ulonglong param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  longlong lStack_60;
  int iStack_58;
  int iStack_54;
  
  iVar2 = (**(code **)(*param_1 + 0x84))(param_1,param_3);
  if (iVar2 == 0) {
    return 1;
  }
  piVar5 = param_1 + 0x1b;
  for (puVar6 = (undefined4 *)param_1[0x1b];
      (puVar6 != (undefined4 *)param_1[0x1c] &&
      ((ulonglong)*(uint *)*puVar6 != (param_3 & 0xffffffff))); puVar6 = puVar6 + 2) {
  }
  for (puVar7 = (undefined4 *)param_1[0x1f];
      (puVar7 != (undefined4 *)param_1[0x20] &&
      ((ulonglong)*(uint *)*puVar7 != (param_3 & 0xffffffff))); puVar7 = puVar7 + 2) {
  }
  if (puVar6 == (undefined4 *)param_1[0x1c]) {
    if (puVar7 == (undefined4 *)param_1[0x20]) {
      return 0;
    }
    fn_82365BD8(&iStack_58,puVar7);
    uVar4 = (**(code **)(*param_1 + 4))(param_1);
    piVar5 = param_1 + 0x1f;
    puVar6 = puVar7;
    if (param_4 != (uint)LZCOUNT(uVar4) >> 5) {
      uVar3 = (uint)*(float *)(*(int *)((*(int **)**(undefined4 **)(param_2 + 8))[4] * 4 +
                                       **(int **)**(undefined4 **)(param_2 + 8)) + 0x20);
      lStack_60 = (longlong)(int)uVar3;
      fn_8239D490(param_2,0,(ulonglong)uVar3 + 1);
    }
  }
  else {
    fn_82365BD8(&iStack_58,puVar6);
    uVar3 = (**(code **)(*param_1 + 4))(param_1);
    bVar1 = *(char *)(iStack_58 + 9) == '\0';
    if (param_4 == uVar3) {
      if (bVar1) {
        *(undefined1 *)(iStack_58 + 9) = 1;
LAB_823ab8dc:
        if (iStack_54 != 0) {
          fn_822315A0();
        }
        return 0;
      }
    }
    else {
      if ((!bVar1) && (*(char *)(iStack_58 + 8) == '\0')) {
        *(undefined1 *)(iStack_58 + 8) = 1;
        goto LAB_823ab8dc;
      }
      param_1[0x27] = 0;
    }
  }
  fn_8256D470(&lStack_60,piVar5,puVar6);
  if ((float)param_1[0x23] <= lbl_821CC160) {
    param_1[1] = 2;
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  return 1;
}

