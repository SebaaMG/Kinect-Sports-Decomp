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


ulonglong fn_8273D5F0(int *param_1,uint *param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  uVar3 = (uint)param_3;
  iVar1 = *param_1;
  iVar4 = uVar3 * 0x10 + iVar1;
  puVar5 = (uint *)(iVar4 + 8);
  if ((*puVar5 != 0xfffffffe) &&
     ((*(uint *)(*(int *)(iVar4 + 0xc) + 0xc) & *(uint *)(iVar1 + 4)) == uVar3)) {
    while( true ) {
      if (((*(uint *)(puVar5[1] + 0xc) & *(uint *)(iVar1 + 4)) == uVar3) && (puVar5[1] == *param_2))
      {
        return param_3;
      }
      uVar2 = *puVar5;
      param_3 = (ulonglong)uVar2;
      if (uVar2 == 0xffffffff) break;
      puVar5 = (uint *)(uVar2 * 0x10 + iVar1 + 8);
    }
  }
  return 0xffffffffffffffff;
}

