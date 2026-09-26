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
extern unsigned int *auStack_20;
extern int fn_82930318();
extern int fn_82931BC0();
extern int fn_82980C18();
extern int fn_82986DF0();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


int fn_829882A0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar3;
  ulonglong uVar2;
  int *piVar4;
  int iStack0000001c;
  undefined4 auStack_20 [2];
  
  iStack0000001c = param_2;
  iVar3 = fn_82986DF0(param_1,param_3,auStack_20);
  if (iVar3 < 0) {
    fn_82980C18(param_1,0,0xbf2,0xffffffff8204e730);
  }
  else {
    uVar2 = fn_82930318(0x18);
    if ((uVar2 & 0xffffffff) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82931BC0(uVar2,0,auStack_20[0]);
    }
    if (iVar3 != 0) {
      piVar4 = &stack0x0000001c;
      while ((param_2 != 0 && (iVar1 = *piVar4, *(int *)(iVar1 + 4) == 8))) {
        param_2 = *(int *)(iVar1 + 0x10);
        piVar4 = (int *)(iVar1 + 0x10);
      }
      *(int *)(iVar3 + 0x10) = *piVar4;
      *piVar4 = iVar3;
      return iStack0000001c;
    }
  }
  return 0;
}

