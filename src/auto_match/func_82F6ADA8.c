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


longlong fn_82F6ADA8(int param_1,ushort *param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined4 *puVar4;
  longlong lVar3;
  ushort uVar5;
  
  if ((param_1 == 0) || (param_2 == (ushort *)0x0)) {
    puVar4 = (undefined4 *)fn_82F68240();
    *puVar4 = 0x16;
    fn_82F63BA0();
    lVar3 = 0x7fffffff;
  }
  else {
    param_1 = param_1 - (int)param_2;
    do {
      uVar1 = *(ushort *)(param_1 + (int)param_2);
      if ((uVar1 < 0x41) || (uVar5 = uVar1 + 0x20, 0x5a < uVar1)) {
        uVar5 = uVar1;
      }
      uVar1 = *param_2;
      uVar2 = (ulonglong)uVar5;
      if ((uVar1 < 0x41) || (uVar5 = uVar1 + 0x20, 0x5a < uVar1)) {
        uVar5 = uVar1;
      }
      param_2 = param_2 + 1;
    } while ((uVar2 != 0) && (uVar2 == uVar5));
    lVar3 = uVar2 - uVar5;
  }
  return lVar3;
}

