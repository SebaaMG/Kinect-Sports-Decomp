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
extern unsigned int *auStack_40;
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_822CDCF8();
extern int fn_8249ABC0();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_831D1C9C;
extern float lbl_831D1CA0;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 fn_8237C768(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  int in_r0;
  int iVar7;
  undefined8 uVar6;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float in_vr1;
  undefined1 auStack_40 [16];
  float fStack_30;
  float fStack_2c;
  
  fn_822CDCF8(param_1,&fStack_30,auStack_40);
  iVar7 = fn_8249ABC0();
  fVar5 = lbl_831D1C9C;
  pfVar3 = (float *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  fVar8 = pfVar3[1];
  fVar9 = pfVar3[2];
  fVar10 = pfVar3[3];
  fVar1 = **(float **)(iVar7 + 0xec);
  fVar2 = (*(float **)(iVar7 + 0xec))[2];
  pfVar4 = (float *)((int)&fStack_30 + in_r0 & 0xfffffff0);
  *pfVar4 = in_register_00010010 - *pfVar3;
  pfVar4[1] = in_register_00010014 - fVar8;
  pfVar4[2] = in_register_00010018 - fVar9;
  pfVar4[3] = in_vr1 - fVar10;
  if ((fVar5 <= fStack_2c) ||
     (uVar6 = 1, (fVar2 - fVar1) * lbl_831D1CA0 * lbl_8218E8E8 <= ABS(fStack_30))) {
    uVar6 = 0;
  }
  return uVar6;
}

