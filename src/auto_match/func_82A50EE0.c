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
extern int fn_82A403E8();
extern int fn_82A42E20();
extern int fn_82A42FF8();
extern int fn_82A507C0();
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


longlong fn_82A50EE0(int *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  int *piStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar7 = 0;
  if ((param_2 & 0xffffffff) == (ulonglong)(uint)param_1[0x10]) {
    if (param_1[0x20] != 0) {
      fn_82A403E8(param_1[0xc]);
      param_1[0x20] = 0;
      param_1[0x1f] = 0;
    }
    goto LAB_82a5112c;
  }
  if ((param_1[0x1f] == 0) || ((ulonglong)(uint)param_1[0x11] != (param_2 & 0xffffffff))) {
    if (param_1[0xd] == 0) {
      uVar5 = (**(code **)(*param_1 + 0x6c))(param_1);
    }
    else {
      uVar5 = (ulonglong)*(uint *)(param_1[0xd] + 4);
    }
    if ((int *)param_1[0xd] == (int *)0x0) {
      iVar4 = param_1[0xf];
    }
    else {
      iVar4 = *(int *)param_1[0xd];
    }
    iVar4 = fn_82A42E20((ulonglong)(uint)param_1[0xc] + 0x250,0,iVar4,uVar5,param_2);
    param_1[0x1f] = iVar4;
    if (iVar4 != 0) goto LAB_82a50fb0;
    lVar7 = -0x7ff8fff2;
  }
  else {
LAB_82a50fb0:
    piVar6 = param_1 + 0x20;
    if (param_1[0x20] != 0) {
      fn_82A403E8(param_1[0xc]);
      *piVar6 = 0;
    }
    piStack_50 = (int *)0x0;
    lVar7 = fn_82A42FF8(&piStack_50);
    if (-1 < lVar7) {
      uStack_48 = lbl_82002AE0;
      uStack_44 = lbl_82002AE0;
      (**(code **)*piStack_50)(piStack_50,0xffffffff82089748,&piStack_4c);
      (**(code **)(*piStack_4c + 0x18))(piStack_4c,&uStack_48,8);
      (**(code **)(*piStack_4c + 8))();
      iVar4 = param_1[0xd];
      uVar1 = *(undefined4 *)(param_1[0x1f] + 4);
      if (iVar4 == 0) {
        iVar2 = param_1[0x1e];
      }
      else {
        iVar2 = *(int *)(iVar4 + 8);
      }
      uVar3 = *(undefined4 *)(iVar2 + 4);
      if (iVar4 == 0) {
        uVar5 = (ulonglong)(uint)param_1[0x21];
        if (uVar5 == 0) {
          uVar5 = (**(code **)(*param_1 + 0x68))(param_1);
        }
      }
      else {
        uVar5 = (ulonglong)*(uint *)(iVar4 + 0xc);
      }
      lVar7 = fn_82A507C0(param_1,piStack_50,uVar5,uVar3,uVar1,piVar6);
      (**(code **)(*piStack_50 + 8))(piStack_50);
      if (-1 < (int)lVar7) {
        if (param_1[1] != 1) {
          lVar7 = (*(code *)**(undefined4 **)*piVar6)((undefined4 *)*piVar6,0x1337f001);
        }
        if (-1 < (int)lVar7) goto LAB_82a5112c;
      }
    }
  }
  if (param_1[0x20] != 0) {
    fn_82A403E8(param_1[0xc]);
    param_1[0x20] = 0;
  }
  param_1[0x1f] = 0;
  if ((int)lVar7 < 0) {
    return lVar7;
  }
LAB_82a5112c:
  param_1[0x11] = (int)param_2;
  return lVar7;
}

