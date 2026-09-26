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
extern int fn_83004190();
extern int fn_83007888();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;


void fn_83002328(undefined8 param_1,double param_2,double param_3,int *param_4)

{
  short sVar1;
  char cVar2;
  short asStack_40 [4];
  longlong lStack_38;
  
  asStack_40[0] = 0;
  fn_83004190(asStack_40);
  cVar2 = fn_83007888(param_4,1);
  sVar1 = asStack_40[0];
  if (cVar2 != '\0') {
    lStack_38 = (longlong)*(short *)(param_4 + 0xb);
    (**(code **)(*param_4 + 0x3c))
              ((double)((float)(longlong)asStack_40[0] * lbl_82186E6C -
                       (float)lStack_38 * lbl_82186E6C),param_4,0,lStack_38,0,0);
  }
  *(short *)(param_4 + 0xb) = sVar1;
  if ((((param_2 != (double)lbl_821AAD20) || (param_3 != (double)lbl_821AAD20)) ||
      (param_4[0x1a] != 0)) && (cVar2 = fn_83001FE8(param_4), cVar2 != '\0')) {
    *(float *)(param_4[0x1a] + 4) = (float)param_2;
    *(float *)(param_4[0x1a] + 8) = (float)param_3;
  }
  return;
}

