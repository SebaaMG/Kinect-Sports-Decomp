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
extern int fn_82F691F0();


void fn_826339C8(int *param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  
  puVar4 = (uint *)param_1[0x1b];
  puVar3 = puVar4 + param_1[0x1c] * 2;
  for (; puVar4 < puVar3; puVar4 = puVar4 + 2) {
    if (((1 << (puVar4[1] >> 0xc & 0xf) & 0x607eU) != 0) && ((puVar4[1] & 0x800) == 0)) {
      uVar1 = *puVar4 & 0xfff;
      if ((uVar1 <= param_2) && (param_2 < (*puVar4 >> 0xc & 7) + uVar1)) goto LAB_82633a4c;
    }
  }
  puVar4 = (uint *)0x0;
LAB_82633a4c:
  if (puVar4 != (uint *)0x0) {
    uVar1 = *puVar4;
    uVar2 = 2 << ((param_2 - (uVar1 & 0xfff)) * 2 & 0x3e);
    if (param_3 == 0) {
      *puVar4 = ((~uVar2 & 0xfff) << 0x10 | 0xf000ffff) & uVar1;
    }
    else {
      *puVar4 = uVar1 & 0xf000ffff | (uVar2 << 0x10 | uVar1) & 0xfff0000;
    }
    if (((((~(ulonglong)*(uint *)(*param_1 + 0x4db4) & 0xffffffff) >> 5 & 1) != 0) && (param_3 != 0)
        ) && (param_2 == param_1[0x19] - 1U)) {
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 0x1f) = 0;
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(param_1 + 0x20,0,0x20);
    }
  }
  return;
}

