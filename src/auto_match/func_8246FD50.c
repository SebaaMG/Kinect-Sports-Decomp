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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_30;
extern int fn_82469C10();
extern int fn_82469CD8();
extern int fn_825200A8();
extern int fn_82837D98();


void fn_8246FD50(int param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 auStack_30 [12];
  
  if (((param_3 & 0xffffffff) != 0) && (iVar1 = *(int *)param_3, iVar1 != 0)) {
    lVar8 = param_2 * 0x14 + (ulonglong)*(uint *)(param_1 + 0x90);
    lVar6 = lVar8 + 0x10;
    iVar5 = fn_825200A8(param_3,lVar6);
    if (iVar5 == 0) {
      puVar4 = (undefined4 *)lVar8;
      puVar2 = (uint *)puVar4[1];
      uVar3 = *puVar2;
      while (uVar7 = (ulonglong)uVar3, uVar7 != ZEXT48(puVar2)) {
        iVar5 = fn_825200A8(uVar7 + 8,param_3);
        if (iVar5 != 0) {
          *(int *)lVar6 = iVar1;
          fn_82837D98(*(undefined4 *)(((uint *)uVar7)[3] + 0x14),0,auStack_30);
          *puVar4 = auStack_30[0];
          break;
        }
        puVar2 = (uint *)puVar4[1];
        uVar3 = *(uint *)uVar7;
      }
      iVar1 = *(int *)(param_1 + 0x310);
      if (iVar1 != 0) {
        if ((param_2 & 0xffffffff) == 0) {
          fn_82469C10(iVar1,**(undefined4 **)(param_1 + 0x90));
        }
        else {
          fn_82469CD8(iVar1,(*(undefined4 **)(param_1 + 0x90))[5]);
        }
      }
    }
  }
  return;
}

