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
extern int fn_8256B310();


void fn_8256B658(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
    if (((bVar1 & 0x80) == 0) && ((bVar1 & 0x20) == 0)) {
      *(byte *)(param_1 + 0x28) = bVar1 & 0x7f | 0x80;
      iVar5 = fn_82569B10();
      puVar4 = *(ushort **)(iVar5 + 0x70);
      uVar3 = puVar4[1];
      if ((uint)puVar4[3] == (uint)uVar3) {
        uVar6 = 0;
        puVar4[2] = 0;
      }
      else {
        uVar6 = puVar4[3] + 1;
        uVar6 = uVar6 - (uVar6 / uVar3) * (uint)uVar3;
      }
      puVar4[3] = (ushort)uVar6;
      piVar7 = (int *)((uint)*puVar4 * (uVar6 & 0xffff) + *(int *)(puVar4 + 4));
      fn_8256B310(param_1);
      iVar5 = fn_82569B10();
      cVar2 = *(char *)(iVar5 + 0x74);
      *piVar7 = param_1;
      *(char *)(piVar7 + 1) = cVar2 + '\x04';
    }
  }
  return;
}

