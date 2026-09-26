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
extern unsigned int lbl_8218DBA8;
extern unsigned int lbl_8218DBB0;


int fn_825FCE80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == param_2) {
    return param_1;
  }
  do {
    if (iVar1 == 2) {
      return 0;
    }
    iVar2 = 0;
    uVar3 = 0;
    piVar4 = (int *)&lbl_8218DBA8;
    do {
      if (*piVar4 == iVar1) goto LAB_825fcecc;
      uVar3 = uVar3 + 0xc;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 3;
    } while ((uVar3 & 0xffffffff) < 0x3cc);
    iVar2 = -1;
LAB_825fcecc:
    param_1 = *(int *)(&lbl_8218DBB0 + iVar2 * 0xc) + param_1;
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == param_2) {
      return param_1;
    }
  } while( true );
}

