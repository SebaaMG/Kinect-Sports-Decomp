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
extern unsigned int *auStack_50;
extern int fn_8223C610();
extern int fn_8265CA20();
extern int fn_828E9D28();
extern unsigned int iStack_28;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_2c;


void fn_8243C320(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  (**(code **)(*param_1 + 0x40))(param_1,auStack_50);
  puStack_30 = auStack_50;
  iStack_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_2c = 4;
  fn_828E9D28(auStack_40,auStack_50,4);
  puVar2 = (undefined4 *)(param_2 + -4);
  lVar3 = 8;
  do {
    uVar1 = fn_8223C610(auStack_40,4,0,0);
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 1;
    *puVar2 = uVar1;
  } while (lVar3 != 0);
  if (iStack_28 != 0) {
    fn_8265CA20();
  }
  return;
}

