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
extern unsigned int *auStack_150;
extern unsigned int *auStack_290;
extern unsigned int *auStack_3ec;
extern int fn_822315A0();
extern int fn_82522ED8();
extern int fn_825FD848();
extern int fn_8265BF48();
extern int fn_827D5070();
extern int fn_827D5088();
extern int fn_82A1EFC0();
extern int fn_82F67FE8();
extern unsigned int uStack_394;
extern unsigned int uStack_398;
extern unsigned int uStack_39c;
extern unsigned int uStack_3a0;


void fn_8259B7D8(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar3;
  ulonglong uVar2;
  undefined4 auStack_3ec [19];
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined1 uStack_394;
  undefined1 auStack_290 [320];
  undefined1 auStack_150 [336];
  
  uVar1 = *param_2;
  auStack_3ec[0] = 0;
  uVar3 = fn_827D5088(uVar1);
  uStack_3a0 = fn_827D5070(uVar1);
  uStack_394 = 0;
  uStack_39c = uStack_3a0;
  uStack_398 = uVar3;
  uVar2 = fn_825FD848(&uStack_3a0);
  if ((uVar2 & 0xffffffff) != 0) {
    fn_82F67FE8(uVar2,0xffffffff821c7b98,auStack_150,0x100,auStack_3ec);
    fn_8265BF48(auStack_150,0);
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(auStack_290,0,0x134);
  }
  fn_827D5070(*param_2);
  fn_82522ED8();
  if (param_2[1] != 0) {
    fn_822315A0();
  }
  return;
}

