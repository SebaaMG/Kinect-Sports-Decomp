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
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_8265CA20();


undefined8 fn_82575E90(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if ((int *)*param_2 != (int *)0x0) {
    piVar1 = (int *)*param_2;
    piVar2 = (int *)0x0;
    do {
      piVar3 = piVar1;
      if (*piVar3 == *param_1) {
        if ((code *)piVar3[0x77] != (code *)0x0) {
          (*(code *)piVar3[0x77])(param_1,piVar3[0x78]);
        }
        piVar1 = (int *)piVar3[0x6b];
        if (piVar1 == (int *)0x0) {
          if (piVar3[0x74] != 0) {
            fn_8265CA20();
            piVar3[0x74] = 0;
          }
        }
        else {
          (**(code **)(*piVar1 + 8))(piVar1,param_1);
        }
        if (piVar3[0x6d] != 0) {
          if (*(char *)(piVar3 + 0x6a) == '\0') {
            if (*(char *)((int)piVar3 + 0x1a7) == '\0') {
              fn_8251FA58();
            }
            else {
              fn_82522ED8();
            }
          }
          piVar3[0x6d] = 0;
        }
        if (piVar3 == (int *)param_2[1]) {
          param_2[1] = (int)piVar2;
        }
        if (piVar2 == (int *)0x0) {
          *param_2 = piVar3[0x79];
        }
        else {
          piVar2[0x79] = piVar3[0x79];
        }
        fn_82522ED8(piVar3);
        return 1;
      }
      piVar1 = (int *)piVar3[0x79];
      piVar2 = piVar3;
    } while ((int *)piVar3[0x79] != (int *)0x0);
  }
  return 0;
}

