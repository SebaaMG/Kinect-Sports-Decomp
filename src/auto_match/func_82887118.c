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
extern int fn_82880BD8();
extern unsigned int lbl_83212A18;
extern unsigned int lbl_83212A20;
extern unsigned int lbl_83212A24;
extern int (*lbl_83212A28)();


undefined8 fn_82887118(undefined8 param_1,int param_2)

{
  code *pcVar1;
  int iVar3;
  int iVar4;
  undefined8 uVar2;
  
  iVar3 = (*lbl_83212A28)();
  if ((((iVar3 < 0) || (lbl_83212A24 <= iVar3)) ||
      ((iVar4 = fn_82880BD8(), param_2 == iVar4 && (*(char *)(lbl_83212A20 + iVar3) == '\0')))
      ) || (pcVar1 = *(code **)(iVar3 * 4 + lbl_83212A18), pcVar1 == (code *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*pcVar1)(0);
  }
  return uVar2;
}

