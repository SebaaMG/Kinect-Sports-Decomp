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


void fn_82862868(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar3 = 0;
  puVar5 = (undefined4 *)(*(int *)(param_2 + 8) + *(int *)(param_1 + 0x10));
  puVar4 = (undefined4 *)(*(int *)(param_3 + 8) + *(int *)(param_1 + 0x10));
  *puVar4 = *puVar5;
  puVar4[1] = puVar5[1];
  if ((ulonglong)*(ushort *)(param_1 + 10) != 0xfffffffffffffffe) {
    iVar6 = 0;
    do {
      iVar3 = iVar3 + 1;
      puVar1 = (undefined4 *)(puVar5[1] + iVar6);
      puVar2 = (undefined4 *)(puVar4[1] + iVar6);
      iVar6 = iVar6 + 0x10;
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
    } while (iVar3 < (int)(*(ushort *)(param_1 + 10) + 2));
  }
  *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(puVar5 + 2);
  return;
}

