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
extern int fn_822BD278();
extern int fn_822C69F0();
extern int fn_822C6D68();
extern int fn_822CB020();


void fn_822CA5B0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [24];
  
  lVar2 = (**(code **)(*param_1 + 8))();
  fn_822BD278(auStack_40,lVar2 + 0x144);
  lVar2 = (**(code **)(*param_1 + 8))(param_1);
  fn_822CB020(auStack_30,lVar2 + 0xf0);
  iVar1 = param_1[0x2f];
  if (iVar1 != 0) {
    lVar2 = (ulonglong)*(uint *)(iVar1 + 0x114) + 0x50;
    fn_822C6D68(lVar2,iVar1 + 0x80,iVar1 + 0xc0);
    fn_822C69F0(lVar2,(ulonglong)(uint)param_1[0x2f] + 0x80,
                      (ulonglong)(uint)param_1[0x2f] + 0xc0);
  }
  return;
}

