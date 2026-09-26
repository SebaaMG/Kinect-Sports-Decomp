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
extern int fn_828B25C8();
extern int fn_828B2BF8();
extern int fn_828B2DE0();
extern int fn_828EA628();
extern int fn_828EA638();


void fn_828B2C98(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  
  cVar3 = fn_828EA628();
  if (cVar3 != '\0') {
    fn_828B2BF8();
    fn_828B25C8();
    fn_828EA638();
  }
  piVar1 = (int *)**(int **)(param_1 + 0xc);
  if (piVar1 != *(int **)(param_1 + 0xc)) {
    do {
      piVar2 = (int *)piVar1[2];
      cVar3 = fn_828B2DE0(piVar2);
      if (cVar3 != '\0') {
        (**(code **)(*piVar2 + 0x14))(piVar2);
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0xc));
  }
  return;
}

