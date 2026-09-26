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
extern int fn_829301D0();
extern int fn_82934160();
extern unsigned int lbl_8202F0EC;


void fn_829309D8(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_82934160();
  puVar1 = (undefined4 *)fn_829301D0(*puVar1,0x30,0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[2] = 0;
    puVar1[1] = 3;
    *puVar1 = &lbl_8202F0EC;
    puVar1[3] = 0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(puVar1 + 6) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(puVar1 + 8) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(puVar1 + 10) = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}

