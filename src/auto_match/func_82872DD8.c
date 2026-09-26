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
extern int fn_82F68CC0();


undefined4 * fn_82872DD8(undefined4 *param_1,int param_2,ulonglong param_3,ulonglong param_4)

{
  uint uVar1;
  ulonglong uVar2;
  
  *param_1 = (int)param_3;
  if ((param_3 & 0xffffffff) != (param_4 & 0xffffffff)) {
    uVar1 = *(uint *)(param_2 + 4);
    if ((uint)param_4 != uVar1) {
      do {
        fn_82F68CC0(param_3,param_4,0x18);
        param_4 = param_4 + 0x18;
        param_3 = param_3 + 0x18;
      } while ((param_4 & 0xffffffff) != (ulonglong)uVar1);
    }
    if ((param_3 & 0xffffffff) != (ulonglong)*(uint *)(param_2 + 4)) {
      uVar2 = param_3;
      do {
        uVar2 = uVar2 + 0x18;
      } while ((uVar2 & 0xffffffff) != (ulonglong)*(uint *)(param_2 + 4));
    }
    *(int *)(param_2 + 4) = (int)param_3;
  }
  return param_1;
}

