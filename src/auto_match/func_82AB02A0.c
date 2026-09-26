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
extern int fn_82A29A38();


void fn_82AB02A0(int *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 0xffff0200) {
    fn_82A29A38();
  }
  iVar1 = *param_1;
  puVar2 = (undefined4 *)*param_3;
  uVar3 = *(uint *)(iVar1 + 4);
  uVar4 = uVar3 & 0x7ff;
  if (0xf < uVar4) {
    fn_82A29A38();
    uVar4 = 0xf;
  }
  if ((uVar3 >> 0x14 & 0x700 | uVar3 & 0x1800) != 0x700) {
    fn_82A29A38();
  }
  *puVar2 = 0x1c;
  puVar2[1] = uVar4 | 0x20000;
  puVar2[2] = *(undefined4 *)(iVar1 + 8);
  puVar2[3] = *(undefined4 *)(iVar1 + 0xc);
  puVar2[4] = *(undefined4 *)(iVar1 + 0x10);
  puVar2[5] = *(undefined4 *)(iVar1 + 0x14);
  *param_1 = iVar1 + 0x18;
  *param_3 = puVar2 + 6;
  return;
}

