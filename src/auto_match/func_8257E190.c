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
extern int fn_825D4FE8();
extern unsigned int lbl_821C5560;
extern unsigned int lbl_821CC160;


void fn_8257E190(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  float fVar1;
  undefined4 *puVar2;
  double dVar3;
  double extraout_f1;
  
  puVar2 = (undefined4 *)fn_825D4FE8(param_3,param_4,0x1f);
  puVar2[0x16] = (float)extraout_f1;
  puVar2[0x17] = (float)param_2;
  *(undefined1 *)((int)puVar2 + 0x65) = param_7;
  *(undefined1 *)(puVar2 + 0x19) = 0;
  fVar1 = lbl_821CC160;
  dVar3 = (double)lbl_821CC160;
  *puVar2 = &lbl_821C5560;
  puVar2[0x14] = fVar1;
  puVar2[0x15] = fVar1;
  *(undefined1 *)((int)puVar2 + 0x67) = 0;
  puVar2[0x18] = fVar1;
  *(bool *)((int)puVar2 + 0x66) = extraout_f1 < dVar3;
  puVar2[0x10] = puVar2[0x10] | 3;
  return;
}

