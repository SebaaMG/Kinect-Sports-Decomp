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
extern unsigned int lbl_821960D0;
extern unsigned int lbl_821960D4;
extern unsigned int lbl_821960D8;
extern unsigned int lbl_821960DC;
extern unsigned int lbl_821960E0;
extern unsigned int lbl_821960E4;
extern unsigned int lbl_821960E8;
extern unsigned int lbl_821960EC;
extern unsigned int lbl_821960F0;
extern unsigned int lbl_821960F4;
extern unsigned int lbl_821960F8;
extern unsigned int lbl_821960FC;
extern unsigned int lbl_82196100;
extern unsigned int lbl_82196104;
extern unsigned int lbl_82196108;
extern unsigned int lbl_8219610C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool fn_8280CD00(float *param_1)

{
  float fVar1;
  
  fVar1 = lbl_8201DCB8 * lbl_8201DCB8;
  return (param_1[0xf] - lbl_8219610C) * (param_1[0xf] - lbl_8219610C) <= fVar1 &&
         ((param_1[0xb] - lbl_821960FC) * (param_1[0xb] - lbl_821960FC) <= fVar1 &&
         ((param_1[7] - lbl_821960EC) * (param_1[7] - lbl_821960EC) <= fVar1 &&
         ((param_1[3] - lbl_821960DC) * (param_1[3] - lbl_821960DC) <= fVar1 &&
         ((param_1[0xe] - lbl_82196108) * (param_1[0xe] - lbl_82196108) <= fVar1 &&
         ((param_1[10] - lbl_821960F8) * (param_1[10] - lbl_821960F8) <= fVar1 &&
         ((param_1[6] - lbl_821960E8) * (param_1[6] - lbl_821960E8) <= fVar1 &&
         ((param_1[2] - lbl_821960D8) * (param_1[2] - lbl_821960D8) <= fVar1 &&
         ((param_1[0xd] - lbl_82196104) * (param_1[0xd] - lbl_82196104) <= fVar1 &&
         ((param_1[9] - lbl_821960F4) * (param_1[9] - lbl_821960F4) <= fVar1 &&
         ((param_1[5] - lbl_821960E4) * (param_1[5] - lbl_821960E4) <= fVar1 &&
         ((param_1[1] - lbl_821960D4) * (param_1[1] - lbl_821960D4) <= fVar1 &&
         ((param_1[0xc] - lbl_82196100) * (param_1[0xc] - lbl_82196100) <= fVar1 &&
         ((param_1[8] - lbl_821960F0) * (param_1[8] - lbl_821960F0) <= fVar1 &&
         ((param_1[4] - lbl_821960E0) * (param_1[4] - lbl_821960E0) <= fVar1 &&
         (*param_1 - lbl_821960D0) * (*param_1 - lbl_821960D0) <= fVar1))))))))))))));
}

