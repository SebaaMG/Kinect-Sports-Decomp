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
extern int fn_82A2D670();


undefined8 fn_82A2D810(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x30);
  iVar4 = (uint)*(byte *)(param_1 + 0xc9) * 8 + iVar2;
  bVar1 = *(byte *)(iVar4 + 6);
  while( true ) {
    iVar5 = (uint)bVar1 * 8 + iVar2;
    if ((((*(char *)(iVar5 + 4) == '\0') && ((*(byte *)(iVar5 + 7) & 0x40) != 0)) &&
        ((*(byte *)(iVar5 + 7) & 8) != 0)) &&
       (uVar3 = fn_82A2D670(param_1,(uint)bVar1,iVar5), (int)uVar3 < 0)) break;
    if (iVar5 == iVar4) {
      return 0;
    }
    bVar1 = *(byte *)(iVar5 + 6);
  }
  return uVar3;
}

