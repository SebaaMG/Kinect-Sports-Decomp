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
extern int fn_830250C0();


void fn_83036648(int *param_1,uint param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0;
  *param_4 = 0;
  *param_5 = 0;
  if ((param_2 & 0xff) < (uint)*(byte *)(param_1 + 3)) {
    uVar3 = (uint)*(byte *)((int)param_1 + 0xd);
    if (uVar3 != 0) {
      iVar4 = 0;
      iVar2 = *param_1;
      do {
        if (*(int *)(iVar2 + 8) == param_3) break;
        uVar5 = uVar5 + 1;
        iVar4 = iVar4 + 0x10;
        iVar2 = iVar4 + *param_1;
      } while (uVar5 < uVar3);
    }
    if (uVar5 != uVar3) {
      iVar2 = *param_1;
      iVar1 = ((uint)*(byte *)((int)param_1 + 0xd) * (param_2 & 0xff) + uVar5) * 0x10;
      iVar4 = *(int *)(iVar1 + iVar2);
      if (iVar4 != 0) {
        fn_830250C0(iVar4,param_4);
      }
      iVar2 = *(int *)(iVar1 + iVar2 + 4);
      if (iVar2 != 0) {
        fn_830250C0(iVar2,param_5);
      }
    }
  }
  return;
}

