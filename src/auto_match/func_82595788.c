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
extern int fn_82595448();
extern int fn_825954B8();
extern int fn_8265CA20();
extern int fn_82F622A8();
extern unsigned int *lbl_83297008;
extern unsigned int uRam8329700c;


undefined4 * fn_82595788(undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if (0x1ffffffd < uRam8329700c) {
    fn_8265CA20(param_4);
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff82197e58);
  }
  uRam8329700c = uRam8329700c + 1;
  param_4[1] = (int)param_3;
  if (param_3 == lbl_83297008) {
    lbl_83297008[1] = (int)param_4;
    *lbl_83297008 = (int)param_4;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = (int)param_4;
      if (param_3 == (int *)*lbl_83297008) {
        *lbl_83297008 = (int)param_4;
      }
      goto LAB_82595838;
    }
    param_3[2] = (int)param_4;
    if (param_3 != (int *)lbl_83297008[2]) goto LAB_82595838;
  }
  lbl_83297008[2] = (int)param_4;
LAB_82595838:
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar2 = lbl_83297008;
  piVar5 = param_4;
  do {
    lbl_83297008 = piVar2;
    if (cVar1 != '\0') {
      *param_1 = param_4;
      *(undefined1 *)(piVar2[1] + 0x14) = 1;
      return param_1;
    }
    piVar2 = (int *)piVar5[1];
    piVar3 = (int *)piVar2[1];
    if (piVar2 == (int *)*piVar3) {
      iVar4 = piVar3[2];
      if (*(char *)(iVar4 + 0x14) == '\0') {
LAB_825958c0:
        *(undefined1 *)(piVar5[1] + 0x14) = 1;
        *(undefined1 *)(iVar4 + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x14) = 0;
        piVar5 = *(int **)(piVar5[1] + 4);
      }
      else {
        if (piVar5 == (int *)piVar2[2]) {
          fn_82595448();
          piVar5 = piVar2;
        }
        *(undefined1 *)(piVar5[1] + 0x14) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x14) = 0;
        fn_825954B8(*(undefined4 *)(piVar5[1] + 4));
      }
    }
    else {
      iVar4 = *piVar3;
      if (*(char *)(iVar4 + 0x14) == '\0') goto LAB_825958c0;
      if (piVar5 == (int *)*piVar2) {
        fn_825954B8();
        piVar5 = piVar2;
      }
      *(undefined1 *)(piVar5[1] + 0x14) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0x14) = 0;
      fn_82595448(*(undefined4 *)(piVar5[1] + 4));
    }
    cVar1 = *(char *)(piVar5[1] + 0x14);
    piVar2 = lbl_83297008;
  } while( true );
}

