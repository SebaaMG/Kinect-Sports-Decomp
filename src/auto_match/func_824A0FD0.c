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
extern unsigned int *auStack_60;
extern int fn_8229E090();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648F0();


void fn_824A0FD0(int param_1)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [80];
  
  bVar1 = false;
  piVar4 = (int *)(param_1 + 0xc);
  lVar3 = 2;
  do {
    if (*piVar4 != 0) {
      fn_8229E090(*piVar4,0,1);
      bVar1 = true;
      *piVar4 = 0;
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 2;
  } while (lVar3 != 0);
  if (bVar1) {
    fn_828648F0(auStack_50,0xffffffff83292a0c);
    uVar2 = fn_828647D8();
    auStack_60[0] = *(undefined4 *)(param_1 + 0x1c);
    auStack_60[0] = fn_82535298(auStack_60,uVar2,0xffffffff83296bc0,0xffffffff83296bd0);
    fn_82864898(auStack_50);
    fn_82536288(auStack_60);
  }
  return;
}

