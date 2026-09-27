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
extern unsigned int fStack_18;
extern int fn_830A5EA8();
extern unsigned int iStack_20;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_14;
extern unsigned int uStack_1c;


void fn_830A07B0(int param_1,int param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  struct { int first; undefined4 second; } stack_pair_20;

  float fStack_18;
  uint uStack_14;
  
  if (*(char *)(param_1 + 2) != '\0') {
    fStack_18 = *(float *)(param_1 + 8);
    if (fStack_18 != lbl_821AAD20) {
      stack_pair_20.second = *(undefined4 *)(param_2 + 0x4c);
      stack_pair_20.first = (uint)*(byte *)(param_1 + 3) * 0x10 + param_3;
      uStack_14 = (uint)*(byte *)(param_1 + 4);
      fn_830A5EA8(&stack_pair_20.first,param_2,param_4);
      return;
    }
  }
  iVar2 = *param_4;
  uVar1 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(iVar2 + 3) = 3;
  *(undefined1 *)(iVar2 + 4) = uVar1;
  *param_4 = iVar2 + 0x10;
  return;
}

