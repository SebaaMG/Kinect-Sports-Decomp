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
extern int fn_82E57620();
extern int fn_82E576A8();
extern int fn_82E59EC8();
extern int fn_82EE5E28();
extern int fn_82EE5F60();


undefined8 fn_82E62028(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  int *piVar4;
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if (param_2 == (uint *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    uVar1 = param_1[0x10];
    if (uVar1 < 0x68) {
      *param_2 = 0x68;
      uVar2 = 0xffffffffc00d36b1;
    }
    else {
      piVar4 = param_1 + 10;
      fn_82E57620(param_1 + 4,piVar4);
      fn_82E576A8(param_1 + 8,piVar4);
      uVar2 = fn_82E57620(param_1 + 0x12,piVar4);
      if ((-1 < (int)uVar2) && (uVar2 = fn_82E576A8(param_1 + 0x16,piVar4), -1 < (int)uVar2))
      {
        uVar2 = fn_82EE5F60(piVar4,param_1 + 0x18,8);
        if (-1 < (int)uVar2) {
          uVar2 = fn_82EE5E28(piVar4,8);
        }
        if ((((((-1 < (int)uVar2) &&
               (uVar2 = fn_82E576A8(param_1 + 0x1a,piVar4), -1 < (int)uVar2)) &&
              (uVar2 = fn_82E576A8(param_1 + 0x1c,piVar4), -1 < (int)uVar2)) &&
             ((uVar2 = fn_82E576A8(param_1 + 0x1e,piVar4), -1 < (int)uVar2 &&
              (uVar2 = fn_82E576A8(param_1 + 0x20,piVar4), -1 < (int)uVar2)))) &&
            ((uVar2 = fn_82E59EC8(param_1 + 0x22,piVar4), -1 < (int)uVar2 &&
             ((uVar2 = fn_82E59EC8(param_1 + 0x23,piVar4), -1 < (int)uVar2 &&
              (uVar2 = fn_82E59EC8(param_1 + 0x24,piVar4), -1 < (int)uVar2)))))) &&
           (uVar2 = fn_82E59EC8(param_1 + 0x25,piVar4), -1 < (int)uVar2)) {
          *param_2 = uVar1 - param_1[0x10];
          uVar3 = (**(code **)(*param_1 + 0x2c))(param_1);
          if (uVar3 == *param_2) {
            uVar2 = 0;
          }
          else {
            uVar2 = 0xffffffffc00d3a9a;
          }
        }
      }
    }
  }
  return uVar2;
}

