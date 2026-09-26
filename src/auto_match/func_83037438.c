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
extern int fn_83037168();


undefined8 fn_83037438(int *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  uVar1 = param_1[1] - *param_1 >> 4;
  if ((param_2 & 0xffffffff) < (ulonglong)uVar1) {
    param_1[1] = (int)((param_2 & 0xffffffff) << 4) + *param_1;
    uVar2 = 1;
  }
  else if (((param_2 & 0xffffffff) < (ulonglong)(uint)param_1[2]) ||
          (cVar3 = fn_83037168(param_1,param_2 - (longlong)(int)uVar1), cVar3 != '\0')) {
    if ((ulonglong)uVar1 < (param_2 & 0xffffffff)) {
      lVar5 = param_2 - (longlong)(int)uVar1;
      iVar4 = uVar1 << 4;
      do {
        puVar6 = (undefined4 *)(iVar4 + *param_1);
        if (puVar6 != (undefined4 *)0x0) {
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6[2] = 0;
        }
        iVar4 = iVar4 + 0x10;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    uVar2 = 1;
    param_1[1] = (int)((param_2 & 0xffffffff) << 4) + *param_1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

