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


undefined8 fn_82AC39C0(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (*(char *)(param_3 + 10) == '\0') {
    puVar4 = (uint *)param_3[4];
    uVar1 = *(uint *)(*param_3 + 0x1c);
    if (puVar4 < (uint *)param_3[0x11]) {
      return 0xffffffff80004005;
    }
    if ((uint *)(param_3[0x12] + param_3[0x11]) < puVar4 + uVar1) {
      return 0xffffffff80004005;
    }
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        if (param_2 == (*puVar4 & 0xfff)) {
          return 0;
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 < uVar1);
    }
  }
  uVar2 = *(ushort *)(param_2 * 0xc + param_1 + 4) & 0x3f;
  if (uVar2 < 0x1b) {
    if ((uVar2 < 0x19) && ((uVar2 < 6 || ((7 < uVar2 && ((uVar2 < 0x10 || (0x11 < uVar2)))))))) {
      return 0xffffffff80004005;
    }
  }
  else {
    if (uVar2 < 0x1f) {
      return 0xffffffff80004005;
    }
    if ((0x26 < uVar2) && (uVar2 != 0x39)) {
      return 0xffffffff80004005;
    }
  }
  return 0;
}

