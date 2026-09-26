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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_4c;
extern int fn_825ACF50();
extern int fn_8288CCB8();
extern int fn_8288DFB8();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern unsigned int iStack_50;


void fn_82890FF0(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  int iStack_50;
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  param_2 = param_2 + 0x14;
  lVar2 = param_1 + 4;
  fn_828B5580(auStack_40,param_2);
  fn_8288CCB8(&iStack_50,lVar2,auStack_40);
  fn_828B55B0(auStack_40);
  fn_825ACF50(auStack_4c,lVar2,iStack_50);
  fn_828B5580(auStack_38,param_2);
  iStack_50 = fn_828B55F8(auStack_38);
  if (iStack_50 != 0x8000) {
    puVar1 = (uint *)fn_8288DFB8(auStack_4c,param_1 + 0x14,&iStack_50);
    lVar2 = (ulonglong)*puVar1 + 0x10;
  }
  fn_828B55B0(auStack_38);
  fn_828B5580(auStack_30,param_2);
  fn_8288CCB8(&iStack_50,lVar2,auStack_30);
  fn_828B55B0(auStack_30);
  fn_825ACF50(auStack_48,lVar2,iStack_50);
  return;
}

