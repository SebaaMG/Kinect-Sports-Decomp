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
extern unsigned int *auStack_10;


ulonglong fn_82AC3838(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint auStack_10 [4];
  
  uVar2 = *(uint *)(param_2 * 0xc + param_1);
  param_1 = param_2 * 0xc + param_1;
  if (((((uVar2 & 0x40000) == 0) && ((uVar2 & 0x800) == 0)) &&
      ((uVar2 >> 0xc & 0x3f) <= *(uint *)(param_3 + 0x20))) &&
     ((uVar2 >> 5 & 0x3f) <= *(uint *)(param_3 + 0x20))) {
    uVar1 = *(uint *)(param_1 + 4);
    uVar3 = uVar2 & 0x1f;
    auStack_10[0] = uVar1 & 7;
    auStack_10[1] = uVar1 >> 3 & 7;
    auStack_10[2] = uVar1 >> 6 & 7;
    auStack_10[3] = uVar1 >> 9 & 7;
    if (uVar3 != 1) {
      if (uVar3 < 0x10) {
        return 0xffffffff80004005;
      }
      if (0x13 < uVar3) {
        if (uVar3 < 0x18) {
          return 0xffffffff80004005;
        }
        if (0x1a < uVar3) {
          return 0xffffffff80004005;
        }
        iVar5 = 0;
        puVar4 = auStack_10;
        do {
          if (*puVar4 != 7) {
            return 0xffffffff80004005;
          }
          iVar5 = iVar5 + 1;
          puVar4 = puVar4 + 1;
        } while (iVar5 < 4);
      }
    }
    if (((uVar2 & 0x80000) != 0) || (*(char *)(param_3 + 0x28) != '\0')) {
      iVar5 = 0;
      puVar4 = auStack_10;
      do {
        if (*puVar4 == 6) {
          return 0xffffffff80004005;
        }
        iVar5 = iVar5 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar5 < 4);
      uVar2 = *(uint *)(param_1 + 4);
      if ((((((uVar2 & 0x3000) != 0x2000) && ((uVar2 & 0xc000) != 0x8000)) &&
           ((uVar1 = uVar2 >> 0x12 & 7, uVar1 != 6 &&
            ((((uVar1 == 0 || (6 < uVar1)) || (*(char *)(param_3 + 0x28) != '\0')) &&
             (((uVar2 & 0x3000000) != 0x2000000 && ((uVar2 & 0xc000000) != 0x8000000)))))))) &&
          ((uVar2 & 0xe00000) == 0)) && ((uVar2 & 0x40000000) == 0)) {
        return -(ulonglong)((*(uint *)(param_1 + 8) & 0x3e00) != 0) & 0xffffffff80004005;
      }
    }
  }
  return 0xffffffff80004005;
}

