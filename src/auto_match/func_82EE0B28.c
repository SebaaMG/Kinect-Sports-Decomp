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


longlong fn_82EE0B28(int *param_1,undefined2 *param_2,int param_3,uint *param_4)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ushort *puVar6;
  ushort auStack_60 [48];
  
  if (((param_2 == (undefined2 *)0x0) || (param_3 == 0)) || (param_4 == (uint *)0x0)) {
    return -0x7ff8ffa9;
  }
  *param_4 = 0;
  uVar2 = *(uint *)(param_3 + 0x18);
  if (uVar2 < 6) {
    *param_4 = 6;
    return -0x3ff2c94f;
  }
  param_2[1] = 0;
  puVar6 = param_2 + 4;
  *param_2 = 0;
  lVar3 = fn_82E57738(puVar6,param_3);
  if (lVar3 < 0) goto LAB_82ee0cf8;
  uVar1 = *puVar6;
  uVar5 = uVar1 + 6;
  if (uVar2 < uVar5) {
LAB_82ee0bb4:
    *param_4 = uVar5;
    lVar3 = -0x3ff2c94f;
    goto LAB_82ee0d1c;
  }
  if (((uVar1 & 1) == 0) && ((uVar1 & 0xfffffffe) < 0x801)) {
    if (*(int *)(param_2 + 6) != 0) {
      fn_82E4FE40();
    }
    *(undefined4 *)(param_2 + 6) = 0;
    uVar4 = fn_82E50BE8(*puVar6,0,0,0,0);
    *(int *)(param_2 + 6) = (int)uVar4;
    if ((uVar4 & 0xffffffff) != 0) {
      lVar3 = fn_82E577A0(uVar4,param_1 + 10,*puVar6 >> 1);
      if (-1 < lVar3) {
        if (*puVar6 != 0) {
          *(undefined2 *)((*puVar6 & 0xfffffffe) + *(int *)(param_2 + 6) + -2) = 0;
        }
        auStack_60[0] = 0;
        lVar3 = fn_82E57738(auStack_60,param_3);
        uVar1 = auStack_60[0];
        if (-1 < lVar3) {
          auStack_60[0] = 0;
          *(uint *)(param_2 + 2) = (uint)uVar1;
          lVar3 = fn_82E57738(auStack_60,param_3);
          if (-1 < lVar3) {
            uVar5 = (uint)*puVar6 + (uint)auStack_60[0] + 6;
            *(uint *)(param_2 + 8) = (uint)auStack_60[0];
            if (uVar2 < uVar5) goto LAB_82ee0bb4;
            lVar3 = fn_82E50BE8((uint)auStack_60[0],0,0,0,0);
            *(int *)(param_2 + 10) = (int)lVar3;
            if (lVar3 == 0) goto LAB_82ee0c10;
            lVar3 = (**(code **)(*param_1 + 0x3c))
                              (param_1,*(undefined4 *)(param_2 + 2),lVar3,param_1 + 10,
                               *(undefined4 *)(param_2 + 8));
          }
        }
      }
      goto LAB_82ee0cf8;
    }
LAB_82ee0c10:
    lVar3 = -0x7ff8fff2;
LAB_82ee0d08:
    *param_4 = uVar2 - *(int *)(param_3 + 0x18);
  }
  else {
    lVar3 = -0x3ff2c566;
LAB_82ee0cf8:
    if ((int)lVar3 != -0x3ff2c94f) goto LAB_82ee0d08;
  }
  if (-1 < (int)lVar3) {
    return lVar3;
  }
LAB_82ee0d1c:
  if (*(int *)(param_2 + 6) != 0) {
    fn_82E4FE40();
  }
  *(undefined4 *)(param_2 + 6) = 0;
  if (*(int *)(param_2 + 10) != 0) {
    fn_82E4FE40();
  }
  *(undefined4 *)(param_2 + 10) = 0;
  return lVar3;
}

