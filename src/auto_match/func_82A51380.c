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
extern unsigned int *auStack_50;
extern int fn_82A3FF60();
extern int fn_82A403E8();
extern int fn_82A403F0();
extern int fn_82A43408();
extern int fn_82A4F4E0();
extern int fn_82A4FAC0();
extern int fn_82A4FCF0();
extern int fn_82A4FD48();
extern int fn_82A4FDC8();
extern int fn_82A50828();


longlong fn_82A51380(int *param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar8;
  longlong lVar7;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 auStack_50 [20];
  
  (**(code **)(*(int *)(param_1[0xc] + 0x2c) + 8))(param_1[0xc] + 0x2c);
  iVar1 = param_1[0xd];
  if ((param_2 & 0xffffffff) == 0) {
    if (iVar1 != 0) {
      fn_82A4FAC0(iVar1,0x1337f001);
      param_1[0xd] = 0;
    }
  }
  else {
    uVar6 = fn_82A3FF60(0xffffffff83219d50,0x3c,0x20970004,0);
    if ((uVar6 & 0xffffffff) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = fn_82A4FCF0(uVar6,param_1);
    }
    if (iVar8 == 0) {
      lVar7 = -0x7ff8fff2;
      goto LAB_82a51600;
    }
    lVar7 = fn_82A4FDC8(iVar8,param_2);
    if (lVar7 < 0) {
      fn_82A4FD48(iVar8);
      fn_82A4F4E0(iVar8);
      goto LAB_82a51600;
    }
    iVar2 = param_1[0xd];
    if (iVar2 == 0) {
      iVar3 = param_1[0x1e];
    }
    else {
      iVar3 = *(int *)(iVar2 + 8);
      fn_82A4FAC0(iVar2,0x1337f001);
    }
    param_1[0xd] = iVar8;
    if (iVar3 != *(int *)(iVar8 + 8)) {
      if (param_1[0x20] == 0) {
        puVar9 = (undefined4 *)param_1[8];
        while (puVar9 != (undefined4 *)0x0) {
          if ((int)lVar7 < 0) goto LAB_82a51600;
          if (puVar9 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            puVar10 = (undefined4 *)*puVar9;
            puVar9 = (undefined4 *)puVar9[1];
          }
          iVar8 = param_1[0xd];
          uVar4 = *(undefined4 *)(*(int *)(puVar10[1] + 0x78) + 4);
          if (iVar8 == 0) {
            iVar2 = param_1[0x1e];
          }
          else {
            iVar2 = *(int *)(iVar8 + 8);
          }
          uVar6 = (ulonglong)(uint)param_1[0x20];
          uVar5 = *(undefined4 *)(iVar2 + 4);
          if (uVar6 == 0) {
            if (iVar8 == 0) {
              uVar6 = (ulonglong)(uint)param_1[0x21];
              if (uVar6 == 0) {
                uVar6 = (**(code **)(*param_1 + 0x68))(param_1);
              }
            }
            else {
              uVar6 = (ulonglong)*(uint *)(iVar8 + 0xc);
            }
          }
          lVar7 = fn_82A50828(param_1,1,0,*puVar10,uVar6,uVar5,uVar4,auStack_50);
          if (-1 < lVar7) {
            fn_82A403E8(param_1[0xc],*(undefined4 *)puVar10[2]);
            *(undefined4 *)puVar10[2] = auStack_50[0];
            lVar7 = fn_82A43408(puVar10[2],0x1337f001);
            if ((-1 < lVar7) && (param_1[1] != 1)) {
              lVar7 = (**(code **)**(undefined4 **)puVar10[2])
                                (*(undefined4 **)puVar10[2],0x1337f001);
            }
          }
        }
      }
      else {
        lVar7 = (**(code **)(*param_1 + 100))(param_1,param_1[0x11]);
      }
    }
    if ((int)lVar7 < 0) goto LAB_82a51600;
  }
  lVar7 = (**(code **)(**(int **)(param_1[0xc] + 0xb0) + 0x48))
                    (*(int **)(param_1[0xc] + 0xb0),0x1337f001);
LAB_82a51600:
  (**(code **)(*(int *)(param_1[0xc] + 0x2c) + 0x14))(param_1[0xc] + 0x2c);
  if (iVar1 != 0) {
    fn_82A4FD48(iVar1);
    fn_82A4F4E0(iVar1);
  }
  fn_82A403F0(param_1[0xc]);
  return lVar7;
}

