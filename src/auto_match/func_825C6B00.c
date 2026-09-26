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
extern int fn_8261A518();


void fn_825C6B00(double param_1,int param_2)

{
  float fVar1;
  undefined4 *puVar2;
  byte bVar3;
  double dVar4;
  
  fVar1 = *(float *)(param_2 + 0xc);
  puVar2 = *(undefined4 **)(param_2 + 8);
  if (param_1 != (double)fVar1) {
    *(float *)(param_2 + 0xc) = (float)param_1;
    dVar4 = (double)(float)(param_1 - (double)fVar1);
    *(undefined1 *)(param_2 + 0x18) = 0;
    for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[1]) {
      bVar3 = fn_8261A518(dVar4,*puVar2);
      *(byte *)(param_2 + 0x18) = bVar3 | *(byte *)(param_2 + 0x18);
    }
  }
  return;
}

