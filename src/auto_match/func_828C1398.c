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
extern int fn_828C0148();
extern int fn_828C0E18();
extern int fn_828C1040();


int fn_828C1398(int param_1,ulonglong *param_2)

{
  uint uVar2;
  undefined8 uVar1;
  uint auStack_40 [4];
  ulonglong auStack_30 [6];
  
  uVar2 = fn_828C0148();
  if ((uVar2 == *(uint *)(param_1 + 4)) || (*param_2 < *(ulonglong *)(uVar2 + 0x10))) {
    auStack_30[0] = *param_2;
    auStack_30[1] = 0;
    uVar1 = fn_828C1040(param_1,auStack_30);
    fn_828C0E18(auStack_40,param_1,uVar2,uVar1);
    uVar2 = auStack_40[0];
  }
  return uVar2 + 0x18;
}

