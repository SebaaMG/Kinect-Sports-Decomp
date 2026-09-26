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
extern int fn_82486278();
extern int fn_82A1DD38();


void fn_82486628(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x18c0) == 0) {
    piVar1 = (int *)(param_1 + 0xc58);
    lVar4 = 3;
    piVar2 = piVar1;
    do {
      if (*piVar2 == 2) {
        *piVar2 = 4;
      }
      piVar2 = piVar2 + 0x108;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    lVar4 = 3;
    do {
      if (*piVar1 == 3) {
        *piVar1 = 4;
      }
      piVar1 = piVar1 + 0x108;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    puVar3 = (undefined4 *)(param_1 + 0x1078);
    lVar4 = 2;
    do {
      if (puVar3[-0x108] == 4) {
        fn_82A1DD38(puVar3 + -0x108,puVar3,0x420);
        *puVar3 = 4;
      }
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 0x108;
    } while (lVar4 != 0);
  }
  else if (*(int *)(param_1 + 0x18c0) != 1) {
    fn_82486278();
  }
  return;
}

