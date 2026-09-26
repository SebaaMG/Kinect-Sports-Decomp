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
extern int fn_830069B8();
extern int fn_83008158();
extern unsigned int uStack_28;
extern unsigned int uStack_30;


undefined8 fn_83006FF8(int *param_1,undefined8 param_2)

{
  char cVar2;
  int iVar1;
  undefined8 uVar3;
  undefined8 uStack_30;
  uint uStack_28;
  
  (**(code **)(*param_1 + 0xd8))();
  uVar3 = 2;
  uStack_28 = uStack_28 | 0x80000000;
  cVar2 = fn_830069B8(param_1);
  if ((cVar2 != '\0') &&
     (iVar1 = fn_83008158((ulonglong)(uint)param_1[8] + 0x24,param_2,uStack_30,
                                (ulonglong)uStack_28 << 0x20), iVar1 != 0)) {
    uVar3 = 1;
  }
  (**(code **)(*param_1 + 0xdc))(param_1);
  return uVar3;
}

