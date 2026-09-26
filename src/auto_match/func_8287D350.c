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
extern unsigned int fStack_20;
extern int fn_8287CA18();
extern unsigned int lbl_821AAD20;


double fn_8287D350(int param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  double dVar3;
  float fStack_20;
  undefined4 *apuStack_1c [3];
  
  puVar1 = *(undefined4 **)(param_1 + 0xf4);
  apuStack_1c[0] = (undefined4 *)*puVar1;
  dVar3 = (double)lbl_821AAD20;
  while (apuStack_1c[0] != puVar1) {
    pfVar2 = (float *)(apuStack_1c[0] + 0xe);
    if ((double)*pfVar2 <= dVar3) {
      pfVar2 = &fStack_20;
    }
    fStack_20 = *pfVar2;
    dVar3 = (double)fStack_20;
    fn_8287CA18(apuStack_1c);
  }
  return dVar3;
}

