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
extern int fn_82F6C420();


longlong fn_82BBC4C0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar4 = param_1 + 0x3d0;
  iVar1 = (int)param_1;
  lVar2 = 0;
  do {
    iVar3 = *(int *)lVar4;
    if (iVar3 == *(int *)((int)((param_2 & 0xffffffff) << 2) + iVar1)) {
      if (iVar3 == 0x21) {
        iVar6 = 0;
        iVar3 = 0;
        lVar5 = 0;
        lVar7 = 4;
        do {
          if ((*(int *)((int)(((param_2 + 8 & 0x3fffffff) * 4 + lVar5 & 0xffffffff) << 2) + iVar1)
               != 0) &&
             (*(int *)((int)(((-700 - param_1) + lVar4 + lVar5 & 0xffffffffU) << 2) + iVar1) != 0))
          {
            if ((*(int *)((int)(((param_2 + 0x18 & 0x3fffffff) * 4 + lVar5 & 0xffffffff) << 2) +
                         iVar1) ==
                 *(int *)((int)(((-0x27c - param_1) + lVar4 + lVar5 & 0xffffffffU) << 2) + iVar1))
               && (*(int *)((int)(((param_2 + 0x28 & 0x3fffffff) * 4 + lVar5 & 0xffffffff) << 2) +
                           iVar1) ==
                   *(int *)((int)(((-0x23c - param_1) + lVar4 + lVar5 & 0xffffffffU) << 2) + iVar1))
               ) {
              iVar3 = iVar3 + 1;
            }
            else {
              iVar6 = iVar6 + 1;
            }
          }
          lVar5 = lVar5 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        if (0 < iVar3) {
          if (iVar6 < 1) {
            return lVar2;
          }
          iVar1 = *(int *)(iVar1 + 0x754);
          *(undefined4 *)(iVar1 + 0x554) = 0x18;
                    /* WARNING: Subroutine does not return */
          fn_82F6C420(iVar1 + 0x10,1);
        }
      }
      else if (((int *)lVar4)[0x10] == *(int *)((int)((param_2 + 0x10 & 0xffffffff) << 2) + iVar1))
      {
        return lVar2;
      }
    }
    lVar2 = lVar2 + 1;
    lVar4 = lVar4 + 4;
    if (0xf < (int)lVar2) {
      return -1;
    }
  } while( true );
}

