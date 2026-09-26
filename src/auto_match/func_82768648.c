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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))


ulonglong fn_82768648(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 < *(uint *)(param_1 + 0x38)) {
    uVar2 = *(int *)(param_1 + 0x3c) + param_2 * 8;
    iVar1 = *(int *)(*(int *)(param_1 + 0x34) + 0xc);
    return (ulonglong)
           CONCAT11(*(undefined1 *)
                     (*(int *)((uVar2 + 1 >> 10 & 0x3ffffc) + iVar1) + (uVar2 + 1 & 0xfff)),
                    *(undefined1 *)(*(int *)((uVar2 >> 10 & 0x3ffffc) + iVar1) + (uVar2 & 0xfff)));
  }
  return 0xffffffffffffffff;
}

