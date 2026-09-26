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


longlong fn_82766E60(int param_1,ushort param_2)

{
  int iVar1;
  ushort uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  lVar4 = 0;
  lVar5 = (ulonglong)*(uint *)(param_1 + 0xc) - 1;
  if (-1 < lVar5) {
    iVar1 = *(int *)(*(int *)(param_1 + 8) + 0xc);
    do {
      uVar6 = (int)lVar4 + (int)lVar5;
      lVar3 = (longlong)((int)uVar6 >> 1) + (ulonglong)((int)uVar6 < 0 && (uVar6 & 1) != 0);
      uVar6 = (int)lVar3 * 8 + *(int *)(param_1 + 0x10);
      uVar2 = CONCAT11(*(undefined1 *)
                        (*(int *)((uVar6 + 1 >> 10 & 0x3ffffc) + iVar1) + (uVar6 + 1 & 0xfff)),
                       *(undefined1 *)(*(int *)((uVar6 >> 10 & 0x3ffffc) + iVar1) + (uVar6 & 0xfff))
                      );
      if (param_2 == uVar2) {
        return lVar3;
      }
      if (param_2 < uVar2) {
        lVar5 = lVar3 + -1;
      }
      else {
        lVar4 = lVar3 + 1;
      }
    } while ((int)lVar4 <= (int)lVar5);
  }
  return -1;
}

