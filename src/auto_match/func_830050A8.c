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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_830177C8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;
extern unsigned int uStack_20;


undefined8 * fn_830050A8(undefined8 *param_1,int param_2,undefined8 param_3)

{
  undefined4 uVar1;
  double dVar2;
  undefined8 uStack_20;
  
  if ((*(int *)(param_2 + 0x10) == 0) || ((*(byte *)(param_2 + 0x3d) & 8) != 0)) {
    uStack_20 = ((((U64)(uStack_20)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)((ulonglong)*(undefined8 *)(param_2 + 0x34) >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    if ((*(uint *)(param_2 + 0x40) >> 8 & 1) != 0) {
      dVar2 = (double)fn_830177C8(lbl_832642FC,param_2,8,param_3);
      uStack_20 = ((((U64)(uStack_20)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((float)dVar2)) & ((U64)0xFFFFFFFF)) << 0));
    }
    uVar1 = lbl_821AAD20;
    if ((*(byte *)(param_2 + 0x3d) & 0x10) != 0) {
      uVar1 = *(undefined4 *)(param_2 + 0x38);
    }
    uStack_20 = CONCAT44((((U64)(uStack_20) >> 0) & 0xFFFFFFFF),uVar1);
    *param_1 = uStack_20;
  }
  else {
    ((int (*)())fn_830050A8)();
  }
  return param_1;
}

