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


longlong fn_82817D80(int *param_1,ulonglong param_2,int param_3,code *param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  
  lVar2 = 0;
  if (((param_1 != (int *)0x0) && ((param_2 & 0xffffffff) != 0)) && (param_4 != (code *)0x0)) {
    piVar3 = (int *)param_1[1];
    if (piVar3 < piVar3 + *param_1 * 3) {
      do {
        if (param_3 == 0) {
          iVar1 = piVar3[1];
LAB_82817dec:
          if ((iVar1 != 0) && (iVar1 = (*param_4)(iVar1,param_2), iVar1 == 0)) {
            lVar2 = lVar2 + 1;
          }
        }
        else if (param_3 == 1) {
          iVar1 = *piVar3;
          goto LAB_82817dec;
        }
        piVar3 = piVar3 + 3;
      } while (piVar3 < (int *)(*param_1 * 0xc + param_1[1]));
    }
  }
  return lVar2;
}

