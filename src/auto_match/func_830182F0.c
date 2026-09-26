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
extern int fn_82F69148();
extern int fn_82FA5190();
extern int fn_83019FD0();
extern unsigned int lbl_831BC768;


void fn_830182F0(int param_1,int param_2,int param_3,int param_4,char *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar5);
  puVar4 = *(undefined4 **)(param_1 + 0x6a0);
  puVar3 = (undefined4 *)0x0;
  do {
    puVar2 = puVar4;
    if (puVar2 == (undefined4 *)0x0) {
      if (param_5 != (char *)0x0) {
        *param_5 = '\0';
      }
LAB_8301836c:
      RtlLeaveCriticalSection(iVar5);
      return;
    }
    if ((puVar2[1] == param_2) && (puVar2[2] == param_3)) {
      if (param_5 != (char *)0x0) {
        *param_5 = '\x01' - (puVar2[5] == puVar2[6]);
      }
      piVar6 = (int *)puVar2[5];
      if (piVar6 != (int *)puVar2[6]) {
        while (*piVar6 != param_4) {
          piVar6 = piVar6 + 5;
          if (piVar6 == (int *)puVar2[6]) {
            RtlLeaveCriticalSection(iVar5);
            return;
          }
        }
        if (piVar6[2] != 0) {
          fn_82FA5190(lbl_831BC768);
          piVar6[2] = 0;
        }
        piVar6[3] = 0;
        piVar6[4] = 0;
        if (piVar6 < (int *)(puVar2[6] - 0x14)) {
          fn_82F69148(piVar6,piVar6 + 5,(((puVar2[6] - (int)piVar6) - 0x15U) / 0x14 + 1) * 0x14);
        }
        iVar1 = puVar2[6];
        puVar2[6] = iVar1 + -0x14;
        if (iVar1 + -0x14 == puVar2[5]) {
          if (param_5 != (char *)0x0) {
            *param_5 = '\0';
          }
          fn_83019FD0(puVar2 + 1);
          if (puVar2 == *(undefined4 **)(param_1 + 0x6a0)) {
            *(undefined4 *)(param_1 + 0x6a0) = *puVar2;
          }
          else {
            *puVar3 = *puVar2;
          }
          if (puVar2 == *(undefined4 **)(param_1 + 0x6a4)) {
            *(undefined4 **)(param_1 + 0x6a4) = puVar3;
          }
          *puVar2 = *(undefined4 *)(param_1 + 0x6a8);
          *(undefined4 **)(param_1 + 0x6a8) = puVar2;
          *(int *)(param_1 + 0x6b4) = *(int *)(param_1 + 0x6b4) + -1;
          RtlLeaveCriticalSection(iVar5);
          return;
        }
      }
      goto LAB_8301836c;
    }
    puVar4 = (undefined4 *)*puVar2;
    puVar3 = puVar2;
  } while( true );
}

