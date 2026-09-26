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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_aa0;
extern unsigned int *auStack_ad0;
extern unsigned int *auStack_af0;
extern unsigned int *auStack_b00;
extern int fn_822509A0();
extern int fn_82359C18();
extern int fn_82F565A0();
extern int fn_82F56D40();
extern int fn_82F58670();
extern int fn_82F63108();
extern unsigned int stack0x0000001c;


void fn_82F58960(int param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  int *piStack0000001c;
  uint auStack_b00 [4];
  undefined1 auStack_af0 [16];
  int *piStack_ae0;
  undefined1 auStack_ad0 [48];
  undefined1 auStack_aa0 [2696];
  
  piStack0000001c = param_2;
  fn_82F56D40(auStack_b00,param_1,&stack0x0000001c);
  if (auStack_b00[0] != *(uint *)(param_1 + 4)) {
    iVar2 = fn_82F58670(param_1,&stack0x0000001c);
    (**(code **)(*param_2 + 8))(param_2,auStack_ad0);
    puVar1 = *(uint **)(iVar2 + 4);
    auStack_b00[0] = *puVar1;
    while( true ) {
      if ((ulonglong)auStack_b00[0] == ZEXT48(puVar1)) break;
      fn_82F565A0(auStack_af0,(ulonglong)auStack_b00[0] + 0x18);
      (**(code **)(*param_2 + 4))(param_2,auStack_aa0);
      if (piStack_ae0 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        fn_82F63108();
      }
      (**(code **)(*piStack_ae0 + 4))(piStack_ae0,auStack_ad0,0);
      fn_82359C18(auStack_af0);
      fn_822509A0(auStack_b00);
      puVar1 = *(uint **)(iVar2 + 4);
    }
  }
  return;
}

