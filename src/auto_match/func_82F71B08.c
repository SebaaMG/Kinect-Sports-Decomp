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
extern int fn_82F71A70();
extern unsigned int lbl_831BB940;


undefined8 fn_82F71B08(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = &lbl_831BB940;
  iVar2 = -0x7cd9cbe8;
  iVar3 = 0;
  do {
    if (piVar4[1] == 1) {
      *piVar4 = iVar2;
      iVar1 = fn_82F71A70(iVar2,4000);
      iVar2 = iVar2 + 0x1c;
      if (iVar1 == 0) {
        (&lbl_831BB940)[iVar3 * 2] = 0;
        return 0;
      }
    }
    piVar4 = piVar4 + 2;
    iVar3 = iVar3 + 1;
  } while ((int)piVar4 < -0x7ce445a0);
  return 1;
}

