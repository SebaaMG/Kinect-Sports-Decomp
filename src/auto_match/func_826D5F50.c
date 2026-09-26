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
extern int fn_8267B890();
extern int fn_826D4148();


undefined8 fn_826D5F50(undefined8 param_1,int *param_2,undefined4 *param_3,undefined8 param_4)

{
  int iVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 auStack_40 [16];
  
  iVar3 = (**(code **)(*param_2 + 0x40))(param_2);
  uVar1 = fn_8267B890(*(undefined4 *)(iVar3 + 0x14),0x1d8,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    auStack_40[0] = *param_3;
    uVar2 = fn_826D4148(uVar1,param_1,param_4,iVar3,param_2,auStack_40,0);
  }
  return uVar2;
}

