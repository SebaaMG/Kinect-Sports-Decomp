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
extern int fn_826860D8();


ulonglong fn_82686368(int *param_1,undefined8 param_2,ulonglong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_3;
  iVar4 = iVar3 * 0x10 + *param_1;
  if ((*(int *)(iVar4 + 8) != -2) && (*(int *)(iVar4 + 0xc) == iVar3)) {
    while( true ) {
      if ((*(int *)(iVar4 + 0xc) == iVar3) &&
         (cVar2 = fn_826860D8(iVar4 + 0x10,param_2), cVar2 != '\0')) {
        return param_3;
      }
      uVar1 = *(uint *)(iVar4 + 8);
      param_3 = (ulonglong)uVar1;
      if (uVar1 == 0xffffffff) break;
      iVar4 = uVar1 * 0x10 + *param_1;
    }
  }
  return 0xffffffffffffffff;
}

