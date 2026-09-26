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


undefined8
fn_827585F0(double param_1,double param_2,int param_3,undefined8 param_4,int param_5,
             ushort param_6,uint param_7,uint param_8,uint param_9)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_3 + 8);
  if (((*(int *)(iVar2 + 0x60) != 0) && (*(int *)(param_3 + 0x14) != 0)) &&
     (iVar2 = *(int *)(iVar2 + 0x60) * 0x18 + *(int *)(iVar2 + 0x5c), *(int *)(iVar2 + -0xc) == 0))
  {
    if (((((*(int *)(iVar2 + -0x10) != param_5) ||
          ((ulonglong)*(ushort *)(iVar2 + -0x14) != ((longlong)param_1 & 0xffffffffU))) ||
         ((uVar1 = *(ushort *)(iVar2 + -8), (uVar1 & 1) != (param_6 & 0xff) ||
          (((uVar1 & 6) != param_7 || ((uVar1 & 0xc0) != param_8)))))) ||
        ((uVar1 & 0x30) != param_9)) || (uVar3 = 1, (double)*(float *)(iVar2 + -4) != param_2)) {
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0;
}

