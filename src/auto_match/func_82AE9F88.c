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
extern int fn_82AD1AC8();


bool fn_82AE9F88(undefined8 param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  bVar2 = false;
  iVar1 = *(int *)(*(int *)(param_2 + 0x2c) + 0xc);
  while( true ) {
    iVar3 = fn_82AD1AC8(param_2,3);
    if (iVar3 == 0) break;
    param_2 = *(int *)(iVar3 + 0xc);
    if ((((*(uint *)(param_2 + 8) & 0x3f80) == 0x3000) && ((*(uint *)(param_2 + 8) & 0x380000) != 0)
        ) && (iVar1 == *(int *)(*(int *)(param_2 + 0x2c) + 0xc))) {
      bVar2 = true;
    }
  }
  return !bVar2;
}

