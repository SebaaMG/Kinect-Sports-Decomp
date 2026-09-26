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
extern int fn_828252D8();
extern int fn_82F641F8();


void fn_8282BDD0(int param_1)

{
  uint uVar2;
  longlong lVar1;
  int iVar3;
  int *piVar4;
  
  if ((*(byte *)(param_1 + 0x134) & 4) != 0) {
    uVar2 = 0;
    if (*(char *)(param_1 + 0x51) != '\0') {
      iVar3 = 0;
      do {
        fn_828252D8(*(undefined4 *)(*(int *)(param_1 + 0x114) + iVar3 + 0xd));
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x21;
      } while (uVar2 < *(byte *)(param_1 + 0x51));
    }
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    fn_828252D8();
  }
  if (*(int *)(param_1 + 300) != 0) {
    fn_828252D8();
  }
  fn_82F641F8(*(undefined4 *)(param_1 + 0xcc));
  piVar4 = (int *)(param_1 + 0xb8);
  lVar1 = 3;
  do {
    if (*piVar4 != 0) {
      fn_828252D8();
    }
    lVar1 = lVar1 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar1 != 0);
  fn_828252D8(param_1);
  return;
}

