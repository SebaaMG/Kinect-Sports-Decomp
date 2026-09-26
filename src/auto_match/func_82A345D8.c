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
extern unsigned int lbl_820893C4;


longlong fn_82A345D8(int param_1)

{
  int *piVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar4 = 0;
  uVar2 = *(uint *)(param_1 + 0xc) >> 6;
  uVar6 = (ulonglong)uVar2 & 0xffff;
  if ((uVar2 & 0xffff) != 0) {
    iVar5 = 0;
    if ((uVar2 & 0xffff) != 0) {
      do {
        uVar7 = (longlong)(int)*(uint *)(&lbl_820893C4 + (*(uint *)(param_1 + 0xc) >> 0x16 & 3) * 4)
                * (longlong)iVar5;
        uVar3 = uVar7 & 0x1f;
        piVar1 = (int *)(((uint)((uVar7 & 0xffffffff) >> 3) & 0x1ffffffc) + param_1 + 0x10);
        uVar7 = 0x20 - uVar3;
        iVar5 = iVar5 + 1;
        lVar4 = (((ulonglong)((uint)piVar1[1] >> (uVar7 & 0x7f)) &
                  ((uVar7 & 0xffffffff) >> 5) - 1 & 0xffffffff |
                 (ulonglong)(uint)(*piVar1 << (int)uVar3)) >>
                (0x20 - (ulonglong)
                        *(uint *)(&lbl_820893C4 + (*(uint *)(param_1 + 0xc) >> 0x16 & 3) * 4) & 0x7f
                )) + lVar4;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return lVar4;
}

