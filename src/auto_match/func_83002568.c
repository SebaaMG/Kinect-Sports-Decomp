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
extern int fn_83001FE8();
extern int fn_83007888();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_2a;


void fn_83002568(double param_1,double param_2,double param_3,int *param_4)

{
  char cVar1;
  undefined2 uStack_2a;
  
  cVar1 = fn_83007888(param_4,2);
  if (cVar1 != '\0') {
    (**(code **)(*param_4 + 0x3c))
              ((double)(float)(param_1 - (double)(longlong)*(short *)(param_4 + 0xc)),param_4,2,
               *(code **)(*param_4 + 0x3c),0,0);
  }
  uStack_2a = (undefined2)(int)param_1;
  *(undefined2 *)(param_4 + 0xc) = uStack_2a;
  if ((((param_2 != (double)lbl_821AAD20) || (param_3 != (double)lbl_821AAD20)) ||
      (param_4[0x1a] != 0)) && (cVar1 = fn_83001FE8(param_4), cVar1 != '\0')) {
    *(float *)(param_4[0x1a] + 0x14) = (float)param_2;
    *(float *)(param_4[0x1a] + 0x18) = (float)param_3;
  }
  return;
}

