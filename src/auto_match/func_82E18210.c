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
extern int fn_82CE5410();
extern int fn_82CFDFE0();


void fn_82E18210(undefined8 param_1,ulonglong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  ulonglong *puVar3;
  uint *puVar4;
  ulonglong uVar5;
  
  if ((param_2 & 0xffffffff) == 4) {
    fn_82CFDFE0(param_1,param_4,4,param_3);
  }
  else {
    piVar2 = (int *)fn_82CE5410();
    iVar1 = *piVar2;
    *piVar2 = ((int)((param_3 & 0xffffffff) << 3) + 0x7fU & 0xffffff80) + iVar1;
    if (0 < (int)param_3) {
      puVar3 = (ulonglong *)(iVar1 + -8);
      puVar4 = (uint *)(param_4 + -4);
      uVar5 = param_3;
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = (ulonglong)*puVar4;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    fn_82CFDFE0(param_1,iVar1,param_2,param_3);
    piVar2 = (int *)fn_82CE5410();
    *piVar2 = iVar1;
  }
  return;
}

