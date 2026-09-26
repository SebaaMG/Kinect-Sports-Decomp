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
extern unsigned int lbl_82168368;
extern unsigned int lbl_83150010;
extern unsigned int lbl_83153538;


undefined8 fn_82A339B8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if (lbl_82168368 != (undefined *)0x0) {
    (*(code *)lbl_82168368)();
  }
  puVar3 = &lbl_83153538;
  uVar2 = 0;
  do {
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((code *)*puVar3 != (code *)0x0) {
      uVar2 = (*(code *)*puVar3)();
    }
    puVar3 = puVar3 + 1;
  } while (puVar3 < (undefined4 *)0x83153544);
  if ((int)uVar2 == 0) {
    puVar3 = &lbl_83150010;
    do {
      pcVar1 = (code *)*puVar3;
      if ((pcVar1 != (code *)0x0) && (pcVar1 != (code *)0xffffffff)) {
        (*pcVar1)();
      }
      puVar3 = puVar3 + 1;
    } while (puVar3 < (undefined4 *)0x83153534);
    uVar2 = 0;
  }
  return uVar2;
}

