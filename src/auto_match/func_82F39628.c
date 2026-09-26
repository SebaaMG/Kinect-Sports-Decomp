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


longlong fn_82F39628(int *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int *piVar4;
  int *piVar5;
  
  if (param_1[3] == 0) {
    return -0x3ff2c94a;
  }
  uVar1 = param_1[0x10];
  if (param_2 == (uint *)0x0) {
    return -0x7ff8ffa9;
  }
  *param_2 = 0;
  if (uVar1 < 0x20) {
    *param_2 = 0x20;
    return -0x3ff2c94f;
  }
  piVar5 = param_1 + 10;
  fn_82E57620(param_1 + 4,piVar5);
  fn_82E576A8(param_1 + 8,piVar5);
  lVar2 = fn_82E59EC8(param_1 + 0x12,piVar5);
  if (-1 < lVar2) {
    piVar4 = param_1 + 0x14;
    lVar2 = fn_82E59EC8(piVar4,piVar5);
    if ((-1 < lVar2) && (*piVar4 != 0)) {
      uVar3 = fn_82E50BE8(*piVar4,0,0,0,0);
      param_1[0x13] = (int)uVar3;
      if ((uVar3 & 0xffffffff) == 0) {
        lVar2 = -0x7ff8fff2;
        goto LAB_82f39730;
      }
      lVar2 = fn_82E57820(uVar3,piVar5,*piVar4);
    }
  }
  if ((int)lVar2 == -0x3ff2c94f) {
    return lVar2;
  }
LAB_82f39730:
  *param_2 = uVar1 - param_1[0x10];
  if ((-1 < (int)lVar2) && (uVar3 = (**(code **)(*param_1 + 0x2c))(param_1), uVar3 != *param_2)) {
    lVar2 = -0x3ff2c566;
  }
  return lVar2;
}

