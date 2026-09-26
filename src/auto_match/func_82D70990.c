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
extern int fn_82D7C6F8();
extern unsigned int stack0x00000000;
extern unsigned int uStack_54c;


byte * fn_82D70990(undefined4 *param_1,byte *param_2,undefined8 param_3)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  bool bVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  undefined4 uStack_54c;
  
  uVar5 = ZEXT48(&stack0x00000000);
  iVar1 = *(int *)(param_1[4] + 0xc);
  uStack_54c = (undefined4)*(undefined8 *)(param_2 + 4);
  pcVar6 = (char *)(**(code **)(*(int *)(iVar1 + 0xc) + 4))
                             (uVar5 - 0x55f,iVar1 + 0xc,param_1[4],*param_1,param_1[1],param_1[3],
                              uStack_54c);
  if (*pcVar6 == '\0') {
    (**(code **)((uint)param_2[1] * 0x50 + *(int *)param_1[4] + 0x16b4))
              (param_2,param_3,param_1[5],param_1[6]);
  }
  else {
    pcVar2 = *(code **)((uint)param_2[1] * 0x50 + *(int *)param_1[4] + 0x16c8);
    if (pcVar2 != (code *)0x0) {
      (**(code **)(*(int *)param_1[3] + 0x14))((int *)param_1[3],uStack_54c,uVar5 - 0x500);
      lVar7 = uVar5 - 0x550;
      uVar3 = *param_1;
      if ((*param_2 & 8) != 0) {
        lVar7 = fn_82D7C6F8(uVar5 - 0x550,uVar5 - 0x540,uVar5 - 0x300,4,uVar5 - 0x560);
      }
      if (((*param_2 & 7) == 3) || (bVar4 = false, (*param_2 & 7) == 5)) {
        bVar4 = true;
      }
      if (!bVar4) {
        (*pcVar2)(param_2,param_3,uVar3,lVar7,param_1[4],param_1[5],param_1[6]);
        return param_2 + param_2[3];
      }
      (*pcVar2)(param_2,param_3,lVar7,uVar3,param_1[4],param_1[5],param_1[6]);
    }
    param_2 = param_2 + param_2[3];
  }
  return param_2;
}

