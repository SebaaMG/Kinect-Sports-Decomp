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
extern unsigned int *auStack_70;
extern int fn_82A34678();
extern int fn_82A346E0();
extern int fn_82A37838();
extern int fn_82A37C50();
extern unsigned int iStack_64;
extern unsigned int iStack_68;


void fn_82A34938(longlong param_1,int *param_2,int *param_3,int *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  int *piVar6;
  undefined1 auStack_70 [8];
  int iStack_68;
  int iStack_64;
  
  lVar5 = 0;
  do {
    piVar3 = (int *)fn_82A37838(param_1 + 0xc4,lVar5);
    if (piVar3 == (int *)0x0) {
      iVar4 = -1;
      *param_3 = 0;
LAB_82a34ab4:
      *param_4 = iVar4;
      return;
    }
    if (piVar3[4] != -1) {
LAB_82a34a50:
      if ((piVar3[3] == *param_2) && (piVar3[4] == param_2[1])) {
        if (((*piVar3 != 2) || (piVar3[0x13] == 0xffffffff)) ||
           ((uint)piVar3[0x14] <= (uint)piVar3[0x13])) goto LAB_82a34a94;
        *param_3 = piVar3[3];
        param_3[1] = piVar3[4];
        param_3[2] = piVar3[5];
        param_3[1] = piVar3[0x13] + 1;
      }
      else {
        *param_3 = piVar3[3];
        param_3[1] = piVar3[4];
        param_3[2] = piVar3[5];
      }
      iVar4 = piVar3[1];
      goto LAB_82a34ab4;
    }
    if (*piVar3 == 1) {
      if (*(int *)piVar3[6] == -1) {
        lVar1 = fn_82A37C50(param_1 + 0x8c,piVar3[3],auStack_70);
        if (lVar1 == 0) {
LAB_82a34a4c:
          piVar3[4] = 0;
          goto LAB_82a34a50;
        }
        uVar2 = fn_82A34678(param_1,lVar1,piVar3[5]);
        *(undefined8 *)piVar3[6] = uVar2;
      }
    }
    else {
      if (*piVar3 != 2) goto LAB_82a34a50;
      piVar6 = piVar3 + 0x13;
      if (piVar3[0x13] != -1) {
        lVar1 = fn_82A37C50(param_1 + 0x8c,piVar3[3],auStack_70);
        if (lVar1 == 0) {
          *piVar6 = -1;
          goto LAB_82a34a4c;
        }
        iStack_68 = piVar3[8];
        iStack_64 = piVar3[9];
        fn_82A346E0(param_1,lVar1,piVar3[5],*(undefined8 *)(piVar3 + 8),piVar3[10],piVar3 + 0x12,
                      piVar6,piVar3 + 0x14);
        if (*piVar6 != -1) {
          piVar3[4] = *piVar6;
          goto LAB_82a34a50;
        }
      }
    }
LAB_82a34a94:
    lVar5 = lVar5 + 1;
  } while( true );
}

