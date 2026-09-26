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
extern unsigned int *auStack_50;
extern int fn_82FE8948();
extern int fn_8300F108();
extern int fn_8300F208();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int lbl_832642E4;
extern unsigned int uStack_4c;
extern unsigned int uStack_4e;


undefined8 fn_82FE8B88(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar2;
  undefined2 uVar3;
  undefined8 uVar1;
  undefined1 auStack_50 [2];
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  int iStack_48;
  int iStack_44;
  
  iVar2 = fn_82FE8948();
  iStack_44 = fn_82FE8948(param_2);
  if ((iVar2 == 0) || (iStack_44 == 0)) {
    uVar1 = 0xf;
  }
  else {
    uStack_4e = 4;
    uStack_4c = param_3;
    iStack_48 = iVar2;
    uVar3 = fn_8300F108();
    uVar1 = fn_8300F208(lbl_832642E4,auStack_50,uVar3);
  }
  return uVar1;
}

