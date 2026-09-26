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


void fn_82A6D378(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_1;
  iVar4 = 0;
  if (*(short *)(iVar1 + 0x22) == 0) {
    return;
  }
  iVar5 = 0;
  do {
    iVar4 = iVar4 + 1;
    iVar2 = *(int *)(iVar1 + 0x140) + iVar5;
    iVar5 = iVar5 + 0x6f0;
    puVar3 = (undefined2 *)(*(int *)(iVar2 + 0x1a8) + param_2 * 0x1c);
    *puVar3 = 0;
    **(undefined2 **)(puVar3 + 6) = 0;
  } while (iVar4 < (int)(uint)*(ushort *)(iVar1 + 0x22));
  return;
}

