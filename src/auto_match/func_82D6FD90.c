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
extern unsigned int lbl_8200133C;


void fn_82D6FD90(int *param_1,int *param_2)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  double dVar10;
  undefined4 in_register_000100d0;
  undefined4 in_register_000100d4;
  undefined4 in_register_000100d8;
  undefined4 in_vr13;
  
  iVar7 = 4;
  piVar2 = *(int **)*param_1;
  pbVar6 = (byte *)((int)piVar2 + *piVar2 + 0x10);
  dVar10 = (double)lbl_8200133C;
  pbVar8 = (byte *)(piVar2 + 4);
  do {
    bVar1 = *pbVar8;
    pbVar9 = pbVar8;
    if (bVar1 < 0xf) {
      iVar3 = *(int *)((uint)bVar1 * 4 + -0x7d29020c);
      switch(bVar1) {
      case 0:
        pbVar9 = pbVar8 + pbVar8[3];
        break;
      case 1:
        return;
      default:
        pbVar9 = pbVar8 + pbVar8[3];
        pcVar4 = *(code **)((pbVar8[1] + 0x49) * 0x50 + *param_2);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(pbVar8,pbVar8 + 0x10,param_2);
        }
        break;
      case 4:
      case 5:
      case 0xc:
      case 0xd:
        *(float *)(pbVar8 + 0xc) = (float)dVar10;
        puVar5 = (undefined4 *)((uint)(pbVar8 + iVar3 + 0x10) & 0xfffffff0);
        *puVar5 = in_register_000100d0;
        puVar5[1] = in_register_000100d4;
        puVar5[2] = in_register_000100d8;
        puVar5[3] = in_vr13;
        pbVar9 = pbVar8 + pbVar8[3];
        pcVar4 = *(code **)((pbVar8[1] + 0x49) * 0x50 + *param_2);
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(pbVar8,pbVar8 + 0x20,param_2);
        }
        break;
      case 7:
      case 8:
      case 9:
        break;
      }
    }
    pbVar8 = pbVar9;
    if (pbVar6 <= pbVar9) {
      piVar2 = *(int **)(iVar7 + *param_1);
      iVar7 = iVar7 + 4;
      pbVar8 = (byte *)(piVar2 + 4);
      pbVar6 = (byte *)((int)piVar2 + *piVar2 + 0x10);
    }
  } while( true );
}

