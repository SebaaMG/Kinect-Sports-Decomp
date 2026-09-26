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
extern int fn_827A53E8();


ulonglong fn_827A7038(uint *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint *puVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar4 = (ulonglong)*param_1;
  lVar6 = param_3 * 0x14 + uVar4;
  if ((*(int *)((int)lVar6 + 8) != -2) &&
     (uVar1 = *(uint *)(*param_1 + 4), (*(uint *)((int)lVar6 + 0x14) & uVar1) == uVar3)) {
    while( true ) {
      puVar5 = (uint *)((int)lVar6 + 8);
      if (((*(uint *)((int)lVar6 + 0x14) & uVar1) == uVar3) &&
         (cVar2 = fn_827A53E8(lVar6 + 0xc), cVar2 != '\0')) {
        return param_3;
      }
      param_3 = (ulonglong)*puVar5;
      if (*puVar5 == 0xffffffff) break;
      lVar6 = param_3 * 0x14 + uVar4;
    }
  }
  return 0xffffffffffffffff;
}

