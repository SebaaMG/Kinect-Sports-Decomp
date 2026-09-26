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


int * fn_82876858(int param_1,uint param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_4 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)*(ushort *)(param_1 + 4);
  }
  iVar3 = 0;
  iVar1 = *param_3 + -1;
  do {
    uVar4 = iVar1 - iVar3;
    iVar2 = ((int)uVar4 >> 1) + (uint)((int)uVar4 < 0 && (uVar4 & 1) != 0) + iVar3;
    if (param_2 < (uint)param_3[iVar2 * 6 + 1]) {
LAB_828768b8:
      iVar1 = iVar2 + -1;
    }
    else {
      if (param_2 <= (uint)param_3[iVar2 * 6 + 1]) {
        uVar4 = (param_3 + iVar2 * 6 + 1)[5];
        if (uVar5 < uVar4) goto LAB_828768b8;
        if (uVar5 <= uVar4) {
          return param_3 + iVar2 * 6 + 1;
        }
      }
      iVar3 = iVar2 + 1;
    }
    if (iVar1 < iVar3) {
      return (int *)0x0;
    }
  } while( true );
}

