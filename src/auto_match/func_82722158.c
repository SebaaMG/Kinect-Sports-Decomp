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
extern int fn_826824B0();
extern int fn_82696B20();
extern int fn_826A7398();
extern int fn_826C1BA0();
extern int fn_826C3768();
extern int fn_827215B0();
extern int fn_827219A0();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


undefined8
fn_82722158(longlong param_1,int param_2,int *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  char cVar3;
  int iVar2;
  uint uVar4;
  int iStack_50;
  int iStack_4c;
  byte bStack_48;
  
  iVar2 = *(int *)(param_2 + 0x78);
  if (*param_3 == *(int *)(iVar2 + 0x208)) {
    if (*(char *)(iVar2 + 0x2a4) == '\x01') {
      uVar1 = fn_82696B20(&iStack_50,param_4,param_2);
      fn_826C3768(param_1 + 0x38,uVar1);
      if (((bStack_48 & 2) == 0) && (iStack_50 != 0)) {
        fn_826824B0();
      }
      iStack_50 = 0;
      if (((bStack_48 & 1) == 0) && (iStack_4c != 0)) {
        fn_826824B0();
      }
      iStack_4c = 0;
      cVar3 = fn_827219A0(param_1 + -0x10,param_2 + 0x78);
      iVar2 = fn_826A7398(param_2);
      uVar4 = *(uint *)(iVar2 + 0xb00);
      if (cVar3 == '\0') {
        uVar4 = uVar4 & 0xffffefff;
      }
      else {
        uVar4 = uVar4 | 0x1000;
      }
      *(uint *)(iVar2 + 0xb00) = uVar4;
    }
  }
  else if (*param_3 == *(int *)(iVar2 + 0x140)) {
    uVar1 = fn_826C1BA0(param_1,param_2,param_3,param_4,param_5);
    fn_827215B0(param_1 + -0x10,param_2 + 0x78,param_2);
    return uVar1;
  }
  uVar1 = fn_826C1BA0(param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

