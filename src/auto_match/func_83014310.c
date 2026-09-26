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
extern int fn_8300F1A0();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int uStack_48;
extern unsigned int uStack_4e;


void fn_83014310(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 auStack_50 [2];
  undefined2 uStack_4e;
  int *piStack_4c;
  undefined4 uStack_48;
  
  iVar1 = param_1[0xe];
  RtlLeaveCriticalSection(param_1 + 7);
  if (iVar1 == 2) {
    uStack_4e = 0x17;
    (**(code **)(*param_1 + 4))(param_1);
    uStack_48 = 6;
    piStack_4c = param_1;
    uVar2 = fn_8300F1A0();
    fn_8300F208(lbl_832642E4,auStack_50,uVar2);
  }
  return;
}

