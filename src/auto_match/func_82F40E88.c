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
extern int fn_82F49100();


undefined8
fn_82F40E88(undefined8 param_1,undefined8 param_2,int *param_3,short param_4,int *param_5,
             uint param_6)

{
  uint uVar1;
  undefined8 uVar2;
  int *apiStack_30 [12];
  
  if (param_5 == (int *)0x0) {
    return 0xffffffff8000ffff;
  }
  apiStack_30[0] = (int *)0x0;
  uVar2 = fn_82F49100(param_2,0,apiStack_30);
  if ((int)uVar2 < 0) {
    return uVar2;
  }
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar1 = apiStack_30[0][5];
  if ((uVar1 & param_6) == 0) {
    if ((param_4 == 0) || ((uVar1 & 0x2000) == 0)) {
      *param_5 = apiStack_30[0][1];
      if (param_3 == (int *)0x0) {
        return uVar2;
      }
      if (*apiStack_30[0] != 0) {
        *param_3 = *apiStack_30[0];
        return uVar2;
      }
      return uVar2;
    }
  }
  else if ((((uVar1 & 0x80) != 0) && ((param_6 & 0x80) != 0)) ||
          (((uVar1 & 0x100) != 0 && ((param_6 & 0x100) != 0)))) {
    return 0xffffffffc00d3e8f;
  }
  return 1;
}

