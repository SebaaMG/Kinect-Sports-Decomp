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
#define NAN(x) ((x) != (x))
#define _uStack00000028 ((*(U64*)&uStack00000028))
extern unsigned int fStack0000002c;
extern unsigned int fStack_24;
extern int fn_8249D310();
extern unsigned int iStack_20;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D76EC;
extern unsigned int uStack00000028;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int fn_8249D1C0(int param_1,undefined4 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  undefined4 in_stack_00000020;
  undefined4 uStack00000028;
  float fStack0000002c;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  int iStack_20;
  
  fStack_24 = lbl_831D76EC;
  fStack0000002c = (float)param_3;
  iVar2 = *(int *)(param_1 + 0x50);
  fVar3 = fStack0000002c - lbl_831D76EC;
  bVar1 = NAN(lbl_821CC160);
  bVar4 = fVar3 < lbl_821CC160;
  *(int *)(param_1 + 0x50) = iVar2 + 1;
  if (*(float *)(&lbl_821954D8 + ((uint)(byte)(bVar4 << 2) | (uint)(NAN(fVar3) || bVar1) << 2)) <
      0.0) {
    fStack_24 = fStack0000002c;
  }
  uStack00000028 = (undefined4)((ulonglong)param_3 >> 0x20);
  _uStack00000028 = CONCAT44(uStack00000028,fStack_24);
  uStack_28 = uStack00000028;
  uStack_30 = in_stack_00000020;
  uStack_2c = param_2;
  iStack_20 = iVar2;
  fn_8249D310(param_1 + 0x40,&uStack_30);
  return iVar2;
}

