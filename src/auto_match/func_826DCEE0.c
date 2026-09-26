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
extern unsigned int *auStack_30;
extern int fn_82687270();
extern int fn_826DC448();
extern int fn_826F3210();
extern unsigned int iStack_24;
extern unsigned int iStack_28;


undefined8 fn_826DCEE0(int param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar3;
  undefined8 uVar2;
  undefined4 auStack_30 [2];
  int iStack_28;
  int iStack_24;
  
  auStack_30[0] = *param_2;
  iStack_28 = 0;
  iStack_24 = 0;
  cVar3 = fn_826DC448(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x20),&iStack_28,auStack_30);
  iVar1 = iStack_24;
  if (cVar3 == '\0') {
    if ((iStack_28 == 0) && (iStack_24 != 0)) {
      fn_82687270();
    }
    uVar2 = 0;
  }
  else {
    fn_826F3210(param_1 + 0x18,iStack_24,param_3);
    if ((iStack_28 == 0) && (iVar1 != 0)) {
      fn_82687270(iVar1);
    }
    uVar2 = 1;
  }
  return uVar2;
}

