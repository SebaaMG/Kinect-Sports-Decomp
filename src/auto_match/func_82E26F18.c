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


void fn_82E26F18(ulonglong param_1,undefined4 *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  
  uVar3 = 0;
  if (param_1 == 0) {
    *param_2 = 0;
    *param_3 = 0;
    return;
  }
  iVar4 = 0;
  plVar5 = (longlong *)0x83187450;
  while ((param_1 < *plVar5 - 0x1eU || (*plVar5 + 0x1eU < param_1))) {
    uVar3 = uVar3 + 0x18;
    iVar4 = iVar4 + 1;
    plVar5 = plVar5 + 3;
    if ((uVar3 & 0xffffffff) == 0xc0) {
      if (99999999 < param_1) {
        *param_2 = 1;
        *param_3 = 10;
        return;
      }
      param_1 = param_1 & 0xffffffff;
      uVar2 = param_1;
      uVar3 = 10000000;
      if (10000000 < param_1) {
        uVar2 = 10000000;
        uVar3 = param_1;
      }
      while (uVar1 = uVar2, uVar1 != 0) {
        trapWord(6,uVar1,0);
        uVar2 = uVar3 - (longlong)(int)((uVar3 & 0xffffffff) / (uVar1 & 0xffffffff)) *
                        (longlong)(int)uVar1;
        uVar3 = uVar1;
      }
      trapWord(6,uVar3,0);
      trapWord(6,uVar3,0);
      *param_2 = (int)(10000000 / (uVar3 & 0xffffffff));
      *param_3 = (int)(param_1 / (uVar3 & 0xffffffff));
      return;
    }
  }
  *param_2 = *(undefined4 *)(iVar4 * 0x18 + -0x7ce78ba8);
  *param_3 = *(undefined4 *)(iVar4 * 0x18 + -0x7ce78ba4);
  return;
}

