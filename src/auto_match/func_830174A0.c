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
extern int fn_830080D8();
extern int fn_83016C90();
extern unsigned int iStack_50;
extern unsigned int uStack_4c;


void fn_830174A0(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int iStack_50;
  uint uStack_4c;
  int *piStack_48;
  
  RtlEnterCriticalSection(param_1 + 0x720);
  fn_83016C90(&iStack_50,param_1 + 4);
  uVar3 = uStack_4c;
  piVar4 = piStack_48;
joined_r0x830174d8:
  if (piVar4 == (int *)0x0) {
    RtlLeaveCriticalSection(param_1 + 0x720);
    return;
  }
  do {
    do {
      if (((piVar4[1] == param_2) && (iVar1 = piVar4[2], iVar1 != 0)) &&
         (piVar2 = (int *)fn_830080D8(param_3), piVar2 != (int *)0x0)) {
        *piVar2 = iVar1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)0x0);
    do {
      uVar3 = uVar3 + 1;
      if (0xc0 < uVar3) goto joined_r0x830174d8;
      piVar4 = *(int **)(uVar3 * 4 + iStack_50);
    } while (piVar4 == (int *)0x0);
  } while( true );
}

