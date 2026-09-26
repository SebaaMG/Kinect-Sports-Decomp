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
extern int fn_822315A0();
extern int fn_824CCD80();
extern int fn_82522588();
extern int fn_825603C8();
extern int fn_825604A0();
extern unsigned int iStack_2c;


void fn_82407D78(int param_1,int *param_2)

{
  int iVar1;
  int *piVar3;
  undefined8 uVar2;
  undefined1 auStack_30 [4];
  int iStack_2c;
  
  iVar1 = *param_2;
  if (*(int *)(iVar1 + 0x10) ==
      *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x38) + 0x24)) {
    piVar3 = (int *)fn_82522588(auStack_30);
    *(undefined4 *)(*piVar3 + 0x29c) = 1;
    if (iStack_2c != 0) {
      fn_822315A0();
    }
    iVar1 = *param_2;
    if (*(int *)(iVar1 + 0x22c) != 1) {
      uVar2 = fn_824CCD80(*(undefined4 *)(iVar1 + 0x10));
      fn_825603C8(uVar2,iVar1 + 0x20,1);
      *(undefined4 *)(iVar1 + 0x22c) = 1;
    }
  }
  else if (*(int *)(iVar1 + 0x22c) != 0) {
    fn_825604A0(iVar1 + 0x20);
    *(undefined4 *)(iVar1 + 0x22c) = 0;
  }
  return;
}

