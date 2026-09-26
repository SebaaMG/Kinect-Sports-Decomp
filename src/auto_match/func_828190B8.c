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
extern int fn_828223C8();
extern unsigned int lbl_8320A5DC;


void fn_828190B8(void)

{
  undefined *puVar1;
  undefined *apuStack_10 [4];
  
  puVar1 = &lbl_8320A5DC;
  while( true ) {
    fn_828223C8(puVar1,apuStack_10);
    if (apuStack_10[0] == (undefined *)0x0) break;
    puVar1 = apuStack_10[0];
    if (*(code **)(*(int *)(apuStack_10[0] + 0x10) + 0x24) != (code *)0x0) {
      (**(code **)(*(int *)(apuStack_10[0] + 0x10) + 0x24))();
      puVar1 = apuStack_10[0];
    }
  }
  return;
}

