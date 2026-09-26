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
extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


void fn_83005838(double param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  undefined2 *puVar2;
  int iVar3;
  
  iVar3 = param_2[0x11];
  if (iVar3 == 0) {
    puVar2 = (undefined2 *)fn_82FA5060(lbl_831BC768,0xc);
    param_2[0x11] = (int)puVar2;
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
    }
    iVar3 = param_2[0x11];
    if (iVar3 == 0) {
      return;
    }
  }
  fVar1 = *(float *)(iVar3 + 8);
  *(float *)(iVar3 + 8) = (float)param_1;
  (**(code **)(*param_2 + 0x3c))((double)(float)(param_1 - (double)fVar1),param_2,0x1e,param_4,0,0);
  return;
}

