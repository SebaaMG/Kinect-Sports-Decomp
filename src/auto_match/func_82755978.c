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
extern unsigned int *auStack_90;
extern int fn_8268B330();
extern int fn_8268B400();
extern int fn_826BD078();
extern int fn_827AED50();
extern int fn_827AF0A0();
extern int fn_827AF0F8();
extern int fn_827AF528();
extern unsigned int iStack_bc;
extern unsigned int uStack_c0;


undefined8 fn_82755978(undefined8 param_1,int *param_2,char param_3)

{
  uint uVar1;
  int iVar3;
  ulonglong uVar2;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int aiStack_d0 [4];
  uint uStack_c0;
  int iStack_bc;
  undefined1 auStack_90 [144];
  
  fn_8268B330();
  iVar7 = 0;
  uVar9 = 0;
  uVar5 = 0;
  aiStack_d0[0] = (param_2[3] & 0xfffffffcU) + 8;
  if (param_2[1] != 0) {
    iVar6 = 0;
    do {
      iVar3 = *(int *)(*(int *)(iVar6 + *param_2) + 0x154);
      if (iVar3 != 0) {
        fn_827AF528(auStack_90,iVar3,0,0xffffffffffffffff);
        while (cVar4 = fn_827AED50(auStack_90), cVar4 == '\0') {
          fn_827AF0A0(&uStack_c0,auStack_90);
          uStack_c0 = uStack_c0 + iVar7;
          uVar8 = iStack_bc + uStack_c0;
          if (uVar9 < uVar8) {
            for (; uVar1 = uVar9, uVar9 < uStack_c0; uVar9 = uVar9 + 1) {
              iVar3 = fn_826BD078(aiStack_d0);
              if (iVar3 == 10) {
                uVar9 = uVar9 - 1;
              }
            }
            for (; uVar9 = uVar8, uVar1 < uVar8; uVar1 = uVar1 + 1) {
              do {
                uVar2 = fn_826BD078(aiStack_d0);
                if (param_3 != '\0') {
                  if ((uVar2 & 0xffffffff) != 10) break;
                  fn_8268B400(param_1,10);
                }
              } while ((uVar2 & 0xffffffff) == 10);
              fn_8268B400(param_1,uVar2);
            }
          }
          fn_827AF0F8(auStack_90,0);
        }
        iVar7 = *(int *)(iVar6 + *param_2 + 4) + iVar7;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar5 < (uint)param_2[1]);
  }
  return param_1;
}

