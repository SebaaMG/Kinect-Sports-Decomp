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
extern int fn_8289DDD0();
extern int fn_8289DF30();


void fn_828E8C60(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != *(int *)(param_1 + 0x14)) {
    do {
      iVar3 = *(int *)(iVar2 + 4);
      if (iVar3 == 0) {
LAB_828e8ccc:
        *(undefined1 *)(param_1 + 4) = 0;
        if (iVar3 == 0) {
          return;
        }
        fn_8289DF30(iVar3);
        return;
      }
      cVar1 = fn_8289DDD0(iVar3);
      if (cVar1 == '\0') {
        iVar3 = 0;
        goto LAB_828e8ccc;
      }
      if (iVar3 == 0) goto LAB_828e8ccc;
      fn_8289DF30(iVar3);
      iVar2 = iVar2 + 8;
    } while (iVar2 != *(int *)(param_1 + 0x14));
  }
  return;
}

