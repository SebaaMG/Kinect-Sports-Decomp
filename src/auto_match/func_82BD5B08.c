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
extern unsigned int *auStack_80;
extern int fn_82BD3880();
extern int fn_82BD38E8();
extern int fn_82BD62B8();
extern int fn_82BD6F78();
extern unsigned int lbl_820E8684;
extern unsigned int uStack_84;


undefined8
fn_82BD5B08(int param_1,ulonglong param_2,int *param_3,undefined8 param_4,undefined4 *param_5,
             uint *param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uStack_84;
  undefined1 auStack_80 [128];
  
  uVar6 = 0xffffffff8007048f;
  iVar3 = fn_82BD3880();
  if (iVar3 != 1) {
    return 0xffffffff8007048f;
  }
  RtlEnterCriticalSection(param_1 + 0xf0);
  piVar8 = (int *)(param_1 + 0x50);
  uVar7 = 0;
  while (((iVar3 = *piVar8, iVar3 == 0 || (iVar4 = fn_82BD62B8(iVar3), iVar4 != 0x70000000))
         || (*(int *)(iVar3 + 0xc) == 0))) {
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 1;
    if (3 < uVar7) goto LAB_82bd5c50;
  }
  if ((param_5 == (undefined4 *)0x0) || (*param_6 == 0)) {
    uVar6 = 0;
    *param_6 = 0;
  }
  else {
    uVar6 = fn_82BD38E8(*(int *)(iVar3 + 0xc),auStack_80);
    if (1 < *param_6) {
      *param_6 = 1;
    }
    uVar7 = 0;
    if (*param_6 != 0) {
      puVar5 = &uStack_84;
      do {
        puVar2 = puVar5 + 1;
        uVar7 = uVar7 + 1;
        puVar5 = puVar5 + 2;
        uVar1 = *puVar5;
        *param_5 = *puVar2;
        param_5[1] = uVar1;
      } while (uVar7 < *param_6);
    }
  }
  if (-1 < (int)uVar6) {
    if (((param_2 & 0xffffffff) == 0) || (*param_3 == 0)) {
      *param_3 = 0;
    }
    else {
      uVar6 = fn_82BD6F78(iVar3,lbl_820E8684,param_2,param_3,param_4);
    }
  }
LAB_82bd5c50:
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return uVar6;
}

