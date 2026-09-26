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
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82230360();
extern int fn_822EC698();
extern int fn_82536690();
extern int fn_8257A580();
extern int fn_8257A910();
extern int fn_8257A9F0();
extern int fn_8257AAC8();
extern int fn_8257AB78();
extern int fn_8265C9E0();
extern int fn_8265CAA0();
extern int fn_82F66570();


undefined8 fn_8257A660(int param_1,ulonglong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar6;
  ulonglong uVar3;
  int *piVar7;
  ulonglong uVar4;
  char *pcVar8;
  undefined8 uVar5;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 *apuStack_a0 [4];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [80];
  
  if ((param_2 & 0xffffffff) == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    iVar6 = fn_8257A580(param_2);
    uVar2 = 0;
    if (iVar6 != 0) {
      cVar1 = *(char *)param_2;
      if (cVar1 != ';') {
        if (cVar1 == '[') {
          param_2 = param_2 + 1;
          uVar3 = fn_82F66570(param_2,0x5d);
          if ((uVar3 == 0) || ((uVar3 & 0xffffffff) == (param_2 & 0xffffffff))) {
            uVar2 = 0xb;
          }
          else {
            *(undefined1 *)uVar3 = 0;
            piVar7 = (int *)fn_8265C9E0(0x40);
            if (piVar7 == (int *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              *piVar7 = param_1;
              fn_82230110(piVar7 + 1,param_2);
              piVar7[8] = 0;
              piVar7[9] = 0;
              piVar7[10] = 0;
              piVar7[0xc] = 0;
              piVar7[0xd] = 0;
              piVar7[0xe] = 0;
            }
            *(int **)(param_1 + 0x4c) = piVar7;
            fn_82536690(param_1,param_1 + 0x4c);
          }
        }
        else {
          fn_82230110(auStack_90,param_2);
          fn_822EC698(param_1 + 0x10,auStack_90);
          fn_82230300(auStack_90,1,0);
          if ((ulonglong)*(uint *)(param_1 + 0x4c) != 0) {
            apuStack_a0[0] = (undefined4 *)(*(int *)(param_1 + 0x14) + -0x1c);
            if (0xf < *(uint *)(*(int *)(param_1 + 0x14) + -8)) {
              apuStack_a0[0] = (undefined4 *)*apuStack_a0[0];
            }
            fn_8257A9F0((ulonglong)*(uint *)(param_1 + 0x4c) + 0x30,apuStack_a0);
          }
          uVar4 = fn_82F66570(param_2,0x3d);
          uVar3 = param_2;
          do {
            pcVar8 = (char *)uVar3;
            uVar3 = uVar3 + 1;
          } while (*pcVar8 != '\0');
          if ((((uVar4 & 0xffffffff) == 0) || ((longlong)(uVar4 - param_2) < 1)) ||
             (((int)uVar3 - (int)(char *)param_2) + -1 <= (int)(uVar4 - param_2))) {
            uVar4 = 0;
          }
          if ((uVar4 & 0xffffffff) != 0) {
            *(undefined1 *)uVar4 = 0;
            uVar3 = fn_8257A910(param_2);
            if (uVar4 + 1 == 0) {
              pcVar8 = (char *)0x0;
            }
            else {
              pcVar8 = (char *)fn_8257A910(uVar4 + 1);
            }
            if (((uVar3 & 0xffffffff) == 0) || (pcVar8 == (char *)0x0)) {
              uVar2 = 0xb;
            }
            else {
              fn_82230110(auStack_70,uVar3);
              uVar5 = fn_8257AAC8(param_1 + 0x20,auStack_70);
              pcVar9 = pcVar8;
              do {
                cVar1 = *pcVar9;
                pcVar9 = pcVar9 + 1;
              } while (cVar1 != '\0');
              fn_82230360(uVar5,pcVar8,pcVar9 + (-1 - (int)pcVar8));
              fn_82230300(auStack_70,1,0);
              if (*(int *)(param_1 + 0x4c) != 0) {
                fn_82230110(auStack_50,uVar3);
                fn_8257AB78(apuStack_a0,param_1 + 0x20,auStack_50);
                fn_82230300(auStack_50,1,0);
                puVar10 = apuStack_a0[0] + 2;
                if (0xf < (uint)apuStack_a0[0][7]) {
                  puVar10 = (undefined4 *)*puVar10;
                }
                apuStack_a0[0] = puVar10;
                fn_8257A9F0((ulonglong)*(uint *)(param_1 + 0x4c) + 0x20,apuStack_a0);
              }
            }
            if ((uVar3 & 0xffffffff) != 0) {
              fn_8265CAA0(uVar3);
            }
            if (pcVar8 != (char *)0x0) {
              fn_8265CAA0(pcVar8);
            }
          }
        }
      }
    }
  }
  return uVar2;
}

