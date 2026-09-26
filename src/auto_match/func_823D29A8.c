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
extern int fn_8265BF48();
extern unsigned int lbl_831D47C4;
extern unsigned int lbl_831D47C8;


undefined4 fn_823D29A8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  
  iVar1 = fn_8265BF48(param_1,0);
  iVar2 = 0;
  uVar3 = 0;
  piVar4 = &lbl_831D47C4;
  do {
    if (iVar1 == *piVar4) {
      return (&lbl_831D47C8)[iVar2 * 3];
    }
    uVar3 = uVar3 + 0xc;
    iVar2 = iVar2 + 1;
    piVar4 = piVar4 + 3;
  } while ((uVar3 & 0xffffffff) < 0x1e0);
  return 0;
}

