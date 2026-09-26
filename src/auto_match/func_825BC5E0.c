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
extern unsigned int lbl_821CAB38;
extern unsigned int lbl_821CC160;


void fn_825BC5E0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,longlong param_9,
                  int param_10)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  uVar3 = (uint)*(ushort *)(param_5 + 0xc);
  if (uVar3 != 0) {
    dVar7 = (double)lbl_821CC160;
    do {
      if (param_10 == 0) {
        dVar6 = (double)*(float *)(param_5 + 8);
        dVar5 = (double)*(float *)(param_5 + 4);
        iVar4 = (int)param_9;
        if (dVar6 == dVar7) {
          if ((dVar5 < param_2) || ((param_1 <= dVar5 && (iVar4 == 0)))) goto LAB_825bc714;
LAB_825bc670:
          bVar2 = -(param_9 != 0) & 3;
        }
        else {
          if ((param_2 <= dVar5) && ((dVar5 < param_1 || (iVar4 != 0)))) goto LAB_825bc670;
          if ((dVar6 < param_2) || ((param_1 <= dVar6 && (iVar4 == 0)))) {
            if ((param_1 <= dVar5) || ((dVar6 <= param_1 && (iVar4 == 0)))) goto LAB_825bc714;
            bVar2 = (iVar4 != 0) + 2;
          }
          else {
            bVar2 = (-(param_9 != 0) & 2U) + 1;
          }
        }
        pcVar1 = *(code **)(uVar3 * 8 + -0x7ce3fc18);
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)(param_3,param_4,param_5,param_6,bVar2);
        }
      }
LAB_825bc714:
      param_5 = *(int *)(&lbl_821CAB38 + (uint)*(ushort *)(param_5 + 0xc) * 4) + param_5;
      uVar3 = (uint)*(ushort *)(param_5 + 0xc);
    } while (uVar3 != 0);
  }
  return;
}

