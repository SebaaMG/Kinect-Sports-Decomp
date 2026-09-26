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
extern int fn_8267BE38();
extern int fn_8268B818();
extern int fn_8268BEA8();
extern int fn_826E7800();
extern int fn_826E94D0();
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


bool fn_826E9530(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulonglong uVar2;
  char acStack_40 [8];
  undefined4 uStack_38;
  uint uStack_34;
  undefined4 uStack_30;
  
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  while( true ) {
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
      fn_826E7800(param_1,1);
    }
    acStack_40[0] = *(char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (acStack_40[0] == '\0') break;
    fn_826E94D0(&uStack_38,acStack_40);
  }
  acStack_40[0] = '\0';
  fn_826E94D0(&uStack_38,acStack_40);
  uVar1 = uStack_38;
  uVar2 = (ulonglong)uStack_34;
  if (uVar2 != 0) {
    fn_8268B818(param_2,uStack_38,uVar2 - 1);
  }
  else {
    fn_8268BEA8();
  }
  fn_8267BE38(uVar1);
  return uVar2 != 0;
}

