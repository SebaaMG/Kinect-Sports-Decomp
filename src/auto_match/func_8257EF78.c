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
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;


void fn_8257EF78(int param_1,int param_2)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  if (param_1 != 0) {
    dVar3 = (double)lbl_821CC160;
    do {
      iVar1 = *(int *)(param_1 + 4);
      if (*(int *)(param_1 + -8) == 0) {
        dVar2 = dVar3;
        if ((double)*(float *)(param_2 + 0x838) <= dVar3) {
          dVar2 = (double)(*(float *)(param_2 + 0x820) * lbl_8327F894);
        }
        *(float *)(param_1 + 0xafc) = (float)((double)*(float *)(param_1 + 0xb00) * dVar2);
        (**(code **)(*(int *)(param_1 + -0x40) + 0x14))((int *)(param_1 + -0x40),param_2);
      }
      if (*(int *)(param_1 + 8) != 0) {
        fn_8257EF78(*(int *)(param_1 + 8),param_2);
      }
      param_1 = iVar1;
    } while (iVar1 != 0);
  }
  return;
}

