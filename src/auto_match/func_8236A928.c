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
extern int fn_822315A0();
extern int fn_8225F160();
extern int fn_822C4B78();
extern int fn_823DBA60();
extern int fn_824D46F0();
extern int fn_82522588();
extern unsigned int iStack_3c;


void fn_8236A928(int *param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_40 [4];
  int iStack_3c;
  
  iVar3 = (**(code **)(*param_1 + 200))();
  if ((iVar3 == 0) && (*(int *)(param_2 + 0x2c) != param_1[0x33])) {
    return;
  }
  iVar3 = *(int *)(param_2 + 0x24);
  iVar8 = (int)param_3;
  if (iVar3 == 0) {
    piVar1 = *(int **)(*(int *)(param_2 + 0x2c) * 4 + param_1[8]);
    if (piVar1[1] - *piVar1 >> 2 == 0) {
      return;
    }
    iVar3 = param_1[0x15];
    if (((((iVar3 == 10) || (param_1[0x16] == 0xb)) || (param_1[0x16] == 0xc)) ||
        ((iVar3 == 9 || (iVar3 == 0x12)))) || (bVar7 = true, iVar3 == 0x13)) {
      bVar7 = false;
    }
    if ((((param_2 != param_1[0x26a]) && ((param_1[0x26c] != param_1[0x33] || (bVar7)))) ||
        ((iVar3 == 0x11 || (param_1[0x16] == 0x11)))) &&
       (iVar3 = fn_8225F160(), *(int *)(iVar3 + 8) == 0)) {
      iVar3 = fn_8225F160();
      if (*(int *)(iVar3 + 8) == 0) {
        iVar3 = 1 - param_1[0x26b];
      }
      else {
        iVar3 = 0;
      }
      param_1[0x26b] = iVar3;
    }
    iVar3 = *(int *)(param_1[0x26b] * 4 + *piVar1);
    if (*(int *)(param_2 + 0x24) == iVar3) goto LAB_8236ab34;
    if (iVar8 == 7) {
LAB_8236ab14:
      uVar6 = 0;
    }
    else {
      iVar4 = fn_8225F160();
      uVar6 = 1;
      if (*(int *)(iVar4 + 0x40) != 0) goto LAB_8236ab14;
    }
    fn_822C4B78(param_2,iVar3,uVar6);
    fn_824D46F0(iVar3,param_3);
    param_1[0x26a] = param_2;
LAB_8236ab34:
    iVar3 = (**(code **)(*param_1 + 200))(param_1);
    if (iVar3 != 0) {
      return;
    }
    if ((iVar8 != 3) && (iVar8 != 7)) {
      fn_823DBA60(param_1[300],param_1[0x26b]);
    }
    for (uVar9 = (ulonglong)(uint)param_1[0xc];
        (uVar9 & 0xffffffff) != (ulonglong)(uint)param_1[0xd]; uVar9 = uVar9 + 8) {
      iVar3 = param_1[0x26b];
      iVar8 = *piVar1;
      piVar5 = (int *)fn_82522588(auStack_40,uVar9);
      *(undefined4 *)(*piVar5 + 0x10) = *(undefined4 *)(iVar3 * 4 + iVar8);
      if (iStack_3c != 0) {
        fn_822315A0();
      }
    }
    return;
  }
  iVar4 = (**(code **)(*param_1 + 200))(param_1);
  if ((iVar4 != 0) || (iVar4 = *(int *)(iVar3 + 0x170), iVar8 == iVar4)) goto LAB_8236a9f8;
  if (((iVar4 == 2) || (iVar4 == 3)) && (iVar8 == 4)) {
    bVar7 = true;
LAB_8236a9d0:
    bVar2 = false;
  }
  else {
    bVar7 = false;
    if ((iVar8 != 1) && (iVar8 != 7)) goto LAB_8236a9d0;
    bVar2 = true;
  }
  if ((!bVar7) && (!bVar2)) {
    fn_823DBA60(param_1[300],param_1[0x26b]);
  }
LAB_8236a9f8:
  fn_824D46F0(iVar3,param_3);
  return;
}

