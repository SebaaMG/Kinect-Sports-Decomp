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
extern int fn_8225F970();
extern int fn_824B8548();
extern int fn_8258C000();
extern int fn_82BE3F38();
extern unsigned int lbl_8327FC08;


void fn_824E42A0(void)

{
  int iVar1;
  
  fn_8225F970();
  iVar1 = fn_824B8548();
  RtlEnterCriticalSection();
  *(undefined4 *)(iVar1 + 0x34) = 1;
  RtlLeaveCriticalSection(iVar1);
  if ((((lbl_8327FC08 != 0) && (iVar1 = fn_8258C000(), *(int *)(iVar1 + 0x1fc) != 0)) &&
      (*(int *)(iVar1 + 500) != 0)) && (*(int *)(iVar1 + 0x1a0) != 0)) {
    fn_82BE3F38();
  }
  return;
}

