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
extern int fn_82F655D8();
extern int fn_82FE41A0();
extern unsigned int lbl_82002C40;
extern float lbl_82006848;
extern float lbl_82021544;
extern unsigned int lbl_82175110;
extern unsigned int lbl_82175118;


undefined8 fn_82FE03B0(int param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  
  if (*(char *)(param_1 + 0xd0) != '\0') {
    dVar5 = (double)fn_82F655D8(lbl_82002C40,
                                      (double)(*(float *)(param_1 + 0x13c) * lbl_82021544));
    iVar1 = *(int *)(param_1 + 0x134) * 0x14;
    fVar2 = **(float **)(&lbl_82175110 + iVar1) * (float)dVar5;
    fVar3 = **(float **)(&lbl_82175118 + iVar1) * (float)dVar5;
    if (fVar2 - fVar3 < 0.0) {
      fVar3 = fVar2;
    }
    if (((longlong)(fVar3 * (float)*(uint *)(param_1 + 200) * lbl_82006848) & 0xffffffffU) != 0) {
      uVar4 = fn_82FE41A0(param_1 + 0x8c,param_2);
      return uVar4;
    }
  }
  return 1;
}

