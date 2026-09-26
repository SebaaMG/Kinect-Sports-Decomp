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
extern int fn_82FE89F8();


undefined8 fn_8301E708(int param_1,undefined4 *param_2,int param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  uint uVar3;
  
  if ((int)param_4 == *(int *)(param_1 + 0x14)) {
    if ((int)param_4 != 0) {
      param_3 = param_3 - (int)param_2;
      do {
        uVar3 = 0;
        if (*(char *)*param_2 != '\0') {
          lVar2 = fn_82FE89F8();
          uVar3 = -(uint)(lVar2 != 0) & (uint)lVar2;
        }
        *(uint *)(param_3 + (int)param_2) = uVar3;
        param_4 = param_4 + -1;
        param_2 = param_2 + 1;
      } while (param_4 != 0);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

