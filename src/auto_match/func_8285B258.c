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
extern int fn_8280ACD8();
extern int fn_8285B1F0();


void fn_8285B258(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 100) + param_2;
  fn_8280ACD8(iVar6 + 0x10);
  fn_8280ACD8(iVar6 + 0x50);
  uVar1 = *(undefined4 *)(param_1 + 0x54);
  *(int *)(iVar6 + 0x9c) = iVar6 + 0xb0;
  *(undefined4 *)(iVar6 + 0x94) = 0;
  iVar5 = 0;
  *(undefined1 *)(iVar6 + 0x98) = 0;
  *(undefined4 *)(iVar6 + 0x90) = uVar1;
  *(undefined1 *)(iVar6 + 0x99) = 0;
  iVar4 = (uint)*(ushort *)(param_1 + 0x3c) * 0xc + iVar6 + 0xb0;
  *(int *)(iVar6 + 0xa0) = iVar4;
  iVar4 = (*(ushort *)(param_1 + 0x3c) + 1) * 0x10 + iVar4;
  *(int *)(iVar6 + 0xa4) = iVar4;
  iVar4 = (*(ushort *)(param_1 + 0x3c) + 1) * 8 + iVar4;
  *(int *)(iVar6 + 0xa8) = iVar4;
  *(int *)(iVar6 + 0xac) = *(int *)(param_1 + 0x58) + iVar4;
  if (*(short *)(param_1 + 0x38) != 0) {
    iVar4 = 0;
    do {
      fn_8285B1F0(*(undefined4 *)(*(int *)(param_1 + 0x34) + iVar4),param_2);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x38));
  }
  iVar4 = 0;
  if (*(short *)(param_1 + 0x44) != 0) {
    iVar5 = 0;
    do {
      iVar4 = iVar4 + 1;
      piVar2 = (int *)(*(int *)(param_1 + 0x40) + iVar5);
      iVar5 = iVar5 + 4;
      puVar3 = (undefined4 *)(*(int *)(*piVar2 + 0x50) + param_2);
      *puVar3 = 0;
      puVar3[1] = 0;
    } while (iVar4 < (int)(uint)*(ushort *)(param_1 + 0x44));
  }
  return;
}

