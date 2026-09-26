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


uint fn_8276ACC0(int *param_1,ushort *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  iVar1 = *param_1;
  puVar3 = (uint *)((param_3 + 1) * 8 + iVar1);
  if ((*puVar3 != 0xfffffffe) &&
     (uVar2 = param_3, ((uint)*(ushort *)(puVar3 + 1) & *(uint *)(iVar1 + 4)) == param_3)) {
    while( true ) {
      if ((((uint)*(ushort *)(puVar3 + 1) & *(uint *)(iVar1 + 4)) == param_3) &&
         ((uint)*(ushort *)(puVar3 + 1) == (uint)*param_2)) {
        return uVar2;
      }
      uVar2 = *puVar3;
      if (uVar2 == 0xffffffff) break;
      puVar3 = (uint *)((uVar2 + 1) * 8 + iVar1);
    }
  }
  return 0xffffffff;
}

