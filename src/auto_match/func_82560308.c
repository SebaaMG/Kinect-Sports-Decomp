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
extern unsigned int *auStack_60;
extern int fn_825306A0();
extern int fn_82531D10();
extern float lbl_82193CC0;
extern unsigned int lbl_8219567C;
extern unsigned int lbl_83296AE0;
extern unsigned int lbl_83296BB4;
extern unsigned int uStack_68;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 fn_82560308(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uStack_68;
  undefined1 auStack_60 [56];
  
  puVar5 = &uStack_68;
  puVar4 = (undefined8 *)0x83296888;
  lVar6 = 8;
  do {
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  puVar3 = (undefined4 *)(param_3 + 0x68);
  pfVar2 = (float *)(param_3 + 100);
  fn_82531D10(param_1,auStack_60);
  if (lbl_8219567C < *(float *)(param_3 + 0x60)) {
    *pfVar2 = *(float *)(param_3 + 0x60) * lbl_82193CC0 + *pfVar2;
  }
  uVar1 = *puVar3;
  *(float *)(lbl_83296AE0 + 100) = *pfVar2;
  *(undefined4 *)(lbl_83296AE0 + 0x68) = uVar1;
  lbl_83296BB4 = 1;
  fn_825306A0(0);
  return 1;
}

