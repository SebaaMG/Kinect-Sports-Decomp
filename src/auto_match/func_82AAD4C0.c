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
extern unsigned int *auStack_40;
extern int fn_82A29A38();
extern int fn_82AAC8C0();
extern unsigned int lbl_83160520;


void fn_82AAD4C0(ulonglong param_1,ulonglong param_2,uint param_3,undefined8 param_4,
                  undefined4 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint auStack_40 [16];
  
  puVar1 = (undefined4 *)*param_5;
  *puVar1 = 0x47;
  uVar2 = fn_82AAC8C0(((param_1 & 0xffffffff) >> 0x14 & 0x700 | param_1 & 0x1800) >> 8,
                        param_1 & 0x7ff,param_4,auStack_40);
  if (((param_2 & 0xffffffff) >> 0x14 & 0x700) != 0 || (param_2 & 0x1800) != 0) {
    fn_82A29A38();
  }
  if ((param_1 & 0xf0000) == 0xf0000) {
    puVar3 = puVar1 + 2;
    puVar1[1] = (auStack_40[0] & 0x3f) << 0x10 | uVar2 & 0xffff;
  }
  else {
    puVar1[1] = (auStack_40[0] & 0x3f) << 0x10 | 0x400000 | uVar2 & 0xffff;
    uVar2 = (uint)((param_1 & 0x10000) != 0);
    if ((param_1 & 0x20000) != 0) {
      uVar2 = uVar2 | 4;
    }
    if ((param_1 & 0x40000) != 0) {
      uVar2 = uVar2 | 0x10;
    }
    if ((param_1 & 0x80000) != 0) {
      uVar2 = uVar2 | 0x40;
    }
    puVar1[2] = uVar2;
    puVar3 = puVar1 + 3;
  }
  *puVar3 = (uint)param_2 & 0x7ff | 0x440000;
  puVar3[1] = *(int *)(&lbl_83160520 + (param_3 >> 0x14 & 0xc)) << 0xc |
              *(int *)(&lbl_83160520 + (param_3 >> 0x14 & 3) * 4) << 8 |
              *(int *)(&lbl_83160520 + (param_3 >> 0x12 & 3) * 4) << 4 |
              *(uint *)(&lbl_83160520 + (param_3 >> 0xe & 0xc));
  *param_5 = puVar3 + 2;
  return;
}

