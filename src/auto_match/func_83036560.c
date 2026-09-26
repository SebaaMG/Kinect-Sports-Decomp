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
extern int fn_83009C10();
extern int fn_83009C40();
extern unsigned int lbl_821AAD20;


void fn_83036560(double param_1,int param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)fn_83009C40(*(undefined4 *)(param_2 + 4));
  *(float *)(param_2 + 0xc) = (float)param_1;
  dVar2 = (double)fn_83009C40(*(undefined4 *)(param_2 + 4));
  dVar1 = (double)(float)(dVar2 - dVar1);
  if (param_5 != '\0') {
    fn_83009C10(*(undefined4 *)(param_2 + 4));
    *(undefined4 *)(param_2 + 8) = 0;
  }
  if (dVar1 != (double)lbl_821AAD20) {
    (**(code **)(**(int **)(param_2 + 4) + 0x3c))(dVar1,*(int **)(param_2 + 4),0,param_4,0,0);
  }
  return;
}

