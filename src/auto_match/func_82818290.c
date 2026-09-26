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


/* WARNING: Removing unreachable block (ram,0x82817de8) */

longlong fn_82818290(int *param_1,ulonglong param_2,code *param_3)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = 0;
  if (((param_1 != (int *)0x0) && ((param_2 & 0xffffffff) != 0)) && (param_3 != (code *)0x0)) {
    piVar3 = (int *)param_1[1];
    if (piVar3 < piVar3 + *param_1 * 3) {
      do {
        if ((*piVar3 != 0) && (iVar1 = (*param_3)(*piVar3,param_2), iVar1 == 0)) {
          lVar2 = lVar2 + 1;
        }
        piVar3 = piVar3 + 3;
      } while (piVar3 < (int *)(*param_1 * 0xc + param_1[1]));
    }
  }
  return lVar2;
}

