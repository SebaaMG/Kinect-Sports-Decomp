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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E59EC8();
extern int fn_82E72560();
extern int fn_82E726E0();
extern unsigned int uStack_50;


undefined8 fn_82E72858(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar3;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uStack_50;
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if (param_2 == (uint *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    uVar8 = param_1[0x10];
    if (uVar8 < 0x1e) {
      uVar5 = 0x1e;
    }
    else {
      fn_82E726E0(param_1);
      piVar7 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar7);
      fn_82E576A8(param_1 + 8,piVar7);
      uVar2 = fn_82E59EC8(param_1 + 0x12,piVar7);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uStack_50 = (uint)(((U64)(uStack_50) >> 16) & 0xFFFF);
      uVar2 = fn_82E57738(&uStack_50,piVar7);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar1 = uStack_50 >> 0x10;
      uVar6 = 0x1e;
      uVar5 = uVar1 * 4 + 0x1e;
      if (uVar5 <= uVar8) {
        uVar8 = 0;
        uVar5 = 0x1e;
        if (uVar1 != 0) {
          do {
            uStack_50 = 0;
            uVar2 = fn_82E57738(&uStack_50,piVar7);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_82E57738((int)&uStack_50 + 2,piVar7);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar6 = uVar5 + 4;
            if ((3 < (((U64)(uStack_50) >> 16) & 0xFFFF)) && ((((U64)(uStack_50) >> 16) & 0xFFFF) != 0xff)) {
              uStack_50 = CONCAT22((((U64)(uStack_50) >> 0) & 0xFFFF),3);
            }
            iVar4 = fn_82E72560(param_1 + 0x13,uStack_50,0);
            if (iVar4 == 0) {
              return 0xffffffff8007000e;
            }
            uVar8 = uVar8 + 1 & 0xffff;
            uVar5 = uVar6;
          } while (uVar8 < uVar1);
        }
        *param_2 = uVar6;
        uVar3 = (**(code **)(*param_1 + 0x2c))(param_1);
        if (uVar3 != *param_2) {
          return 0xffffffffc00d3a9a;
        }
        return 0;
      }
    }
    *param_2 = uVar5;
    uVar2 = 0xffffffffc00d36b1;
  }
  return uVar2;
}

