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
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57820();
extern int fn_82E59EC8();


longlong fn_82EF3BF0(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  int *piVar6;
  int aiStack_50 [20];
  
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  uVar1 = param_1[0x10];
  if (param_2 == (uint *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  if (uVar1 < 0x28) {
    *param_2 = 0x28;
    return -0x3ff2c94f;
  }
  piVar6 = param_1 + 10;
  fn_82E57620(param_1 + 4,piVar6);
  fn_82E576A8(param_1 + 8,piVar6);
  piVar5 = param_1 + 0x15;
  lVar3 = fn_82E59EC8(piVar5,piVar6);
  if (-1 < lVar3) {
    if (*piVar5 != 0) {
      uVar4 = fn_82E50BE8(*piVar5,0,0,0,0);
      param_1[0x14] = (int)uVar4;
      if ((uVar4 & 0xffffffff) != 0) {
        lVar3 = fn_82E57820(uVar4,piVar6,*piVar5);
        if (lVar3 < 0) goto LAB_82ef3e08;
        goto LAB_82ef3cd8;
      }
LAB_82ef3cb8:
      lVar3 = -0x7ff8fff2;
      goto LAB_82ef3e18;
    }
LAB_82ef3cd8:
    aiStack_50[0] = 0;
    lVar3 = fn_82E59EC8(aiStack_50,piVar6);
    iVar2 = aiStack_50[0];
    if (-1 < lVar3) {
      if (aiStack_50[0] != 0) {
        uVar4 = fn_82E50BE8(aiStack_50[0],0,0,0,0);
        param_1[0x12] = (int)uVar4;
        if ((uVar4 & 0xffffffff) == 0) goto LAB_82ef3cb8;
        lVar3 = fn_82E57820(uVar4,piVar6,iVar2);
        if (lVar3 < 0) goto LAB_82ef3e08;
        *(undefined1 *)(param_1[0x12] + iVar2 + -1) = 0;
      }
      lVar3 = fn_82E59EC8(aiStack_50,piVar6);
      iVar2 = aiStack_50[0];
      if (-1 < lVar3) {
        if (aiStack_50[0] != 0) {
          uVar4 = fn_82E50BE8(aiStack_50[0],0,0,0,0);
          param_1[0x13] = (int)uVar4;
          if ((uVar4 & 0xffffffff) == 0) goto LAB_82ef3cb8;
          lVar3 = fn_82E57820(uVar4,piVar6,iVar2);
          if (lVar3 < 0) goto LAB_82ef3e08;
          *(undefined1 *)(param_1[0x13] + iVar2 + -1) = 0;
        }
        lVar3 = fn_82E59EC8(aiStack_50,piVar6);
        iVar2 = aiStack_50[0];
        if ((-1 < lVar3) && (aiStack_50[0] != 0)) {
          uVar4 = fn_82E50BE8(aiStack_50[0],0,0,0,0);
          param_1[0x16] = (int)uVar4;
          if ((uVar4 & 0xffffffff) == 0) goto LAB_82ef3cb8;
          lVar3 = fn_82E57820(uVar4,piVar6,iVar2);
          if (-1 < lVar3) {
            *(undefined1 *)(param_1[0x16] + iVar2 + -1) = 0;
          }
        }
      }
    }
  }
LAB_82ef3e08:
  if ((int)lVar3 == -0x3ff2c94f) {
    return lVar3;
  }
LAB_82ef3e18:
  *param_2 = uVar1 - param_1[0x10];
  if ((-1 < (int)lVar3) && (uVar4 = (**(code **)(*param_1 + 0x2c))(param_1), uVar4 != *param_2)) {
    lVar3 = -0x3ff2c566;
  }
  return lVar3;
}

