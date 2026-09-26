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


uint fn_8269B590(int *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  
  iVar1 = *param_1;
  iVar3 = param_3 * 0xc + iVar1;
  puVar4 = (uint *)(iVar3 + 8);
  if ((*puVar4 != 0xfffffffe) &&
     (uVar2 = param_3, (*(uint *)(*(int *)(iVar3 + 0xc) + 0xc) & *(uint *)(iVar1 + 4)) == param_3))
  {
    while( true ) {
      if (((*(uint *)(puVar4[1] + 0xc) & *(uint *)(iVar1 + 4)) == param_3) &&
         (puVar4[1] == *param_2)) {
        return uVar2;
      }
      uVar2 = *puVar4;
      if (uVar2 == 0xffffffff) break;
      puVar4 = (uint *)(uVar2 * 0xc + iVar1 + 8);
    }
  }
  return 0xffffffff;
}

