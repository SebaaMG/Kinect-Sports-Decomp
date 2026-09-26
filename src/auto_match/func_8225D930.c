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
extern int fn_8225C168();
extern int fn_82521A10();
extern int fn_828EA610();
extern unsigned int iStack0000001c;
extern unsigned int lbl_832767C8;
extern unsigned int stack0x0000001c;


void fn_8225D930(longlong param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  fn_8225C168(param_1 + 0x10,&stack0x0000001c);
  iVar2 = iStack0000001c;
  if (*(char *)(iStack0000001c + 0xd8) == '\0') {
    cVar3 = fn_828EA610(iStack0000001c);
    bVar1 = 1;
    if (cVar3 == '\0') goto LAB_8225d978;
  }
  bVar1 = 0;
LAB_8225d978:
  if ((bool)(*(int *)(iVar2 + 0x11c) == 0 & bVar1)) {
    fn_82521A10(lbl_832767C8,iVar2,1);
  }
  return;
}

