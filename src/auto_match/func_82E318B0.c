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
extern unsigned int *auStack_64;
extern int fn_82E2F4C8();
extern int fn_82E2F530();
extern int fn_82E30E88();
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E5D7B8();
extern int fn_82E5DCA8();
extern int fn_82E5DFB8();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


longlong fn_82E318B0(int *param_1,int *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint auStack_64 [25];
  
  if (param_2 == (int *)0x0) {
    return -0x7fffbffd;
  }
  piStack_70 = (int *)0x0;
  uStack_6c = 0;
  uVar3 = 0;
  lVar1 = fn_82E30E88(param_1,&uStack_6c);
  if (-1 < lVar1) {
    uVar4 = (ulonglong)uStack_6c;
    if ((uVar4 == 0) || (uVar3 = fn_82E50BE8(uVar4,0,0,0,0), uVar3 != 0)) {
      uVar6 = 0;
      uVar5 = uVar3;
      uVar7 = uVar4;
      if (param_1[0x5a] != 0) {
        do {
          lVar1 = fn_82E2F4C8(param_1 + 0x40,uVar6,auStack_64);
          uVar8 = -(uint)(lVar1 != 0) & auStack_64[0];
          if (uVar8 == 0) goto LAB_82e31b38;
          if (piStack_70 != (int *)0x0) {
            (**(code **)(*piStack_70 + 8))();
            piStack_70 = (int *)0x0;
          }
          lVar1 = fn_82E5D7B8(uVar8,param_1[0x24],&piStack_70);
          if (lVar1 < 0) goto LAB_82e31b90;
          uStack_6c = 0;
          lVar1 = (**(code **)(*piStack_70 + 0x1c))(piStack_70,uVar5,uVar7,&uStack_6c);
          if (lVar1 < 0) goto LAB_82e31b90;
          uVar2 = (ulonglong)uStack_6c;
          if ((uVar7 & 0xffffffff) < uVar2) goto LAB_82e31b38;
          uVar6 = uVar6 + 1;
          uVar7 = uVar7 - uVar2;
          uVar5 = uVar2 + uVar5;
        } while ((uVar6 & 0xffffffff) < (ulonglong)(uint)param_1[0x5a]);
      }
      uVar6 = 0;
      if (param_1[0x75] != 0) {
        do {
          lVar1 = fn_82E2F530(param_1 + 0x5b,uVar6,auStack_64);
          uVar8 = -(uint)(lVar1 != 0) & auStack_64[0];
          if (uVar8 == 0) goto LAB_82e31b38;
          if (piStack_70 != (int *)0x0) {
            (**(code **)(*piStack_70 + 8))();
            piStack_70 = (int *)0x0;
          }
          lVar1 = fn_82E5DCA8(uVar8,param_1[0x24],&piStack_70);
          if (lVar1 < 0) goto LAB_82e31b90;
          uStack_68 = 0;
          lVar1 = (**(code **)(*piStack_70 + 0x1c))(piStack_70,uVar5,uVar7,&uStack_68);
          if (lVar1 < 0) goto LAB_82e31b90;
          uVar2 = (ulonglong)uStack_68;
          if ((uVar7 & 0xffffffff) < uVar2) goto LAB_82e31b38;
          uVar6 = uVar6 + 1;
          uVar7 = uVar7 - uVar2;
          uVar5 = uVar2 + uVar5;
        } while ((uVar6 & 0xffffffff) < (ulonglong)(uint)param_1[0x75]);
      }
      if (param_1[0x76] != 0) {
        if (piStack_70 != (int *)0x0) {
          (**(code **)(*piStack_70 + 8))();
          piStack_70 = (int *)0x0;
        }
        lVar1 = fn_82E5DFB8(param_1[0x76],param_1[0x24],&piStack_70);
        if (lVar1 < 0) goto LAB_82e31b90;
        auStack_64[0] = 0;
        lVar1 = (**(code **)(*piStack_70 + 0x1c))(piStack_70,uVar5,uVar7,auStack_64);
        if (lVar1 < 0) goto LAB_82e31b90;
        if ((uVar7 & 0xffffffff) < (ulonglong)auStack_64[0]) {
LAB_82e31b38:
          lVar1 = -0x3ff2c945;
          goto LAB_82e31b90;
        }
        uVar7 = uVar7 - auStack_64[0];
      }
      if ((uVar4 == uVar7) ||
         (lVar1 = (**(code **)(*param_2 + 0x68))(param_2,0xffffffff8214c710,uVar3), -1 < lVar1)) {
        (**(code **)(*param_1 + 0x80))(param_1,param_2);
      }
    }
    else {
      lVar1 = -0x7ff8fff2;
    }
  }
LAB_82e31b90:
  if (piStack_70 != (int *)0x0) {
    (**(code **)(*piStack_70 + 8))();
    piStack_70 = (int *)0x0;
  }
  if ((uVar3 & 0xffffffff) != 0) {
    fn_82E4FE40(uVar3);
  }
  return lVar1;
}

