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
extern unsigned int *auStack_40;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82279C58();
extern int fn_8266F600();
extern int fn_82672C20();
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82469CD8(undefined8 param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 auStack_40 [40];
  
  if ((param_2 & 0xffffffff) != 0) {
    puVar1 = (undefined4 *)fn_82279C58(auStack_60,param_1);
    fn_8266F600(*puVar1,param_2,auStack_40,0x20);
    if (iStack_5c != 0) {
      fn_822315A0();
    }
    uStack_50 = 0;
    uStack_4c = 0;
    fn_82273CD8(&uStack_50,4);
    puStack_48 = auStack_40;
    puVar1 = (undefined4 *)fn_82279C58(auStack_58,param_1);
    fn_82672C20(*puVar1,0xffffffff821bc2d0,&uStack_50,1);
    if (iStack_54 != 0) {
      fn_822315A0();
    }
    fn_82273C88(&uStack_50);
  }
  return;
}

