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
extern int fn_82F68CC0();


void fn_8285B410(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 100) + param_2;
  iVar2 = *(int *)(param_1 + 100) + param_3;
  fn_82F68CC0(iVar2 + 0x10,iVar6 + 0x10,0x40);
  fn_82F68CC0(iVar2 + 0x50,iVar6 + 0x50,0x40);
  iVar3 = 0;
  *(undefined1 *)(iVar2 + 0x98) = *(undefined1 *)(iVar6 + 0x98);
  *(undefined1 *)(iVar2 + 0x99) = *(undefined1 *)(iVar6 + 0x99);
  *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar6 + 0x94);
  if (*(short *)(param_1 + 0x38) != 0) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      piVar1 = (int *)(iVar2 + *(int *)(param_1 + 0x34));
      iVar2 = iVar2 + 4;
      iVar6 = *(int *)(*piVar1 + 0x40);
      iVar5 = iVar6 + param_2;
      iVar4 = iVar6 + param_3;
      *(undefined1 *)(iVar6 + param_3) = *(undefined1 *)(iVar6 + param_2);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar5 + 4);
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar5 + 8);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x38));
  }
  iVar3 = 0;
  if (*(short *)(param_1 + 0x44) != 0) {
    iVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      piVar1 = (int *)(iVar2 + *(int *)(param_1 + 0x40));
      iVar2 = iVar2 + 4;
      iVar6 = *(int *)(*piVar1 + 0x50);
      *(undefined4 *)(iVar6 + param_3) = *(undefined4 *)(iVar6 + param_2);
      *(undefined4 *)(iVar6 + param_3 + 4) = *(undefined4 *)(iVar6 + param_2 + 4);
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 0x44));
  }
  return;
}

