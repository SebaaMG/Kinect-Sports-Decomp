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


void fn_827CFFE0(int param_1,int *param_2,int *param_3,int param_4,longlong param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  
  param_5 = param_5 + -1;
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar2 = *(uint *)(param_1 + 0x1c);
  if (-1 < param_5) {
    param_4 = param_4 << 2;
    do {
      iVar7 = 0;
      piVar4 = param_3;
      if (0 < iVar1) {
        do {
          iVar6 = 0;
          iVar3 = *(int *)(*piVar4 + param_4);
          if ((ulonglong)uVar2 != 0) {
            puVar5 = (undefined1 *)((*param_2 - iVar1) + iVar7);
            uVar8 = (ulonglong)uVar2;
            do {
              puVar5 = puVar5 + iVar1;
              *(undefined1 *)(iVar6 + iVar3) = *puVar5;
              iVar6 = iVar6 + 1;
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          iVar7 = iVar7 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar7 < iVar1);
      }
      param_5 = param_5 + -1;
      param_2 = param_2 + 1;
      param_4 = param_4 + 4;
    } while (-1 < param_5);
  }
  return;
}

