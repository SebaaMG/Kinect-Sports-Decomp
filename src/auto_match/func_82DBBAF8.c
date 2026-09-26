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
extern unsigned int *auStack_20;


undefined4 fn_82DBBAF8(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint auStack_20 [4];
  
  auStack_20[0] = param_1;
  iVar2 = 0;
  auStack_20[1] = param_2;
  puVar4 = auStack_20;
  puVar3 = auStack_20 + 1;
  do {
    uVar1 = *puVar4;
    iVar5 = 0;
    if (*(ushort *)(uVar1 + 0xb0) != 0) {
      puVar6 = (uint *)(*(int *)(uVar1 + 0xac) + 4);
      do {
        if ((*puVar6 ^ puVar6[1] ^ uVar1) == *puVar3) {
          return *(undefined4 *)(iVar5 * 0x30 + *(int *)(uVar1 + 0xac));
        }
        iVar5 = iVar5 + 1;
        puVar6 = puVar6 + 0xc;
      } while (iVar5 < (int)(uint)*(ushort *)(uVar1 + 0xb0));
    }
    iVar2 = iVar2 + 1;
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + -1;
  } while (iVar2 < 2);
  return 0;
}

