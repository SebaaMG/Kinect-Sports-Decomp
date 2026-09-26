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
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern int fn_82A8D4F0();
extern int fn_82A8EB80();
extern unsigned int uStack_94;


undefined8
fn_82A8F020(int *param_1,int *param_2,int *param_3,longlong param_4,longlong param_5,
             longlong param_6,longlong param_7)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [4];
  undefined4 uStack_94;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  uVar5 = param_5 - 1;
  if (-1 < (longlong)uVar5) {
    lVar3 = (uVar5 & 0x3fffffff) * 4 + param_6;
    uVar4 = uVar5;
    do {
      if (*(int *)lVar3 < 0) {
        return 0;
      }
      if (*param_3 <= *(int *)lVar3) {
        return 0;
      }
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (longlong)uVar4);
  }
  puVar6 = (undefined1 *)*param_1;
  uStack_94 = 5;
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = auStack_98;
  }
  iVar1 = param_3[2];
  if (-1 < (int)uVar5) {
    do {
      uVar7 = *(int *)param_6 * iVar1 + 0x180;
      if (0 < iVar1) {
        cVar2 = (**(code **)(*param_2 + 4))(param_2);
        if (((cVar2 == '\0') ||
            (cVar2 = (**(code **)(*param_2 + 0xc))(param_2,(longlong)((int)uVar7 >> 3)),
            cVar2 == '\0')) ||
           (cVar2 = (**(code **)(*param_2 + 0x10))
                              (param_2,auStack_90,
                               (longlong)((int)(uVar7 + iVar1 + 7) >> 3) -
                               (longlong)((int)uVar7 >> 3),auStack_a0), cVar2 == '\0')) {
          return 0;
        }
      }
      fn_82A8D4F0(auStack_70,auStack_90,0x14);
      fn_82A8EB80(puVar6,param_3 + 1,auStack_70,uVar7 & 7,param_4);
      uVar5 = uVar5 - 1;
      param_4 = param_4 + param_7;
      param_6 = param_6 + 4;
    } while (-1 < (longlong)uVar5);
  }
  return 1;
}

