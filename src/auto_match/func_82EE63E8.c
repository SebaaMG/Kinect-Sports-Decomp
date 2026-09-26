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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_44;
extern unsigned int *auStack_50;
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E57738();
extern int fn_82E59EC8();
extern int fn_82EE62E8();
extern unsigned int uStack_46;
extern unsigned int uStack_48;


undefined8 fn_82EE63E8(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar4;
  ulonglong uVar3;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  ushort auStack_50 [4];
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined4 auStack_44 [17];
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if (param_2 == (uint *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    if (uVar1 < 0x1a) {
      uVar5 = 0x1a;
    }
    else {
      piVar6 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar6);
      fn_82E576A8(param_1 + 8,piVar6);
      uVar2 = fn_82E57738(auStack_50,piVar6);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      uVar7 = (uint)auStack_50[0];
      uVar5 = uVar7 * 6 + 0x1a;
      if (uVar5 <= uVar1) {
        uVar5 = 0;
        if (uVar7 != 0) {
          do {
            uStack_48 = 0;
            auStack_44[0] = 0;
            uVar2 = fn_82E57738(&uStack_48,piVar6);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            uVar2 = fn_82E59EC8(auStack_44,piVar6);
            if ((int)uVar2 < 0) {
              return uVar2;
            }
            iVar4 = fn_82EE62E8(param_1 + 0x12,
                                    CONCAT44(CONCAT22(uStack_48,uStack_46),auStack_44[0]),0);
            if (iVar4 == 0) {
              return 0xffffffff8007000e;
            }
            uVar5 = uVar5 + 1 & 0xffff;
          } while (uVar5 < uVar7);
        }
        *param_2 = uVar1 - param_1[0x10];
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

