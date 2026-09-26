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
extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8258E3A8();
extern unsigned int lbl_8328705C;
extern unsigned int lbl_83287060;


void fn_8313C3D8(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [40];
  
  uVar2 = (ulonglong)lbl_8328705C;
  uVar1 = fn_82230110(auStack_40,lbl_83287060);
  fn_8258E3A8(auStack_50,uVar2 + 8,uVar1);
  fn_82230300(auStack_40,1,0);
  return;
}

