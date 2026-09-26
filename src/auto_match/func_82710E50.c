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
extern unsigned int *auStack_40;
extern int fn_8267B890();
extern int fn_82696330();
extern int fn_827108A8();


int fn_82710E50(undefined8 param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  uVar1 = fn_8267B890(*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x288),0x34,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_827108A8(uVar1,param_2);
  }
  auStack_30[0] = 10;
  auStack_40[0] = 0;
  (**(code **)(*(int *)(iVar2 + 0x10) + 0x28))
            (iVar2 + 0x10,(uint *)(param_2 + 0x78),(ulonglong)*(uint *)(param_2 + 0x78) + 0x250,
             auStack_30,auStack_40);
  fn_82696330(auStack_30);
  return iVar2;
}

