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
extern int fn_826310E0();
extern int fn_826311B8();


void fn_82543628(undefined4 *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  uVar2 = 0;
  if (*param_3 != 0) {
    puVar3 = param_3 + 5;
    do {
      uVar1 = puVar3[-1];
      fn_826310E0(*param_1,(ulonglong)uVar1,*puVar3,(ulonglong)puVar3[1],
                   (ulonglong)
                   (-0x8000000000000000 >>
                   (((((ulonglong)uVar1 + (ulonglong)puVar3[1]) - 1 & 0xffffffff) >> 2) -
                    (ulonglong)(uVar1 >> 2) & 0x7f)) >> ((ulonglong)(uVar1 >> 2) & 0x7f));
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar2 < *param_3);
  }
  uVar2 = 0;
  if (param_3[1] != 0) {
    puVar3 = param_3 + 0x1d;
    do {
      uVar1 = puVar3[-1];
      fn_826310E0(*param_1,(ulonglong)uVar1,
                   (ulonglong)*(uint *)*puVar3 + (ulonglong)*(uint *)(param_2 + 4),
                   (ulonglong)puVar3[1],
                   (ulonglong)
                   (-0x8000000000000000 >>
                   (((((ulonglong)uVar1 + (ulonglong)puVar3[1]) - 1 & 0xffffffff) >> 2) -
                    (ulonglong)(uVar1 >> 2) & 0x7f)) >> ((ulonglong)(uVar1 >> 2) & 0x7f));
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar2 < param_3[1]);
  }
  uVar2 = 0;
  if (param_3[2] != 0) {
    puVar3 = param_3 + 0x35;
    do {
      uVar1 = puVar3[-1];
      fn_826311B8(*param_1,(ulonglong)uVar1,*puVar3,(ulonglong)puVar3[1],
                   (ulonglong)
                   (-0x8000000000000000 >>
                   (((((ulonglong)uVar1 + (ulonglong)puVar3[1]) - 1 & 0xffffffff) >> 2) -
                    (ulonglong)(uVar1 >> 2) & 0x7f)) >> ((ulonglong)(uVar1 >> 2) & 0x7f));
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar2 < param_3[2]);
  }
  uVar2 = 0;
  if (param_3[3] != 0) {
    puVar3 = param_3 + 0x4d;
    do {
      uVar1 = puVar3[-1];
      fn_826311B8(*param_1,(ulonglong)uVar1,
                   (ulonglong)*(uint *)*puVar3 + (ulonglong)*(uint *)(param_2 + 4),
                   (ulonglong)puVar3[1],
                   (ulonglong)
                   (-0x8000000000000000 >>
                   (((((ulonglong)uVar1 + (ulonglong)puVar3[1]) - 1 & 0xffffffff) >> 2) -
                    (ulonglong)(uVar1 >> 2) & 0x7f)) >> ((ulonglong)(uVar1 >> 2) & 0x7f));
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar2 < param_3[3]);
  }
  return;
}

