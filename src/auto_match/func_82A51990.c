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
extern unsigned int *auStack_60;
extern int fn_82A3FF60();
extern int fn_82A403E8();
extern int fn_82A484F8();
extern int fn_82A4F4E0();
extern int fn_82A50828();
extern int fn_82A50948();
extern int fn_82A511A0();
extern int fn_82A51260();
extern int fn_82A51860();


ulonglong fn_82A51990(int *param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar4;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined4 auStack_60 [24];
  
  uVar11 = 0;
  uVar8 = 0;
  if (*param_2 != 0) {
    iVar9 = 0;
    do {
      if ((int)uVar11 < 0) goto LAB_82a51c48;
      iVar1 = *(int *)(iVar9 + param_2[1] + 4);
      piVar10 = (int *)(iVar1 + 4);
      iVar5 = (**(code **)(*param_1 + 0x54))(param_1);
      if (iVar5 == 3) {
        (**(code **)(*piVar10 + 0x54))(piVar10);
      }
      auStack_60[0] = 0;
      iVar5 = param_1[0x1f];
      uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0x7c) + 4);
      if (iVar5 == 0) {
        if (param_1[0xd] == 0) {
          iVar5 = param_1[0x1e];
        }
        else {
          iVar5 = *(int *)(param_1[0xd] + 8);
        }
      }
      uVar11 = (ulonglong)(uint)param_1[0x20];
      uVar3 = *(undefined4 *)(iVar5 + 4);
      if (uVar11 == 0) {
        if (param_1[0xd] == 0) {
          uVar11 = (ulonglong)(uint)param_1[0x21];
          if (uVar11 == 0) {
            uVar11 = (**(code **)(*param_1 + 0x68))(param_1);
          }
        }
        else {
          uVar11 = (ulonglong)*(uint *)(param_1[0xd] + 0xc);
        }
      }
      uVar11 = fn_82A50828(param_1,1,0,*(undefined4 *)(iVar9 + param_2[1]),uVar11,uVar3,uVar2,
                             auStack_60);
      if (-1 < (longlong)uVar11) {
        puVar6 = (undefined4 *)fn_82A3FF60(0xffffffff83219d50,0xc,0x20970002,0);
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar6[2] = 0;
        }
        if (puVar6 == (undefined4 *)0x0) {
LAB_82a51b48:
          uVar11 = 0xffffffff8007000e;
        }
        else {
          if ((int *)param_1[0xd] == (int *)0x0) {
            iVar5 = param_1[0xf];
          }
          else {
            iVar5 = *(int *)param_1[0xd];
          }
          uVar11 = fn_82A511A0(puVar6,*(undefined4 *)(iVar9 + param_2[1]),piVar10,auStack_60[0],
                                 iVar5);
          if (-1 < (longlong)uVar11) {
            iVar5 = fn_82A484F8(param_1 + 2,puVar6);
            if (iVar5 == 0) goto LAB_82a51b48;
            if ((param_1[1] == 1) ||
               (uVar11 = (**(code **)**(undefined4 **)puVar6[2])
                                   (*(undefined4 **)puVar6[2],0x1337f001), -1 < (longlong)uVar11)) {
              lVar4 = fn_82A484F8(iVar1 + 0x54,param_1);
              uVar11 = -(ulonglong)(lVar4 == 0) & 0xffffffff8007000e;
              if (-1 < (longlong)uVar11) goto LAB_82a51bec;
            }
          }
        }
        if ((undefined4 *)param_1[9] == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = *(undefined4 **)param_1[9];
        }
        if (puVar7 == puVar6) {
          fn_82A50948(param_1 + 2);
        }
        if (puVar6 != (undefined4 *)0x0) {
          fn_82A51260(puVar6);
          fn_82A4F4E0(puVar6);
        }
        fn_82A403E8(param_1[0xc],auStack_60[0]);
      }
LAB_82a51bec:
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + 8;
    } while (uVar8 < *param_2);
    if ((int)uVar11 < 0) goto LAB_82a51c48;
  }
  if ((int *)param_1[0xd] == (int *)0x0) {
    iVar9 = param_1[0xf];
  }
  else {
    iVar9 = *(int *)param_1[0xd];
  }
  uVar11 = (**(code **)(*param_1 + 0x60))(param_1,iVar9,param_1[0x13],0x1337f001);
  if (-1 < (longlong)uVar11) {
    return uVar11;
  }
LAB_82a51c48:
  fn_82A51860(param_1);
  return uVar11;
}

