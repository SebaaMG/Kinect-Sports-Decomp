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
extern int fn_827BA360();
extern int fn_82F691F0();


void fn_827BA4E8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  ulonglong uVar3;
  
  if (param_2 == 1) {
    sVar1 = *(short *)(param_1 + 0x5c);
    sVar2 = *(short *)(param_1 + 0x58);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x5e);
    sVar2 = *(short *)(param_1 + 0x5a);
  }
  uVar3 = ((longlong)sVar1 - (longlong)sVar2) + 1;
  fn_827BA360(param_1 + 0x24,uVar3,0);
  *(int *)(param_1 + 0x28) = (int)uVar3;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(undefined4 *)(param_1 + 0x24),0,uVar3 & 0xffffffff);
}

