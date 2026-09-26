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
extern unsigned int *auStack_30;
extern int fn_824A1758();
extern int fn_824A1B50();
extern int fn_8265CA20();
extern unsigned int *lbl_83292C84;
extern unsigned int uRam83292c88;


int * fn_824A1628(int *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_30 [48];
  
  if ((param_2 == (int *)*lbl_83292C84) && (param_3 == lbl_83292C84)) {
    cVar1 = *(char *)(lbl_83292C84[1] + 0x19);
    piVar4 = (int *)lbl_83292C84[1];
    while (cVar1 == '\0') {
      fn_824A1B50(0xffffffff83292c80,piVar4[2]);
      piVar2 = (int *)*piVar4;
      fn_8265CA20(piVar4);
      piVar4 = piVar2;
      cVar1 = *(char *)((int)piVar2 + 0x19);
    }
    lbl_83292C84[1] = (int)lbl_83292C84;
    *lbl_83292C84 = (int)lbl_83292C84;
    lbl_83292C84[2] = (int)lbl_83292C84;
    uRam83292c88 = 0;
    *param_1 = *lbl_83292C84;
  }
  else {
    while (param_2 != param_3) {
      piVar4 = param_2;
      if (*(char *)((int)param_2 + 0x19) == '\0') {
        piVar4 = (int *)param_2[2];
        if (*(char *)((int)piVar4 + 0x19) == '\0') {
          piVar2 = (int *)*piVar4;
          while (piVar3 = piVar2, *(char *)((int)piVar3 + 0x19) == '\0') {
            piVar4 = piVar3;
            piVar2 = (int *)*piVar3;
          }
        }
        else {
          piVar2 = (int *)param_2[1];
          piVar3 = param_2;
          while ((piVar4 = piVar2, *(char *)((int)piVar4 + 0x19) == '\0' &&
                 (piVar3 == (int *)piVar4[2]))) {
            piVar3 = piVar4;
            piVar2 = (int *)piVar4[1];
          }
        }
      }
      fn_824A1758(auStack_30,param_2);
      param_2 = piVar4;
    }
    *param_1 = (int)param_2;
  }
  return param_1;
}

