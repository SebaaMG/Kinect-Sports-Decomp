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
extern int fn_82809CB0();
extern int fn_82810BE8();
extern int fn_82863A70();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_82863BC0(int param_1,float *param_2)

{
  ushort uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_40 [64];
  
  lVar2 = 2;
  *param_2 = lbl_821AAD20;
  uVar1 = *(ushort *)(param_1 + 8);
  if (2 < uVar1) {
    dVar4 = (double)lbl_82002C5C;
    do {
      fn_82863A70(*(undefined4 *)(param_1 + 4),uVar1,0,lVar2 + -1,lVar2,auStack_40);
      fn_82810BE8(auStack_40);
      dVar3 = (double)fn_82809CB0();
      lVar2 = lVar2 + 1;
      *param_2 = (float)(dVar3 * dVar4 + (double)*param_2);
      uVar1 = *(ushort *)(param_1 + 8);
    } while ((int)lVar2 < (int)(uint)uVar1);
  }
  return;
}

