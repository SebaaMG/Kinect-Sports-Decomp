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
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_82526C70();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int iStack_44;
extern unsigned int iStack_4c;


void fn_8227B968(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  undefined8 uVar2;
  longlong lVar4;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined1 auStack_48 [4];
  int iStack_44;
  undefined1 auStack_40 [64];
  
  lVar4 = 0;
  do {
    fn_82526C70(auStack_40,0x10,0xffffffff821a84f0,lVar4);
    puVar3 = (undefined4 *)fn_82279C58(auStack_50,param_1);
    uVar1 = *puVar3;
    uVar2 = fn_8266F6B8();
    fn_826728E8(uVar1,auStack_40,uVar2);
    if (iStack_4c != 0) {
      fn_822315A0();
    }
    lVar4 = lVar4 + 1;
  } while ((int)lVar4 < 8);
  puVar3 = (undefined4 *)fn_82279C58(auStack_48,param_1);
  uVar1 = *puVar3;
  uVar2 = fn_8266F6B8();
  fn_826728E8(uVar1,0xffffffff821a84fc,uVar2);
  if (iStack_44 != 0) {
    fn_822315A0();
  }
  return;
}

