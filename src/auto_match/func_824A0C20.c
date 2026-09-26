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
extern unsigned int *auStack_40;
extern int fn_82F4EBE8();
extern int fn_82F52188();


undefined8 fn_824A0C20(undefined8 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_40 [40];
  
  if (*(int *)(param_2 + 0x20) < 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)fn_82F4EBE8();
  }
  if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 4))(piVar1), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F52188(auStack_40,piVar1,1);
  }
  return 0;
}

