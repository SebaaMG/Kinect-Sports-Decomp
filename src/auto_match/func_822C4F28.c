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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_822C6B30();
extern int fn_822C6D68();
extern int fn_822CA5B0();
extern int fn_8255A070();
extern int fn_8288B760();
extern unsigned int lbl_821CC160;


void fn_822C4F28(int param_1)

{
  float fVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  if (*(int *)(param_1 + 0x168) == 0) {
    uVar2 = *(uint *)(param_1 + 0x16c);
  }
  else {
    uVar2 = fn_8288B760();
    uVar2 = uVar2 & 0xff;
  }
  if ((uVar2 == 0) && (*(int *)(param_1 + 0x168) != 0)) {
    fn_822CA5B0();
  }
  else {
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x114) + 0x50;
    fn_822C6D68(lVar3,param_1 + 0x80,param_1 + 0xc0);
    fVar1 = lbl_821CC160;
    dVar5 = (double)lbl_821CC160;
    dVar4 = (double)fn_8255A070();
    fn_822C6B30(lVar3,param_1 + 0x80,param_1 + 0xc0,CONCAT44(fVar1,(float)dVar4),
                      (ulonglong)(uint)(float)dVar5 << 0x20);
  }
  return;
}

