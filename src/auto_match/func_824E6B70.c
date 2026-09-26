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
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_824E7430();
extern int fn_824E75B8();
extern int fn_82F68CC0();


void fn_824E6B70(int param_1,ulonglong param_2)

{
  int iVar1;
  int iVar2;
  int *piVar4;
  undefined8 uVar3;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  if ((param_2 & 0xffffffff) != 0) {
    fn_82230110(auStack_70,param_2 + 8);
    iVar1 = *(int *)(param_1 + 0x2f4);
    piVar4 = (int *)fn_824E75B8(auStack_80,param_1 + 0x2f0,auStack_70);
    iVar2 = *piVar4;
    fn_82230300(auStack_70,1,0);
    if (iVar1 == iVar2) {
      fn_82230110(auStack_50,param_2 + 8);
      uVar3 = fn_824E7430(param_1 + 0x2f0,auStack_50);
      fn_82F68CC0(uVar3,param_2 + 0x48,0x68);
      fn_82230300(auStack_50,1,0);
    }
  }
  return;
}

