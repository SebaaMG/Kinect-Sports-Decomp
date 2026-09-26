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


void fn_829BF450(int param_1,int *param_2,int param_3,int *param_4,longlong param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  
  param_5 = param_5 + -1;
  iVar1 = *(int *)(param_1 + 0x24);
  uVar2 = *(uint *)(param_1 + 0x70);
  if (-1 < param_5) {
    param_3 = param_3 << 2;
    do {
      iVar4 = 0;
      piVar3 = param_2;
      if (0 < iVar1) {
        do {
          if ((ulonglong)uVar2 != 0) {
            puVar5 = (undefined1 *)((*param_4 + iVar4) - iVar1);
            puVar6 = (undefined1 *)(*(int *)(*piVar3 + param_3) + -1);
            uVar7 = (ulonglong)uVar2;
            do {
              puVar6 = puVar6 + 1;
              puVar5 = puVar5 + iVar1;
              *puVar5 = *puVar6;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 1;
        } while (iVar4 < iVar1);
      }
      param_5 = param_5 + -1;
      param_3 = param_3 + 4;
      param_4 = param_4 + 1;
    } while (-1 < param_5);
  }
  return;
}

