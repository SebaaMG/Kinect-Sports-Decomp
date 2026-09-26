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
extern int fn_827D96A0();
extern int fn_827D9780();
extern int fn_827E0580();
extern int fn_827E2598();
extern int fn_827E25A8();


undefined4 fn_827DF0B0(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 auStack_40 [2];
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  
  auStack_40[0] = fn_827D96A0(param_2);
  fn_827E0580(&puStack_38,param_1 + 0x78,auStack_40);
  puVar2 = puStack_38;
  do {
    if (puVar2 == puStack_34) {
      return 0;
    }
    uVar1 = puVar2[3];
    uVar3 = fn_827E2598(uVar1);
    iVar4 = fn_827D9780(uVar3,param_2);
    if (iVar4 == 0) {
      if (param_3 == -1) {
        return uVar1;
      }
      iVar4 = fn_827E25A8(uVar1);
      if (param_3 == iVar4) {
        return uVar1;
      }
    }
    puVar2 = (undefined4 *)*puVar2;
  } while( true );
}

