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
extern int fn_826A65E8();


ulonglong fn_826A9DB0(int *param_1,undefined4 *param_2,ulonglong param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = (uint)param_3;
  iVar5 = *param_1;
  iVar4 = uVar3 * 0x20 + iVar5;
  if ((*(int *)(iVar4 + 8) != -2) &&
     ((*(uint *)(*(int *)(iVar4 + 0x10) + 0xc) & *(uint *)(iVar5 + 4)) == uVar3)) {
    while( true ) {
      if (((*(uint *)(iVar5 + 4) & *(uint *)(*(int *)(iVar4 + 0x10) + 0xc)) == uVar3) &&
         (cVar2 = fn_826A65E8(*param_2,iVar4 + 0x10), cVar2 != '\0')) {
        return param_3;
      }
      uVar1 = *(uint *)(iVar4 + 8);
      param_3 = (ulonglong)uVar1;
      if (uVar1 == 0xffffffff) break;
      iVar5 = *param_1;
      iVar4 = uVar1 * 0x20 + iVar5;
    }
  }
  return 0xffffffffffffffff;
}

