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


void fn_828624E8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = 0;
  if (*(short *)(param_1 + 0x40) != 0) {
    iVar3 = 0;
    do {
      iVar2 = 0;
      iVar6 = *(int *)(iVar3 + *(int *)(param_1 + 0x3c) + 0xc);
      iVar5 = iVar6 + param_2;
      iVar4 = iVar6 + param_3;
      *(undefined4 *)(iVar6 + param_3) = *(undefined4 *)(iVar6 + param_2);
      *(undefined2 *)(iVar4 + 8) = *(undefined2 *)(iVar5 + 8);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar5 + 0x10);
      *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
      *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar5 + 0x18);
      *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar5 + 0x1c);
      *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(iVar4 + 0x24) = *(undefined4 *)(iVar5 + 0x24);
      if (*(short *)(iVar3 + *(int *)(param_1 + 0x3c) + 8) != 0) {
        iVar6 = 0;
        do {
          iVar2 = iVar2 + 1;
          iVar4 = *(int *)(iVar3 + *(int *)(param_1 + 0x3c) + 4) + iVar6;
          iVar6 = iVar6 + 0x34;
          iVar4 = *(int *)(iVar4 + 0x30);
          *(undefined1 *)(iVar4 + param_3) = *(undefined1 *)(iVar4 + param_2);
        } while (iVar2 < (int)(uint)*(ushort *)(iVar3 + *(int *)(param_1 + 0x3c) + 8));
      }
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x14;
    } while (iVar1 < (int)(uint)*(ushort *)(param_1 + 0x40));
  }
  return;
}

