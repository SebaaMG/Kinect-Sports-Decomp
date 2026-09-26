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
extern int fn_8225B9B0();
extern int fn_8225BBF0();
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_8265CA20();
extern unsigned int *lbl_83283E30;
extern unsigned int lbl_83283E34;


void fn_8225B430(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar5 = lbl_83283E30;
  piVar6 = (int *)*lbl_83283E30;
  do {
    while( true ) {
      if (piVar6 == piVar5) {
        return;
      }
      piVar1 = (int *)piVar6[2];
      if (*piVar1 == 1) break;
      piVar6 = (int *)*piVar6;
    }
    sync(1);
    piVar2 = (int *)*piVar6;
    if (piVar6 != piVar5) {
      *(int **)piVar6[1] = piVar2;
      *(int *)(*piVar6 + 4) = piVar6[1];
      fn_8265CA20(piVar6);
      lbl_83283E34 = lbl_83283E34 + -1;
    }
    cVar3 = '\0';
    if (piVar1[2] != 0) {
      cVar3 = fn_8225B9B0(piVar1[1],piVar1[2],piVar1[3]);
    }
    if (cVar3 == '\0') {
      if (piVar1[4] != 0) {
        iVar4 = piVar1[7];
        goto LAB_8225b4f4;
      }
      fn_8225BBF0(piVar1[1],1,piVar1[5],piVar1[6]);
    }
    else {
      iVar4 = 0;
LAB_8225b4f4:
      (*(code *)piVar1[5])(piVar1[1],piVar1[6],iVar4);
    }
    if (piVar1[2] != 0) {
      fn_8251FA58();
    }
    fn_82522ED8(piVar1);
    piVar5 = lbl_83283E30;
    piVar6 = piVar2;
  } while( true );
}

