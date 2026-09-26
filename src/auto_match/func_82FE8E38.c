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
extern int fn_82FE8948();
extern int fn_8300F188();
extern int fn_8300F208();
extern unsigned int iStack_3c;
extern unsigned int lbl_832642E4;
extern unsigned int uStack_38;
extern unsigned int uStack_3e;


undefined8 fn_82FE8E38(undefined8 param_1,undefined4 param_2)

{
  undefined2 uVar2;
  undefined8 uVar1;
  undefined1 auStack_40 [2];
  undefined2 uStack_3e;
  int iStack_3c;
  undefined4 uStack_38;
  
  iStack_3c = fn_82FE8948();
  if (iStack_3c == 0) {
    return 0xf;
  }
  uStack_3e = 0x14;
  uStack_38 = param_2;
  uVar2 = fn_8300F188();
  uVar1 = fn_8300F208(lbl_832642E4,auStack_40,uVar2);
  return uVar1;
}

