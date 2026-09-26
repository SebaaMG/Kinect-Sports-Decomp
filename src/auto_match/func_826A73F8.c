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
extern int fn_82F66570();


ulonglong fn_826A73F8(int *param_1)

{
  undefined4 uVar1;
  int iVar3;
  ulonglong uVar2;
  
  if ((((undefined4 *)*param_1)[3] & 0x4000000) == 0) {
    uVar1 = *(undefined4 *)*param_1;
    iVar3 = fn_82F66570(uVar1,0x3a);
    if (((iVar3 == 0) && (iVar3 = fn_82F66570(uVar1,0x2f), iVar3 == 0)) &&
       (uVar2 = fn_82F66570(uVar1,0x2e), (uVar2 & 0xffffffff) == 0)) {
      *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x6000000;
      return uVar2;
    }
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x4000000;
  }
  return 1;
}

