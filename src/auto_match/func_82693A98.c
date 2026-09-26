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
extern int fn_826BD758();


ulonglong fn_82693A98(int *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined4 *)*param_1;
  uVar4 = (ulonglong)(uint)puVar2[4];
  if (((puVar2[3] & 0x8000000) == 0) &&
     (uVar3 = fn_826BD758(*puVar2,uVar4), bVar1 = (uVar3 & 0xffffffff) == uVar4, uVar4 = uVar3
     , bVar1)) {
    *(uint *)(*param_1 + 0xc) = *(uint *)(*param_1 + 0xc) | 0x8000000;
  }
  return uVar4;
}

