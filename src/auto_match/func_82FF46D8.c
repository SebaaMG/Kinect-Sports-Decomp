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
extern int fn_82A1E6A0();
extern int fn_82A1E810();
extern unsigned int lbl_831BC768;


char fn_82FF46D8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  iVar2 = fn_82A1E6A0(0,1,0,0);
  *(int *)(param_1 + 0xa4) = iVar2;
  cVar3 = (iVar2 == 0) + '\x01';
  if (cVar3 == '\x01') {
    fn_82A1E810(*(undefined4 *)(param_1 + 0xa4));
    uVar1 = lbl_831BC768;
    lVar5 = 0x1f;
    puVar4 = (undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 4) = uVar1;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    cVar3 = '\x01';
  }
  return cVar3;
}

