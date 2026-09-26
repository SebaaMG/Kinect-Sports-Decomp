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
extern int fn_82880818();
extern int fn_828EA790();
extern unsigned int *lbl_83212A04;


ulonglong fn_82880C60(int *param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  char cVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  int *apiStack_50 [20];
  
  piVar6 = lbl_83212A04;
  uVar10 = 0xffffffffffffffff;
  piVar3 = (int *)*lbl_83212A04;
  piVar5 = piVar3;
  do {
    if (piVar5 == piVar6) {
LAB_82880d0c:
      if ((param_1 != (int *)0x0) && (iVar4 = *param_1, apiStack_50[0] = piVar3, iVar4 != 0)) {
        while (apiStack_50[0] != piVar6) {
          if (*(int *)(apiStack_50[0][4] + 0x28) == iVar4) {
            return (ulonglong)(uint)apiStack_50[0][3];
          }
          fn_828EA790(apiStack_50);
        }
      }
      return uVar10;
    }
    pbVar8 = (byte *)(piVar5[4] + 0x34);
    pbVar9 = param_2;
    do {
      bVar1 = *pbVar9;
      bVar2 = *pbVar8;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar8 = pbVar8 + 1;
    } while (pbVar9 != param_2 + 0x24);
    apiStack_50[0] = piVar5;
    if (((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) &&
       (cVar7 = fn_82880818(piVar5[4],param_3), cVar7 != '\0')) {
      uVar10 = (ulonglong)(uint)piVar5[3];
      if (piVar5[3] != 0xffffffff) {
        return uVar10;
      }
      goto LAB_82880d0c;
    }
    fn_828EA790(apiStack_50);
    piVar5 = apiStack_50[0];
  } while( true );
}

