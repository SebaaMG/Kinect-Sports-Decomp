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
extern int fn_82AA66A8();


void fn_82B0FC78(undefined8 param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_2 + 8);
  uVar2 = 0;
  uVar6 = 0;
  if ((uVar1 & 0x380000) != 0) {
    piVar3 = (int *)(param_2 + 0x2c);
    do {
      uVar5 = 0;
      piVar4 = (int *)(param_2 + 0x2c);
      if (uVar6 != 0) {
        do {
          if (*(int *)(*piVar3 + 0xc) == *(int *)(*piVar4 + 0xc)) break;
          uVar5 = uVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (uVar5 < uVar6);
      }
      if (uVar5 == uVar6) {
        uVar2 = (*(uint *)(*(int *)(*piVar3 + 0xc) + 8) >> 0xe & 7) + uVar2;
      }
      uVar6 = uVar6 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar6 < (uVar1 >> 0x13 & 7));
    if (4 < uVar2) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_1,0x12c0);
    }
  }
  *(uint *)(param_2 + 8) =
       (uVar2 & 7) << 0xe | ((1 << (uVar2 & 0x3f)) - 1U & 0xf) << 1 | uVar1 & 0xfffe3fe1;
  return;
}

