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
extern int fn_8262FEC8();
extern int fn_8263A1B8();
extern int fn_8263A508();
extern int fn_82645688();
extern int fn_82657168();


void fn_82653408(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = KeGetCurrentProcessType();
  if (iVar1 != 2) {
    fn_82657168(param_1);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    fn_8263A508(param_1,0);
    uVar2 = 0;
    do {
      fn_8263A1B8(param_1,uVar2,0);
      uVar2 = uVar2 + 1;
    } while ((uVar2 & 0xffffffff) < 4);
    fn_82645688(param_1);
  }
  if (*(int *)(param_1 + 0x3ac0) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0x3ac0) = 0;
  }
  if (*(int *)(param_1 + 0x3ac4) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0x3ac4) = 0;
  }
  if (*(int *)(param_1 + 0x3abc) != 0) {
    fn_8262FEC8();
    *(undefined4 *)(param_1 + 0x3abc) = 0;
  }
  return;
}

