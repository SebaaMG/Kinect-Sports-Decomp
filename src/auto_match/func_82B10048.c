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


int * fn_82B10048(undefined8 param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  puVar1 = *(uint **)(param_3 + 4);
  do {
    if (puVar1 == (uint *)0x0) {
      return (int *)0x0;
    }
    piVar2 = (int *)puVar1[4];
    if ((((piVar2 != (int *)0x0) && (uVar3 = *puVar1, (uVar3 & 0xe000000) != 0)) &&
        ((piVar2[2] & 0x3f80U) == 0x3800)) && (piVar2[7] == param_2)) {
      uVar4 = (ulonglong)*(uint *)(*(int *)(param_3 + 0x1c) + 0x30) & 0x7ffff;
      if ((*(uint *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(param_2 + 0x28)) &
          1 << ((uint)uVar4 & 0x1f)) != 0) {
        if ((*piVar2 == 0) || (bVar5 = true, *(int *)(*piVar2 + 4) == 0)) {
          bVar5 = false;
        }
        if (bVar5) goto code_r0x82b10104;
      }
      if (((uVar3 >> 5 & 3) == param_4) && ((uVar3 & 0x1f) == param_5)) {
        return piVar2;
      }
    }
code_r0x82b10104:
    puVar1 = (uint *)puVar1[2];
  } while( true );
}

