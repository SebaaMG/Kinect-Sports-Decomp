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


uint fn_826AB3F8(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar1 = *param_1;
  iVar5 = param_3 * 0xc + iVar1;
  if (*(int *)(iVar5 + 8) != -2) {
    iVar4 = 4;
    uVar3 = 0x1505;
    lVar6 = 4;
    do {
      iVar4 = iVar4 + -1;
      uVar3 = (uint)*(byte *)(iVar5 + 0xc + iVar4) + uVar3 * 0x1003f;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar2 = param_3;
    if ((uVar3 & *(uint *)(iVar1 + 4)) == param_3) {
      while( true ) {
        iVar4 = 4;
        uVar3 = 0x1505;
        lVar6 = 4;
        do {
          iVar4 = iVar4 + -1;
          uVar3 = (uint)*(byte *)(iVar5 + 0xc + iVar4) + uVar3 * 0x1003f;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        if (((uVar3 & *(uint *)(iVar1 + 4)) == param_3) && (*(int *)(iVar5 + 0xc) == *param_2)) {
          return uVar2;
        }
        uVar2 = *(uint *)(iVar5 + 8);
        if (uVar2 == 0xffffffff) break;
        iVar5 = uVar2 * 0xc + iVar1;
      }
    }
  }
  return 0xffffffff;
}

