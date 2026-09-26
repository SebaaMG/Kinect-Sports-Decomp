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
extern int fn_827C08B0();
extern int fn_827C0A70();
extern int fn_827C0B88();
extern int fn_827C0C68();
extern int fn_827C0D50();
extern int fn_827C0DE8();
extern int fn_827C0E80();
extern int fn_827C1268();
extern int fn_827C1458();
extern int fn_827C1650();
extern int fn_827C17D0();
extern int fn_827C8ED8();
extern int fn_827C90E0();
extern int fn_827C90F0();


void fn_827C1838(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  param_1[1] = 0;
  uVar1 = fn_827C90E0();
  puVar2 = (undefined4 *)fn_827C8ED8(param_1,0x54);
  if (puVar2 == (undefined4 *)0x0) {
    fn_827C90F0(param_1);
    *(undefined4 *)(*param_1 + 0x14) = 0x36;
    *(undefined4 *)(*param_1 + 0x18) = 0;
    (**(code **)*param_1)(param_1);
  }
  puVar2[0xb] = uVar1;
  *puVar2 = fn_827C08B0;
  puVar2[1] = fn_827C0A70;
  puVar2[2] = fn_827C0B88;
  puVar2[3] = fn_827C0C68;
  puVar2[4] = fn_827C0D50;
  puVar2[5] = fn_827C0DE8;
  puVar2[6] = fn_827C0E80;
  puVar2[7] = fn_827C1268;
  puVar2[8] = fn_827C1458;
  puVar2[9] = fn_827C1650;
  puVar2[10] = fn_827C17D0;
  puVar3 = puVar2 + 0x11;
  puVar2[0xc] = 1000000000;
  lVar4 = 2;
  do {
    puVar3[-3] = 0;
    puVar3 = puVar3 + -1;
    *puVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  puVar2[0x11] = 0;
  puVar2[0x12] = 0;
  puVar2[0x13] = 0x54;
  param_1[1] = (int)puVar2;
  return;
}

