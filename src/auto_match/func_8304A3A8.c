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
extern int fn_82FA5100();
extern int fn_8307DBA0();
extern int fn_8307E7A8();
extern unsigned int lbl_831BC770;


undefined8 fn_8304A3A8(int param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar1 = fn_8307DBA0(1,param_1 + 0x48);
  uVar2 = fn_82FA5100(lbl_831BC770,uVar1,0x100);
  *(int *)(param_1 + 0x70) = (int)uVar2;
  if (((uVar2 & 0xffffffff) != 0) &&
     (iVar3 = fn_8307E7A8(1,param_1 + 0x48,2,param_1 + 0x28,uVar2,uVar1), iVar3 == 0)) {
    return 1;
  }
  return 2;
}

