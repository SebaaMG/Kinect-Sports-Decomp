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
extern int fn_8248BC38();
extern int fn_8248CDD8();
extern int fn_8248D078();


int * fn_8248C5E0(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar5;
  ulonglong uVar4;
  
  puVar1 = *(undefined4 **)(param_2 + 4);
  puVar3 = (undefined4 *)(param_3 + 0x68);
  if (puVar3 != puVar1) {
    iVar5 = param_3 + 8;
    do {
      *(undefined4 *)(iVar5 + -8) = *puVar3;
      *(undefined4 *)(iVar5 + -4) = *(undefined4 *)(iVar5 + 100);
      fn_8248CDD8(iVar5,iVar5 + 0x68);
      *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar5 + 0x78);
      *(undefined4 *)(iVar5 + 0x14) = *(undefined4 *)(iVar5 + 0x7c);
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x80);
      *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(iVar5 + 0x84);
      *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar5 + 0x88);
      *(undefined4 *)(iVar5 + 0x24) = *(undefined4 *)(iVar5 + 0x8c);
      *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar5 + 0x90);
      *(undefined4 *)(iVar5 + 0x2c) = *(undefined4 *)(iVar5 + 0x94);
      *(undefined4 *)(iVar5 + 0x30) = *(undefined4 *)(iVar5 + 0x98);
      *(undefined4 *)(iVar5 + 0x34) = *(undefined4 *)(iVar5 + 0x9c);
      *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(iVar5 + 0xa0);
      *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(iVar5 + 0xa4);
      *(undefined4 *)(iVar5 + 0x40) = *(undefined4 *)(iVar5 + 0xa8);
      fn_8248D078(iVar5 + 0x44,iVar5 + 0xac);
      puVar3 = puVar3 + 0x1a;
      *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar5 + 0xbc);
      *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar5 + 0xc0);
      *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(iVar5 + 0xc4);
      iVar5 = iVar5 + 0x68;
    } while (puVar3 != puVar1);
  }
  uVar2 = *(uint *)(param_2 + 4);
  for (uVar4 = (ulonglong)uVar2 - 0x68; (uVar4 & 0xffffffff) != (ulonglong)uVar2;
      uVar4 = uVar4 + 0x68) {
    fn_8248BC38(uVar4,0);
  }
  iVar5 = *(int *)(param_2 + 4);
  *param_1 = param_3;
  *(int *)(param_2 + 4) = iVar5 + -0x68;
  return param_1;
}

