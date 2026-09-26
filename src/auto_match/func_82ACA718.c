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


undefined8 fn_82ACA718(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1;
  do {
    if (iVar3 == 0) {
      return 1;
    }
    for (iVar1 = *(int *)(iVar3 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      iVar2 = *(int *)(iVar1 + 0x10);
      if ((((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(iVar3 + 0x1c))) &&
          ((*(uint *)(iVar2 + 8) & 0x3f80) != 0x3800)) &&
         ((((*(uint *)(iVar2 + 8) >> 0x1a & 1) != 0 && ((*(uint *)(iVar2 + 0x10) >> 0x19 & 1) == 0))
          && ((((*(uint *)(param_1 + 0x14) >> 5 | *(uint *)(param_1 + 0x10) & 0x78000000) ^
               (*(uint *)(iVar2 + 0x14) >> 5 | *(uint *)(iVar2 + 0x10) & 0x78000000)) & 0xfff00000)
              != 0)))) {
        return 0;
      }
    }
    iVar3 = *(int *)(iVar3 + 0x20);
  } while( true );
}

