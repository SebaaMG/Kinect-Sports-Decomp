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
extern int fn_82F68918();
extern int fn_82F6B2A8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200D898;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_1a;


void fn_83004190(double param_1,undefined2 *param_2)

{
  float fVar1;
  double dVar2;
  undefined2 uStack_1a;
  
  fVar1 = (float)(param_1 * (double)lbl_8200D898);
  if (lbl_821AAD20 <= fVar1) {
    dVar2 = (double)fn_82F68918((double)(fVar1 + lbl_82002C5C));
  }
  else {
    dVar2 = (double)fn_82F6B2A8((double)(fVar1 - lbl_82002C5C));
  }
  uStack_1a = (undefined2)(int)dVar2;
  *param_2 = uStack_1a;
  return;
}

