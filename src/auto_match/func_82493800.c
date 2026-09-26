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
extern int fn_82490F58();


double fn_82493800(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  double extraout_f1;
  double dVar3;
  double dVar4;
  
  uVar2 = (*(int *)(*(int *)(param_1 + 0x40) + 0x2b44) - *(int *)(param_1 + 0x3c)) - 1;
  iVar1 = fn_82490F58(param_2,*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x38),
                       *(undefined4 *)(param_1 + 0x38),param_2);
  dVar4 = extraout_f1;
  dVar3 = (double)fn_82490F58(iVar1,*(undefined4 *)(iVar1 + 0x14));
  return (double)(float)(dVar4 * (double)(longlong)(int)(0xffffffffU - ((int)uVar2 >> 0x1f) & uVar2)
                        + dVar3);
}

