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
extern int fn_8280A620();
extern int fn_8284C480();


ulonglong fn_8284C528(ulonglong param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar1 = fn_8280A620();
    param_1 = (ulonglong)(uVar1 >> (param_3 & 0x3f));
  }
  if ((int)param_1 < 1) {
    param_1 = 1;
  }
  uVar3 = (ulonglong)(uint)param_2[1];
  uVar3 = (longlong)
          (int)((int)(((uVar3 + param_1) - 1 & ~(uVar3 - 1) & 0xffffffff) / uVar3) + 0x1fU &
               0xffffffe0) * (longlong)(int)param_2[3];
  iVar2 = fn_8284C480(*param_2);
  if (iVar2 != 0) {
    uVar3 = uVar3 + 0xff & 0xffffff00;
  }
  return uVar3;
}

