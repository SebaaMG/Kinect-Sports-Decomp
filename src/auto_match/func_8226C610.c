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
extern int fn_8226C410();
extern int fn_82536690();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


void fn_8226C610(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  if (*(char *)(param_2 + 4) != '\0') {
    for (piVar2 = *(int **)(param_1 + 0xc); piVar2 != *(int **)(param_1 + 0x10); piVar2 = piVar2 + 1
        ) {
      if (*(char *)(*piVar2 + 4) != '\0') {
        bVar1 = true;
        goto LAB_8226c660;
      }
    }
    bVar1 = false;
LAB_8226c660:
    if (bVar1) {
      *(undefined1 *)(param_2 + 4) = 0;
    }
    else {
      fn_8226C410(param_1);
    }
  }
  fn_82536690(param_1 + 0xc,&stack0x0000001c);
  return;
}

