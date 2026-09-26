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
extern unsigned int *auStack_c;
extern int fn_82E9B0D0();
extern unsigned int lbl_831AFCA0;
extern unsigned int uStack_10;


longlong fn_82E9B140(int param_1,longlong param_2,longlong param_3,int param_4,ulonglong param_5)

{
  ulonglong uVar1;
  int iVar2;
  uint uStack_10;
  uint auStack_c [3];
  
  if ((((int)param_2 == 0) && ((int)param_3 == 0)) && (param_4 == 0)) {
    return param_2;
  }
  if ((int)param_5 == 0) {
    iVar2 = 0x9e;
  }
  else {
    param_2 = (longlong)((int)param_2 >> 1);
    iVar2 = 0x5e;
    param_3 = (longlong)((int)param_3 >> 1);
  }
  if ((int)param_2 <= iVar2) {
    if (((-iVar2 <= (int)param_2) && ((int)param_3 <= iVar2)) && (-iVar2 <= (int)param_3)) {
      fn_82E9B0D0(param_2,auStack_c);
      fn_82E9B0D0(param_3,&uStack_10);
      uVar1 = (((ulonglong)uStack_10 + ((ulonglong)uStack_10 & 0x7fffffff) * 2 & 0x7fffffff) * 2 +
              (ulonglong)auStack_c[0]) - 1;
      goto LAB_82e9b1f4;
    }
  }
  uVar1 = 0x22;
LAB_82e9b1f4:
  if (param_4 != 0) {
    uVar1 = uVar1 + 0x25;
  }
  iVar2 = (int)uVar1;
  if ((iVar2 != 0x22) && (iVar2 != 0x47)) {
    return (ulonglong)*(uint *)(*(int *)(param_1 + 0x5154) + (int)((uVar1 & 0xffffffff) << 3) + 4) +
           (ulonglong)(byte)(&lbl_831AFCA0)[(int)param_5 * 0x49 + iVar2];
  }
  return (ulonglong)*(uint *)(*(int *)(param_1 + 0x5154) + (int)((uVar1 & 0xffffffff) << 3) + 4) +
         (ulonglong)*(uint *)(param_1 + 0xa28) + (ulonglong)*(uint *)(param_1 + 0xa24) +
         (param_5 & 0x7fffffff) * -2;
}

