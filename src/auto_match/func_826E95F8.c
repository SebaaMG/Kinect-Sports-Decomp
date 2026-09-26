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
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_826E7800();
extern int fn_826E94D0();
extern int fn_82F68CC0();
extern unsigned int iStack_44;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


undefined8 fn_826E95F8(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  char acStack_50 [8];
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  
  uStack_48 = 0;
  iStack_44 = 0;
  uStack_40 = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  while( true ) {
    *(undefined1 *)(param_1 + 0x15) = 0;
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
      fn_826E7800(param_1,1);
    }
    acStack_50[0] = *(char *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if (acStack_50[0] == '\0') break;
    fn_826E94D0(&uStack_48,acStack_50);
  }
  acStack_50[0] = '\0';
  fn_826E94D0(&uStack_48,acStack_50);
  iVar2 = iStack_44;
  uVar1 = uStack_48;
  if (iStack_44 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8267B890(param_2,iStack_44,0);
    fn_82F68CC0(uVar3,uVar1,iVar2);
  }
  fn_8267BE38(uVar1);
  return uVar3;
}

