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
extern int fn_8277E590();
extern int fn_8277E600();
extern int fn_8277E770();
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;


void fn_8277EBC8(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int aiStack_60 [2];
  undefined8 uStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  if (1 < (uint)param_2[1]) {
    uStack_50 = *(undefined4 *)(param_1 + 0x30);
    piVar2 = (int *)(param_1 + 0x30);
    uVar1 = 0;
    if (param_2[1] != 0) {
      do {
        aiStack_60[0] = *piVar2;
        uStack_58 = *(undefined8 *)
                     (*(int *)((uVar1 + param_2[2] >> 6 & 0x3fffffc) + *(int *)(*param_2 + 0x14)) +
                     ((uVar1 + param_2[2]) * 8 & 0x7f8));
        fn_8277E770(param_1 + 0x7c,aiStack_60);
        fn_8277E590(piVar2,&uStack_58);
        if ((((U64)(uStack_58) >> 0) & 0xFFFFFFFF) < *(float *)(param_1 + 0xe0)) {
          *(float *)(param_1 + 0xe0) = (((U64)(uStack_58) >> 0) & 0xFFFFFFFF);
        }
        if ((((U64)(uStack_58) >> 32) & 0xFFFFFFFF) < *(float *)(param_1 + 0xe4)) {
          *(float *)(param_1 + 0xe4) = (((U64)(uStack_58) >> 32) & 0xFFFFFFFF);
        }
        if (*(float *)(param_1 + 0xe8) < (((U64)(uStack_58) >> 0) & 0xFFFFFFFF)) {
          *(float *)(param_1 + 0xe8) = (((U64)(uStack_58) >> 0) & 0xFFFFFFFF);
        }
        if (*(float *)(param_1 + 0xec) < (((U64)(uStack_58) >> 32) & 0xFFFFFFFF)) {
          *(float *)(param_1 + 0xec) = (((U64)(uStack_58) >> 32) & 0xFFFFFFFF);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < (uint)param_2[1]);
    }
    iStack_4c = *piVar2 + -1;
    iStack_48 = param_2[3] + param_3;
    iStack_44 = param_2[4] + param_3;
    fn_8277E600(param_1 + 0x40,&uStack_50);
  }
  return;
}

