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
extern unsigned int lbl_832645D8;
extern unsigned int lbl_832645DC;


char fn_83013880(undefined8 param_1,int param_2,int *param_3)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  *param_3 = 0;
  for (piVar3 = lbl_832645D8; (piVar3 != lbl_832645DC && (*piVar3 != param_2)); piVar3 = piVar3 + 3)
  {
  }
  uVar4 = -(uint)(lbl_832645DC != piVar3) & (uint)(piVar3 + 1);
  if (uVar4 != 0) {
    pcVar1 = *(code **)(uVar4 + 4);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)();
      *param_3 = iVar2;
      return (iVar2 == 0) + '\x01';
    }
    return '\x01';
  }
  return '\x02';
}

