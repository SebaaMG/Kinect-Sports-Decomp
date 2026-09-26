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
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82C08D70();
extern int fn_82C09238();
extern int fn_82C09348();
extern int fn_82C09700();


ulonglong fn_82C01ED8(int *param_1,ulonglong param_2,uint *param_3)

{
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar1;
  ulonglong uVar5;
  uint *puVar6;
  ulonglong uVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 auStack_68 [13];
  
  *param_3 = 0;
  uVar7 = 0;
  puVar2 = (undefined8 *)(**(code **)(*(int *)param_1[0xc] + 0x50))();
  iVar3 = (**(code **)(*param_1 + 0x74))(param_1);
  uVar5 = (ulonglong)(uint)param_1[0x87];
  puVar6 = (uint *)(param_1 + 0x87);
  if (uVar5 != 0) {
    if ((param_2 & 0xffffffff) < uVar5) {
      uVar5 = param_2;
    }
    uVar7 = fn_82C09238(param_1[0x82],(int)puVar2 + *param_3 + iVar3,uVar5,auStack_80,
                              auStack_68,auStack_78,2);
    *puVar6 = *puVar6;
    *param_3 = *param_3;
    uVar4 = (**(code **)(*param_1 + 0x74))(param_1);
    if (7 < uVar4) {
      *(undefined8 *)(param_1 + 0x20) = auStack_68[0];
      *puVar2 = auStack_68[0];
    }
  }
  while ((((int)uVar7 == 0 && ((param_2 & 0xffffffff) != 0)) && (param_1[0x88] == 0))) {
    do {
      if (*puVar6 != 0) goto LAB_82c0206c;
      if (param_1[0x80] == 0) {
        fn_82C09700(param_1[0x82],param_1[0x7f] & 0xffff);
      }
      else if (param_1[0x7d] == 5) {
        param_1[0x7d] = 1;
        fn_82C08D70(param_1[0x82]);
      }
      uVar7 = fn_82C09348(param_1[0x82],auStack_70,puVar6,0xffffffffffffffff);
    } while ((int)uVar7 == 0);
    if ((int)uVar7 == 0x21) {
      param_1[0x88] = 1;
    }
LAB_82c0206c:
    uVar5 = (ulonglong)*puVar6;
    if (uVar5 == 0) break;
    if ((param_2 & 0xffffffff) < uVar5) {
      uVar5 = param_2;
    }
    uVar7 = fn_82C09238(param_1[0x82],(int)puVar2 + *param_3 + iVar3,uVar5,auStack_80,
                              auStack_68,auStack_78,2);
    *puVar6 = *puVar6;
    *param_3 = *param_3;
    uVar4 = (**(code **)(*param_1 + 0x74))(param_1);
    if (7 < uVar4) {
      *(undefined8 *)(param_1 + 0x20) = auStack_68[0];
      *puVar2 = auStack_68[0];
    }
  }
  uVar5 = -(ulonglong)((-(ulonglong)(uVar7 != 0x21) & uVar7) != 0) & 0xffffffff8000ffff;
  if ((-1 < (int)uVar5) && (*param_3 != 0)) {
    iVar3 = *(int *)param_1[0xc];
    lVar1 = (**(code **)(*param_1 + 0x74))(param_1);
    (**(code **)(iVar3 + 0x48))(param_1[0xc],lVar1 + (ulonglong)*param_3);
  }
  return uVar5;
}

