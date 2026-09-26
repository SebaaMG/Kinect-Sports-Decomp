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
extern int fn_82937A60();


void fn_8293BBD8(int param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((*(uint *)(param_1 + 0x60) & 8) == 0) {
    iVar1 = 0;
    uVar4 = 0;
    uVar2 = 0;
    lVar5 = 0x10;
    do {
      if (*(char *)(param_1 + 0xa4 + uVar2) != '\0') {
        iVar1 = iVar1 + 1;
        uVar4 = uVar2;
      }
      uVar2 = uVar2 + 1;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    if ((iVar1 != 0) && (iVar1 != uVar4 + 1)) {
      cVar3 = (-(*(int *)(param_1 + 0x40) == 1) & 3U) + 0x6f;
      fn_82937A60(param_1,0xffffffff82032f08,cVar3);
      uVar2 = 0;
      if (uVar4 != 0) {
        do {
          if (*(char *)(param_1 + 0xa4 + uVar2) == '\0') {
            fn_82937A60(param_1,0xffffffff82032ed4,cVar3,uVar2);
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < uVar4);
      }
    }
  }
  return;
}

