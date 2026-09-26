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
extern int fn_82569B10();
extern int fn_8256A9F8();


void fn_8256B720(void)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  iVar2 = fn_82569B10();
  *(char *)(iVar2 + 0x74) = *(char *)(iVar2 + 0x74) + '\x01';
  while( true ) {
    iVar2 = fn_82569B10();
    if (*(short *)(*(int *)(iVar2 + 0x70) + 6) == *(short *)(*(int *)(iVar2 + 0x70) + 2)) {
      return;
    }
    iVar2 = fn_82569B10();
    puVar1 = *(ushort **)(iVar2 + 0x70);
    if (puVar1[3] == puVar1[1]) {
      iVar2 = 0;
    }
    else {
      iVar2 = (uint)puVar1[2] * (uint)*puVar1 + *(int *)(puVar1 + 4);
    }
    iVar3 = fn_82569B10();
    if (*(char *)(iVar3 + 0x74) != *(char *)(iVar2 + 4)) break;
    iVar2 = fn_82569B10();
    puVar1 = *(ushort **)(iVar2 + 0x70);
    if (puVar1[3] == puVar1[1]) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)((uint)puVar1[2] * (uint)*puVar1 + *(int *)(puVar1 + 4));
    }
    iVar2 = *piVar5;
    fn_8256A9F8(iVar2);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) & 0x7f;
    iVar2 = fn_82569B10();
    iVar2 = *(int *)(iVar2 + 0x70);
    if ((uint)*(ushort *)(iVar2 + 4) == (uint)*(ushort *)(iVar2 + 6)) {
      *(undefined2 *)(iVar2 + 6) = *(undefined2 *)(iVar2 + 2);
    }
    else {
      uVar4 = *(ushort *)(iVar2 + 4) + 1;
      *(ushort *)(iVar2 + 4) =
           (short)uVar4 - (short)(uVar4 / *(ushort *)(iVar2 + 2)) * *(ushort *)(iVar2 + 2);
    }
  }
  return;
}

