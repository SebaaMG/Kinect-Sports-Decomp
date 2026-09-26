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
extern float fRam8315c878;
extern float fRam8315c87c;
extern float fRam8315c888;
extern float fRam8315c88c;
extern float fRam8315c898;
extern float fRam8315c89c;
extern float fRam8315c8a8;
extern float fRam8315c8ac;
extern float fRam8315c8b8;
extern float fRam8315c8bc;
extern unsigned int lbl_83218BA0;
extern unsigned int lbl_83218BA4;
extern unsigned int lbl_83218BA8;
extern unsigned int lbl_83218BAC;
extern unsigned int lbl_83218BB0;


undefined8 fn_829EFC50(float *param_1)

{
  float fVar1;
  
  if (param_1 == (float *)0x0) {
    return 0xffffffff80070057;
  }
  fVar1 = *param_1;
  if ((fRam8315c878 <= fVar1) && (fVar1 <= fRam8315c87c)) {
    lbl_83218BA0 = fVar1;
  }
  fVar1 = param_1[1];
  if ((fRam8315c888 <= fVar1) && (fVar1 <= fRam8315c88c)) {
    lbl_83218BA4 = fVar1;
  }
  fVar1 = param_1[2];
  if ((fRam8315c898 <= fVar1) && (fVar1 <= fRam8315c89c)) {
    lbl_83218BA8 = fVar1;
  }
  fVar1 = param_1[3];
  if ((fRam8315c8a8 <= fVar1) && (fVar1 <= fRam8315c8ac)) {
    lbl_83218BAC = fVar1;
  }
  fVar1 = param_1[4];
  if ((fRam8315c8b8 <= fVar1) && (fVar1 <= fRam8315c8bc)) {
    lbl_83218BB0 = fVar1;
  }
  return 0;
}

