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
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_82526C70();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern int fn_82672660();
extern int fn_826728E8();


void fn_8229AE58(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_50 [80];
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    uVar4 = 0;
    do {
      uVar4 = uVar4 + 1;
      fn_82526C70(auStack_50,0x20,0xffffffff821ab74c,uVar4);
      uVar2 = *puVar1;
      uVar3 = fn_8266F6B8();
      fn_826728E8(uVar2,auStack_50,uVar3);
    } while ((uVar4 & 0xffffffff) < 4);
    fn_82672660(*puVar1,puVar1);
    fn_82359C18(puVar1 + 0x48);
    if (puVar1[1] != 0) {
      fn_822315A0();
    }
    fn_8265CA20(puVar1);
  }
  return;
}

