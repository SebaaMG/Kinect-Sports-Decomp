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
extern unsigned int lbl_82006848;
extern unsigned int uStack_c;


undefined8 fn_82FE60D0(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  undefined4 uStack_c;
  
  if (*(short *)(param_1 + 0x14) != 0) {
    fVar1 = *(float *)(*(int *)(param_1 + 0x1c) + 4) + *(float *)(param_1 + 0x10);
    if (fVar1 < lbl_82006848) {
      fVar1 = lbl_82006848;
    }
    uVar2 = *(int *)(param_1 + 8) * param_2;
    uStack_c = (int)(longlong)((float)*(uint *)(param_1 + 4) * fVar1);
    if ((uint)(uStack_c * *(int *)(param_1 + 8) * (int)*(short *)(param_1 + 0x14)) <= uVar2) {
      return 2;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
  }
  return 1;
}

