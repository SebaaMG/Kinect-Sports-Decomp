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
extern int fn_82ACA5E0();
extern int fn_82B80200();


longlong fn_82B81270(int param_1,ulonglong param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  cVar2 = fn_82B80200();
  if (cVar2 == '\0') {
    cVar2 = fn_82ACA5E0(param_1);
    if (cVar2 == '\0') {
      return 0;
    }
    if (param_3 != 0xe4) {
      uVar3 = 0;
      if ((param_2 & 0xffffffff) != 0) {
        uVar4 = 0;
        uVar5 = param_2;
        do {
          uVar1 = uVar4 & 0x3f;
          uVar4 = uVar4 + 2;
          uVar3 = (uint)(1 << (param_3 >> uVar1 & 3)) | uVar3;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      return -((ulonglong)
               (4 < (((ulonglong)(*(uint *)(param_1 + 8) >> 0xe) & 7) -
                    (((0x8da691691448U >> (uVar3 & 0x7f)) >> (uVar3 & 0x7f)) >> (uVar3 & 0x7f) & 7))
                    + param_2) - 1);
    }
  }
  return 1;
}

