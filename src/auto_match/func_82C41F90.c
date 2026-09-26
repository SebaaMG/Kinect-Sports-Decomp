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
extern unsigned int *auStack_210;
extern int fn_82C41CA0();
extern int fn_82C41E28();
extern int fn_82F69148();
extern unsigned int lbl_820F9000;
extern unsigned int lbl_820F9040;
extern unsigned int uStack_200;
extern unsigned int uStack_204;
extern unsigned int uStack_208;


/* WARNING: Type propagation algorithm not settling */

void fn_82C41F90(undefined8 param_1,int param_2,longlong param_3,int *param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_210 [2];
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  int aiStack_1f4 [125];
  
  uStack_200 = 0x40000000;
  uStack_208 = 0x40000000;
  aiStack_1f4[2] = 0x8000000;
  auStack_210[0] = 2;
  aiStack_1f4[1] = 0x8000000;
  iVar5 = 0;
  if (0 < (int)param_5) {
    iVar4 = 0;
    do {
      uStack_204 = *(undefined4 *)(&lbl_820F9000 + ((uint)*(byte *)(iVar5 + param_2) + iVar4) * 4);
      fn_82C41E28(param_1,&uStack_208,3,aiStack_1f4 + 1,auStack_210[0],aiStack_1f4 + 1,auStack_210
                   );
      iVar5 = iVar5 + 2;
      iVar4 = iVar4 + 0x20;
    } while (iVar5 < (int)param_5);
  }
  uVar3 = (longlong)((int)param_5 >> 1) + (ulonglong)((int)param_5 < 0 && (param_5 & 1) != 0);
  if (0 < (int)uVar3) {
    fn_82F69148(param_3 + 4,aiStack_1f4 + 2,(uVar3 & 0x3fffffff) << 2);
  }
  iVar5 = 3;
  aiStack_1f4[1] = 0x8000000;
  aiStack_1f4[3] = 0x8000000;
  auStack_210[0] = 3;
  aiStack_1f4[2] = *(int *)(&lbl_820F9040 + (uint)*(byte *)(param_2 + 1) * 4) >> 3;
  if (3 < (int)param_5) {
    iVar4 = 0x30;
    do {
      uStack_204 = *(undefined4 *)(&lbl_820F9000 + ((uint)*(byte *)(iVar5 + param_2) + iVar4) * 4);
      fn_82C41CA0(param_1,&uStack_208,3,aiStack_1f4 + 1,auStack_210[0],aiStack_1f4 + 1,auStack_210
                   );
      iVar5 = iVar5 + 2;
      iVar4 = iVar4 + 0x20;
    } while (iVar5 < (int)param_5);
  }
  if (0 < (int)uVar3) {
    piVar2 = aiStack_1f4;
    do {
      piVar1 = piVar2 + 2;
      piVar2 = piVar2 + 1;
      param_4 = param_4 + 1;
      *param_4 = *piVar1 - *piVar2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

