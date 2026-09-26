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
extern unsigned int fStack0000001c;
extern unsigned int lbl_820143E0;
extern unsigned int stack0x0000001c;


undefined8 fn_82A43858(double param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  bool bVar2;
  float fStack0000001c;
  
  fStack0000001c = (float)param_1;
  (**(code **)(*(int *)(*(int *)(param_2 + 0x34) + 0x2c) + 8))(*(int *)(param_2 + 0x34) + 0x2c);
  if ((fStack0000001c < lbl_820143E0) ||
     ((*(float *)(param_2 + 200) < fStack0000001c &&
      (bVar2 = fStack0000001c < lbl_820143E0, fStack0000001c = *(float *)(param_2 + 200), bVar2))))
  {
    fStack0000001c = lbl_820143E0;
  }
  uVar1 = (**(code **)(**(int **)(param_2 + 0x90) + 8))
                    (*(int **)(param_2 + 0x90),1,param_4,&stack0x0000001c,4);
  (**(code **)(*(int *)(*(int *)(param_2 + 0x34) + 0x2c) + 0x14))(*(int *)(param_2 + 0x34) + 0x2c);
  return uVar1;
}

