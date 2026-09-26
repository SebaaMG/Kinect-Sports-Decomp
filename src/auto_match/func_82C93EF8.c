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
extern unsigned int lbl_820FDD78;


void fn_82C93EF8(int param_1,int param_2,short *param_3,short *param_4,int param_5)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  
  if ((((param_2 == 0) || (param_2 == 1)) || (param_2 == 4)) || (param_2 == 5)) {
    lVar3 = 3;
    iVar1 = (int)param_3 - (int)param_4;
    psVar2 = param_4 + 2;
    *param_4 = (short)(*(int *)((uint)*(byte *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                                0x14 + *(int *)(param_1 + 0x19d0) + 0x10) *
                       *(int *)(&lbl_820FDD78 +
                               (*(uint *)((uint)*(byte *)(param_5 + 4) * 0x14 +
                                          *(int *)(param_1 + 0x19d0) + 0x10) & 0x3f) * 4) *
                       (int)*param_3 + 0x20000 >> 0x12);
    do {
      psVar2[-1] = (short)((int)((uint)*(byte *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                                 *(int *)(&lbl_820FDD78 + (*(byte *)(param_5 + 4) & 0x3f) * 4) *
                                 (int)param_3[1] + 0x20000) >> 0x12);
      *psVar2 = (short)((int)((uint)*(byte *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                              *(int *)(&lbl_820FDD78 + (*(byte *)(param_5 + 4) & 0x3f) * 4) *
                              (int)*(short *)((int)psVar2 + iVar1) + 0x20000) >> 0x12);
      psVar2[1] = (short)((int)((uint)*(byte *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                                *(int *)(&lbl_820FDD78 + (*(byte *)(param_5 + 4) & 0x3f) * 4) *
                                (int)param_3[3] + 0x20000) >> 0x12);
      psVar2[2] = (short)((int)((uint)*(byte *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                                *(int *)(&lbl_820FDD78 + (*(byte *)(param_5 + 4) & 0x3f) * 4) *
                                (int)param_3[4] + 0x20000) >> 0x12);
      param_3 = param_3 + 5;
      psVar2[3] = (short)((int)((uint)*(byte *)(param_5 + *(int *)(param_1 + 0x88) * -0x18 + 4) *
                                *(int *)(&lbl_820FDD78 + (*(byte *)(param_5 + 4) & 0x3f) * 4) *
                                (int)*param_3 + 0x20000) >> 0x12);
      psVar2 = psVar2 + 5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    param_4[8] = *param_4;
  }
  else {
    iVar1 = (int)param_3 - (int)param_4;
    lVar3 = 0x10;
    do {
      *param_4 = *(short *)(iVar1 + (int)param_4);
      param_4 = param_4 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

