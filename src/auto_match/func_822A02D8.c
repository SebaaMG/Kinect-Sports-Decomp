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
extern unsigned int lbl_82192488;
extern unsigned int lbl_82193A34;


void fn_822A02D8(double param_1,undefined8 param_2,uint *param_3,int *param_4,int *param_5)

{
  float fVar1;
  uint uVar2;
  double dVar3;
  
  fVar1 = lbl_82192488;
  dVar3 = (double)lbl_82193A34;
  *param_4 = (int)param_1 % 0x3c;
  uVar2 = (uint)(param_1 * dVar3);
  *param_3 = uVar2;
  uVar2 = -((int)uVar2 >> 0x1f) - 1U & uVar2;
  *param_5 = (int)((float)(param_1 - (double)(longlong)(int)param_1) * fVar1);
  if (0x62 < (int)uVar2) {
    uVar2 = 99;
  }
  *param_3 = uVar2;
  return;
}

