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


uint fn_826BE408(int *param_1,undefined4 *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = *param_1;
  iVar2 = param_3 * 0x30 + iVar3;
  if ((*(int *)(iVar2 + 8) != -2) &&
     (uVar4 = param_3, (*(uint *)(*(int *)(iVar2 + 0x10) + 0xc) & *(uint *)(iVar3 + 4)) == param_3))
  {
    while( true ) {
      if (((*(uint *)(iVar3 + 4) & *(uint *)(*(int *)(iVar2 + 0x10) + 0xc)) == param_3) &&
         (cVar1 = fn_826A65E8(*param_2,iVar2 + 0x10), cVar1 != '\0')) {
        return uVar4;
      }
      uVar4 = *(uint *)(iVar2 + 8);
      if (uVar4 == 0xffffffff) break;
      iVar3 = *param_1;
      iVar2 = uVar4 * 0x30 + iVar3;
    }
  }
  return 0xffffffff;
}

