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
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F7B6D0();


undefined8 fn_82F69F40(ushort *param_1,ulonglong param_2)

{
  ushort uVar1;
  undefined4 *puVar3;
  ulonglong uVar2;
  
  if (param_1 != (ushort *)0x0) {
    uVar2 = fn_82F7B6D0(param_1,param_2);
    if ((uVar2 & 0xffffffff) < (param_2 & 0xffffffff)) {
      uVar1 = *param_1;
      while (uVar1 != 0) {
        uVar1 = *param_1;
        if ((0x40 < uVar1) && (uVar1 < 0x5b)) {
          *param_1 = uVar1 + 0x20;
        }
        param_1 = param_1 + 1;
        uVar1 = *param_1;
      }
      return 0;
    }
    *param_1 = 0;
  }
  puVar3 = (undefined4 *)fn_82F68240();
  *puVar3 = 0x16;
  fn_82F63BA0();
  return 0x16;
}

