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


void fn_827CABE0(int param_1,int *param_2,int param_3,int param_4,longlong param_5)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  
  param_5 = param_5 + -1;
  uVar2 = *(uint *)(param_1 + 0x5c);
  if (-1 < param_5) {
    param_3 = param_3 << 2;
    piVar4 = (int *)(param_4 + -4);
    do {
      iVar5 = 0;
      piVar4 = piVar4 + 1;
      iVar3 = *(int *)(*param_2 + param_3);
      param_3 = param_3 + 4;
      if ((ulonglong)uVar2 != 0) {
        puVar6 = (undefined1 *)(*piVar4 + -3);
        uVar7 = (ulonglong)uVar2;
        do {
          uVar1 = *(undefined1 *)(iVar5 + iVar3);
          iVar5 = iVar5 + 1;
          puVar6[5] = uVar1;
          puVar6[4] = uVar1;
          puVar6 = puVar6 + 3;
          *puVar6 = uVar1;
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      param_5 = param_5 + -1;
    } while (-1 < param_5);
  }
  return;
}

