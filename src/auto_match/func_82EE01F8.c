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
extern int fn_82E57738();
extern int fn_82E577A0();
extern int fn_82E57820();
extern int fn_82E59EC8();


undefined8
fn_82EE01F8(int *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,ulonglong param_5
             )

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x44))(param_1,param_2,param_5);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  if ((int)param_2 < 7) {
    if ((int)param_2 == 6) {
      uVar2 = fn_82E57620(param_3,param_4);
      return uVar2;
    }
    if ((param_2 & 0xffffffff) == 0) {
LAB_82ee02fc:
      if ((param_5 & 1) != 0) {
        return 0xffffffffc00d3a9a;
      }
      uVar2 = fn_82E577A0(param_3,param_4,(param_5 & 0xffffffff) >> 1);
      return uVar2;
    }
    if ((param_2 & 0xffffffff) == 1) {
LAB_82ee02e8:
      uVar2 = fn_82E57820(param_3,param_4,param_5);
      return uVar2;
    }
    if ((param_2 & 0xffffffff) < 3) {
LAB_82ee02c8:
      if ((param_5 & 0xffffffff) != 2) {
        if ((param_5 & 0xffffffff) != 4) {
          return 0xffffffffc00d3a9a;
        }
LAB_82ee02d8:
        uVar2 = fn_82E59EC8(param_3,param_4);
        return uVar2;
      }
      goto LAB_82ee02b8;
    }
    if ((param_2 & 0xffffffff) == 3) goto LAB_82ee02d8;
    bVar1 = (param_2 & 0xffffffff) == 5;
    if ((param_2 & 0xffffffff) < 5) {
LAB_82ee025c:
      uVar2 = fn_82E576A8(param_3,param_4);
      return uVar2;
    }
  }
  else {
    if ((param_2 & 0xffffffff) == 0x8000) goto LAB_82ee02fc;
    if ((param_2 & 0xffffffff) == 0x8001) goto LAB_82ee02e8;
    if ((param_2 & 0xffffffff) == 0x8002) goto LAB_82ee02c8;
    if ((param_2 & 0xffffffff) == 0x8003) goto LAB_82ee02d8;
    if ((param_2 & 0xffffffff) == 0x8004) goto LAB_82ee025c;
    bVar1 = (param_2 & 0xffffffff) == 0x8005;
  }
  if (!bVar1) {
    return 0xffffffffc00d3a9a;
  }
LAB_82ee02b8:
  uVar2 = fn_82E57738(param_3,param_4);
  return uVar2;
}

