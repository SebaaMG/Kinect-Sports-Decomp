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
extern int fn_82528948();
extern int fn_8252D970();
extern V16 vectorCompareEqualToFloatingPoint();


void fn_82569740(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  byte in_cr6;
  undefined1 in_vs44 [16];
  undefined1 in_vs45 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = *(int *)(param_2 + 0xdc);
  if (*(char *)(param_2 + 0x24) != '\0') {
    puVar2 = (undefined4 *)(in_r0 + param_2 + 0x10 & 0xfffffff0);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    vectorCompareEqualToFloatingPoint(in_vs44,in_vs45);
    if (!(bool)(in_cr6 >> 3 & 1)) {
      puVar3 = (undefined4 *)(in_r0 + iVar1 + 0xa0 & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar4;
      puVar3[2] = uVar5;
      puVar3[3] = uVar6;
      *(undefined4 *)(iVar1 + 0x170) = 0;
      fn_82528948(iVar1);
    }
  }
  fn_8252D970(param_1,iVar1);
  return;
}

