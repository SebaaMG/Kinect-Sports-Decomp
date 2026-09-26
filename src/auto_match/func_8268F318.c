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
extern unsigned int lbl_8200E3B0;
extern unsigned int lbl_8200E430;


void fn_8268F318(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = param_2 >> 5;
  uVar5 = (param_2 + param_3) - 1;
  uVar2 = uVar5 >> 5;
  uVar3 = (ulonglong)uVar5 & 0x1f;
  if (uVar1 < uVar2) {
    uVar5 = uVar1 + 1;
    *(uint *)(uVar1 * 4 + param_1) =
         *(uint *)(&lbl_8200E3B0 + (param_2 & 0x1f) * 4) | *(uint *)(uVar1 * 4 + param_1);
    if (uVar5 < uVar2) {
      puVar4 = (undefined4 *)(uVar5 * 4 + param_1 + -4);
      for (iVar6 = uVar2 - uVar5; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar4 = puVar4 + 1;
        *puVar4 = 0xffffffff;
      }
    }
    uVar5 = *(uint *)(&lbl_8200E430 + (int)(uVar3 << 2));
    uVar1 = uVar2;
  }
  else {
    uVar5 = *(uint *)(&lbl_8200E3B0 + (param_2 & 0x1f) * 4) &
            *(uint *)(&lbl_8200E430 + (int)(uVar3 << 2));
  }
  *(uint *)(uVar1 * 4 + param_1) = uVar5 | *(uint *)(uVar1 * 4 + param_1);
  return;
}

