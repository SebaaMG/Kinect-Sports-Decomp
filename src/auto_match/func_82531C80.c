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
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_825602B8();
extern int fn_82562820();
extern int fn_827EB678();
extern unsigned int lbl_83280B98;


int fn_82531C80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [224];
  
  auStack_f0[0] = 0;
  iVar4 = 0;
  uVar3 = 0;
  puVar2 = &lbl_83280B98;
  do {
    iVar1 = fn_825602B8(uVar3);
    if ((iVar1 != 0) &&
       ((fn_82562820(*puVar2,auStack_e0), iVar4 != 0 ||
        (iVar1 = fn_827EB678(auStack_e0,param_1,param_2,auStack_f0), iVar1 != 0)))) {
      iVar4 = 1;
    }
    uVar3 = uVar3 + 1;
    puVar2 = puVar2 + 1;
  } while ((uVar3 & 0xffffffff) < 2);
  return iVar4;
}

