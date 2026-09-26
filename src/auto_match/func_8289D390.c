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
extern int fn_828985D8();
extern int fn_8289A0E0();
extern int fn_8289AB78();
extern int fn_8289CB70();
extern int fn_828A13B8();


void fn_8289D390(int param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  char cVar5;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x2c4);
  do {
    do {
      do {
        iVar3 = iVar1;
        if (iVar3 == 0) {
          return;
        }
        iVar1 = *(int *)(iVar3 + 0x30);
      } while (*(char *)(iVar3 + 0x2c) != '\0');
      fn_8289CB70(iVar3,param_2,0,0);
      bVar2 = false;
      cVar5 = fn_828985D8(iVar3);
    } while (cVar5 != '\0');
    if ((*(int **)(iVar3 + 0x20) == (int *)0x0) ||
       (iVar4 = (**(code **)(**(int **)(iVar3 + 0x20) + 4))(), iVar4 == 0)) {
      if ((*(int **)(iVar3 + 0x20) != (int *)0x0) &&
         (iVar4 = (**(code **)(**(int **)(iVar3 + 0x20) + 0x14))(), iVar4 != 0)) {
        cVar5 = fn_8289AB78(iVar3);
        goto LAB_8289d484;
      }
      if ((*(int **)(iVar3 + 0x20) != (int *)0x0) &&
         (iVar4 = (**(code **)(**(int **)(iVar3 + 0x20) + 0xc))(), iVar4 != 0)) {
        cVar5 = fn_8289A0E0(iVar3);
        goto LAB_8289d484;
      }
LAB_8289d490:
      bVar2 = true;
    }
    else {
      cVar5 = fn_8289AB78(iVar3);
LAB_8289d484:
      if (cVar5 != '\0') goto LAB_8289d490;
    }
    if (bVar2) {
      fn_828A13B8(param_1,iVar3);
    }
  } while( true );
}

