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
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_821960A8;
extern unsigned int lbl_821960AC;
extern unsigned int lbl_821960B0;
extern unsigned int lbl_821960B4;
extern unsigned int lbl_821960B8;
extern unsigned int lbl_821960BC;
extern unsigned int lbl_821960C0;
extern unsigned int lbl_821960C4;
extern unsigned int lbl_821960C8;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool fn_8281D7B8(float *param_1)

{
  float fVar1;
  
  fVar1 = lbl_8201DCB8 * lbl_8201DCB8;
  return (param_1[8] - lbl_821960C8) * (param_1[8] - lbl_821960C8) <= fVar1 &&
         ((param_1[5] - lbl_821960BC) * (param_1[5] - lbl_821960BC) <= fVar1 &&
         ((param_1[2] - lbl_821960B0) * (param_1[2] - lbl_821960B0) <= fVar1 &&
         ((param_1[7] - lbl_821960C4) * (param_1[7] - lbl_821960C4) <= fVar1 &&
         ((param_1[4] - lbl_821960B8) * (param_1[4] - lbl_821960B8) <= fVar1 &&
         ((param_1[1] - lbl_821960AC) * (param_1[1] - lbl_821960AC) <= fVar1 &&
         ((param_1[6] - lbl_821960C0) * (param_1[6] - lbl_821960C0) <= fVar1 &&
         ((param_1[3] - lbl_821960B4) * (param_1[3] - lbl_821960B4) <= fVar1 &&
         (*param_1 - lbl_821960A8) * (*param_1 - lbl_821960A8) <= fVar1)))))));
}

