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
#define CONCAT13(h,l) ((U32)((((U8)(h)) << 24) | ((U32)(l))))
extern int fn_8302FC98();
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


undefined8 fn_8302FD88(int param_1,int *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  byte bVar7;
  int *piVar8;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  
  uVar5 = 1;
  if ((param_2 != (int *)0x0) && (piVar8 = (int *)*param_2, piVar8 != (int *)param_2[1])) {
    bVar7 = (((U64)(uStack_48) >> 0) & 0xFF);
    do {
      iVar2 = *piVar8;
      for (puVar1 = *(undefined4 **)(param_1 + 0xe4); puVar1 != (undefined4 *)0x0;
          puVar1 = (undefined4 *)*puVar1) {
        if (puVar1[1] == iVar2) {
          if (puVar1 + 2 != (undefined4 *)0x0) {
            uStack_50 = puVar1[2];
            uStack_4c = puVar1[3];
            uStack_48 = ((((U64)(uStack_48)) & (~(((U64)0xFF) << 0))) | ((((U64)((byte)((uint)puVar1[4] >> 0x18))) & ((U64)0xFF)) << 0));
            uVar4 = puVar1[4];
            bVar7 = (((U64)(uStack_48) >> 0) & 0xFF);
            goto LAB_8302fe00;
          }
          break;
        }
      }
      uStack_4c = 0;
      uStack_50 = 0;
      uStack_48 = CONCAT13(bVar7,(((U64)(uStack_48) >> 8) & 0xFFFFFF)) & 0x7ffffff;
      uVar4 = uStack_48;
      bVar7 = bVar7 & 7;
LAB_8302fe00:
      uStack_48 = uVar4;
      if (((*(byte *)(param_1 + 0x3e) & 0x40) == 0) || ((bVar7 & 8) == 0)) {
LAB_8302fe90:
        uVar5 = fn_8302FC98(param_1,iVar2,&uStack_50,param_4);
        if ((int)uVar5 != 1) {
          return uVar5;
        }
      }
      else {
        bVar3 = false;
        if (param_3 != (undefined4 *)0x0) {
          for (piVar6 = (int *)*param_3; piVar6 != (int *)param_3[1]; piVar6 = piVar6 + 1) {
            if (*piVar6 == iVar2) {
              bVar3 = true;
              break;
            }
          }
        }
        if (!bVar3) goto LAB_8302fe90;
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != (int *)param_2[1]);
  }
  return uVar5;
}

