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
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57820();


undefined8 fn_82F3D8F0(int *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  
  if (param_1[3] == 0) {
    return 0xffffffffc00d36b6;
  }
  if (param_2 == (uint *)0x0) {
    return 0xffffffff80070057;
  }
  uVar1 = param_1[0x10];
  iVar2 = 0;
  *param_2 = 0;
  if ((ulonglong)uVar1 < 0x18) {
    *param_2 = 0x18;
  }
  else {
    piVar4 = param_1 + 10;
    fn_82E57620(param_1 + 4,piVar4);
    fn_82E576A8(param_1 + 8,piVar4);
    uVar3 = *(ulonglong *)(param_1 + 8);
    if (uVar3 < 0x18) {
      iVar2 = -0x7fff0001;
    }
    else if (uVar3 < 0xffffffff) {
      param_1[0x12] = (uint)uVar3 - 0x18;
      if ((ulonglong)uVar1 < (uVar3 & 0xffffffff)) {
        *param_2 = (uint)uVar3;
        return 0;
      }
      if (param_1[0x13] != 0) {
        fn_82E4FE40();
      }
      param_1[0x13] = 0;
      if (param_1[0x12] != 0) {
        uVar3 = fn_82E50BE8(param_1[0x12],0,0,0,0);
        param_1[0x13] = (int)uVar3;
        if ((uVar3 & 0xffffffff) == 0) {
          iVar2 = -0x7ff8fff2;
        }
        else {
          iVar2 = fn_82E57820(uVar3,piVar4,param_1[0x12]);
          if (iVar2 == -0x3ff2c94f) {
            return 0;
          }
        }
      }
    }
    else {
      iVar2 = -0x3ff2c566;
    }
    *param_2 = uVar1 - param_1[0x10];
    if ((-1 < iVar2) && (uVar3 = (**(code **)(*param_1 + 0x2c))(param_1), uVar3 != *param_2)) {
      return 0xffffffffc00d3a9a;
    }
  }
  return 0;
}

