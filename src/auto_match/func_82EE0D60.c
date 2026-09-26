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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57738();
extern int fn_82E577A0();
extern int fn_82E59EC8();


longlong fn_82EE0D60(int *param_1,int param_2,int param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  int *piVar6;
  ushort *puVar7;
  ushort auStack_60 [48];
  
  if (((param_2 == 0) || (param_3 == 0)) || (param_4 == (uint *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_4 = 0;
  uVar2 = *(uint *)(param_3 + 0x18);
  if (uVar2 < 0xc) {
    *param_4 = 0xc;
  }
  lVar3 = fn_82E57738(param_2,param_3);
  if ((lVar3 < 0) || (lVar3 = fn_82E57738(param_2 + 2,param_3), lVar3 < 0)) {
LAB_82ee0f68:
    if ((int)lVar3 != -0x3ff2c94f) goto LAB_82ee0f78;
  }
  else {
    puVar7 = (ushort *)(param_2 + 8);
    lVar3 = fn_82E57738(puVar7,param_3);
    if (lVar3 < 0) goto LAB_82ee0f68;
    auStack_60[0] = 0;
    lVar3 = fn_82E57738(auStack_60,param_3);
    if (lVar3 < 0) goto LAB_82ee0f68;
    piVar6 = (int *)(param_2 + 0x10);
    *(uint *)(param_2 + 4) = (uint)auStack_60[0];
    lVar3 = fn_82E59EC8(piVar6,param_3);
    if (lVar3 < 0) goto LAB_82ee0f68;
    uVar1 = *puVar7;
    uVar5 = *piVar6 + (uint)uVar1 + 0xc;
    if (uVar2 < uVar5) {
      *param_4 = uVar5;
      lVar3 = -0x3ff2c94f;
      goto LAB_82ee0f8c;
    }
    if (((uVar1 & 1) != 0) || (0x800 < (uVar1 & 0xfffffffe))) {
      lVar3 = -0x3ff2c566;
      goto LAB_82ee0f68;
    }
    if (*(int *)(param_2 + 0xc) != 0) {
      fn_82E4FE40();
    }
    *(undefined4 *)(param_2 + 0xc) = 0;
    uVar4 = fn_82E50BE8(*puVar7,0,0,0,0);
    *(int *)(param_2 + 0xc) = (int)uVar4;
    if ((uVar4 & 0xffffffff) != 0) {
      lVar3 = fn_82E577A0(uVar4,param_1 + 10,*puVar7 >> 1);
      if (-1 < lVar3) {
        if (*puVar7 != 0) {
          *(undefined2 *)((*puVar7 & 0xfffffffe) + *(int *)(param_2 + 0xc) + -2) = 0;
        }
        if (((*(uint *)(param_2 + 4) & 0x8000) == 0) || (param_1[0x96] != 0)) {
          lVar3 = fn_82E50BE8(*piVar6,0,0,0,0);
          *(int *)(param_2 + 0x14) = (int)lVar3;
          if (lVar3 == 0) goto LAB_82ee0e9c;
          lVar3 = (**(code **)(*param_1 + 0x3c))
                            (param_1,*(undefined4 *)(param_2 + 4),lVar3,param_1 + 10,*piVar6);
        }
        else {
          *piVar6 = 0;
          if (*(int *)(param_2 + 0x14) != 0) {
            fn_82E4FE40();
          }
          *(undefined4 *)(param_2 + 0x14) = 0;
        }
      }
      goto LAB_82ee0f68;
    }
LAB_82ee0e9c:
    lVar3 = -0x7ff8fff2;
LAB_82ee0f78:
    *param_4 = uVar2 - *(int *)(param_3 + 0x18);
  }
  if (-1 < (int)lVar3) {
    return lVar3;
  }
LAB_82ee0f8c:
  if (*(int *)(param_2 + 0xc) != 0) {
    fn_82E4FE40();
  }
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (*(int *)(param_2 + 0x14) != 0) {
    fn_82E4FE40();
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  return lVar3;
}

