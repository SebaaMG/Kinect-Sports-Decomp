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
extern unsigned int *auStack_50;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_826A2B48();


undefined8 fn_8271FCF8(uint *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [64];
  
  if (param_2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = fn_8267B890(*(undefined4 *)(*param_1 + 0x288),0x48,0);
    if ((uVar4 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_826A2B48(uVar4,param_1);
    }
    uVar1 = *param_1;
    iVar2 = *param_2;
    auStack_50[0] = 1;
    uVar3 = fn_826961B0(auStack_40,uVar4);
    (**(code **)(iVar2 + 0x28))(param_2,param_1,(ulonglong)uVar1 + 0x140,uVar3,auStack_50);
    fn_82696330(auStack_40);
    if ((uVar4 & 0xffffffff) != 0) {
      fn_826824B0(uVar4);
    }
    uVar3 = 1;
  }
  return uVar3;
}

