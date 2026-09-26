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
extern int fn_825F88A8();


longlong fn_825F8418(double param_1,int param_2,undefined4 *param_3,undefined8 param_4,
                      undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  
  lVar2 = 0;
  pcVar3 = (char *)(param_2 + 0x28);
  do {
    if (*pcVar3 == '\0') {
      iVar1 = (int)lVar2 * 0x2c + param_2;
      *(float *)(iVar1 + 0x10) = (float)param_1;
      *(float *)(iVar1 + 0x18) = (float)param_1;
      *(float *)(iVar1 + 0x1c) = (float)param_1;
      *(undefined4 *)(iVar1 + 4) = *param_3;
      *(undefined1 *)(iVar1 + 0x28) = 1;
      goto LAB_825f8458;
    }
    lVar2 = lVar2 + 1;
    pcVar3 = pcVar3 + 0x2c;
  } while ((int)lVar2 < 0xc);
  lVar2 = -1;
LAB_825f8458:
  *(int *)((*(int *)(param_2 + 0x27c) + 0x93) * 4 + param_2) = (int)lVar2;
  *(int *)(param_2 + 0x27c) = *(int *)(param_2 + 0x27c) + 1;
  fn_825F88A8(param_2,param_5,1);
  iVar1 = (int)lVar2 * 0x2c + param_2;
  *(int *)(*(int *)(param_2 + 0x248) * 4 + param_2 + 0x230) = (int)lVar2;
  *(int *)(param_2 + 0x248) = *(int *)(param_2 + 0x248) + 1;
  *(char *)(iVar1 + 0x2a) = (char)param_5;
  *(undefined1 *)(iVar1 + 0x2b) = 1;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  return lVar2;
}

