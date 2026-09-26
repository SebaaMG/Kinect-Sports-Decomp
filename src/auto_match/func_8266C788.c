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
extern int fn_8251F718();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82520158();
extern int fn_82526B90();
extern int fn_82674108();
extern int fn_82674580();


void fn_8266C788(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_40 [64];
  
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  fn_82520158(0xffffffff82002b44,auStack_40,0);
  lVar3 = fn_8251F718(auStack_40);
  uVar4 = fn_8251FBA8();
  uVar4 = (uVar4 & 0xffffffff) / 0x88;
  if ((int)uVar4 != 0) {
    lVar6 = lVar3 + 0x84;
    do {
      iVar5 = fn_82526B90(lVar6 + -0x84,0xffffffff82002b34);
      if (iVar5 == 0) {
        fn_82674580(uVar1,lVar6 + -4);
        fn_82674108(uVar2,lVar6);
      }
      uVar4 = uVar4 - 1;
      lVar6 = lVar6 + 0x88;
    } while (uVar4 != 0);
  }
  fn_8251FA58(lVar3);
  return;
}

