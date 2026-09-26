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
extern int fn_8267C4F0();
extern int fn_82791BD8();
extern int fn_82791CF0();
extern unsigned int iStack_24;
extern unsigned int iStack_34;
extern unsigned int uStack_20;


int fn_82793650(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [12];
  int iStack_34;
  int iStack_24;
  uint uStack_20;
  
  fn_82791BD8(auStack_40,param_1 + 0x10,param_1,param_2);
  iVar2 = 0;
  if (uStack_20 < *(uint *)(iStack_24 + 4)) {
    iVar1 = fn_82791CF0(auStack_40);
    if (*(int *)(iVar1 + 0xc) != 0) {
      iVar2 = *(int *)(iVar1 + 0xc);
    }
  }
  if (iStack_34 != 0) {
    fn_8267C4F0();
  }
  return iVar2;
}

