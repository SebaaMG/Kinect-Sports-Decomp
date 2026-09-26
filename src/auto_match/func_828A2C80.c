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
extern int fn_828B55B0();
extern int fn_828B5738();


undefined8 fn_828A2C80(int param_1,undefined8 param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)**(int **)(param_1 + 0x2f4);
  if (piVar2 != *(int **)(param_1 + 0x2f4)) {
    do {
      cVar1 = fn_828B5738(param_2,piVar2 + 3);
      if (cVar1 != '\0') {
        fn_828B55B0(param_2);
        return 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0x2f4));
  }
  fn_828B55B0(param_2);
  return 0;
}

