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
extern int fn_825A1198();
extern int fn_8262E510();
extern int fn_82818440();
extern int fn_82F64988();
extern int fn_82F66F28();
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


undefined8
fn_825A1048(int *param_1,char *param_2,undefined2 *param_3,undefined8 param_4,int param_5)

{
  ushort uVar4;
  short *psVar2;
  undefined8 uVar1;
  int iVar3;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  
  uStack_54 = 0;
  uStack_50 = 0;
  iStack_60 = *(int *)(*param_1 + 0xc) + *param_1;
  iStack_5c = iStack_60 + 8;
  iStack_58 = (*(int *)(iStack_60 + 4) + 1) * 6 + iStack_5c;
  uVar4 = fn_82818440(param_2);
  iVar3 = 0;
  if (*(ushort *)(param_1 + 2) != 0) {
    puVar6 = (undefined4 *)param_1[1];
    do {
      if (uVar4 == *(ushort *)(puVar6 + 1)) {
        cVar8 = *param_2;
        cVar9 = *(char *)*puVar6;
        if (cVar8 == cVar9) {
          pcVar7 = param_2;
          do {
            pcVar7 = pcVar7 + 1;
            if (cVar8 == '\0') goto LAB_825a1124;
            cVar8 = *pcVar7;
            cVar9 = pcVar7[(int)*puVar6 - (int)param_2];
          } while (cVar8 == cVar9);
        }
        if (cVar8 == cVar9) {
LAB_825a1124:
          uVar4 = *(ushort *)(param_1[1] + iVar3 * 8 + 6);
          break;
        }
      }
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 2;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 2));
  }
  uVar5 = (uint)uVar4;
  psVar2 = (short *)fn_8262E510(&iStack_60);
  if ((*psVar2 == 0) || (uVar5 == 0xffffffff)) {
    uVar1 = 0;
    *param_3 = 0;
  }
  else {
    fn_82F64988(param_3,param_4,psVar2);
    if ((param_5 != 0) && (iVar3 = fn_825A1198(), iVar3 != 0)) {
      fn_82F66F28(param_3,param_4);
    }
    uVar1 = 1;
  }
  return uVar1;
}

