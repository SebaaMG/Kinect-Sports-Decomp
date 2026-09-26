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
extern unsigned int lbl_821CC160;


void fn_824D03B8(double param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x3a00);
  if ((((iVar4 != 0) && (*(int *)(iVar4 + 0x204) != 0)) && (param_4 != 0)) &&
     (iVar3 = param_3 * 0x1c10 + param_2, *(int *)(iVar3 + 0x394) == 0)) {
    iVar2 = *(int *)(param_2 + 0x3a08);
    if (*(int *)(iVar2 + 0xb8) != 0) {
      if (*(int *)(iVar2 + 0x90) == 0) {
        uVar1 = *(undefined4 *)(iVar4 + 0x208);
      }
      else {
        uVar1 = *(undefined4 *)(iVar2 + 0x94);
      }
      *(undefined4 *)(iVar3 + 0x3a0) = uVar1;
      *(undefined4 *)(iVar3 + 0x3a8) = 1;
      *(float *)(iVar3 + 0x3ac) =
           *(float *)(iVar3 + 0x348) + *(float *)(*(int *)(param_2 + 0x3a00) + 0x254);
    }
    *(undefined4 *)(iVar3 + 0x344) = lbl_821CC160;
  }
  iVar4 = param_3 * 0x1c10 + param_2;
  *(int *)(iVar4 + 0x394) = param_4;
  *(float *)(iVar4 + 0x398) = (float)param_1;
  if (*(int *)(param_2 + 0x3a00) == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  *(undefined4 *)(iVar4 + 0x39c) = *(undefined4 *)(*(int *)(param_2 + 0x3a00) + 0x138);
  return;
}

