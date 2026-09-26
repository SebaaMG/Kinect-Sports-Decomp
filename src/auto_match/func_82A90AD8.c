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
extern int fn_82A86EA8();
extern int fn_82A8F350();
extern unsigned int lbl_8201DCB8;
extern unsigned int uStack_94;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;


undefined8
fn_82A90AD8(int *param_1,int *param_2,int *param_3,longlong param_4,longlong param_5,
             longlong param_6,longlong param_7)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_94;
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [112];
  
  uVar4 = param_5 - 1;
  if (-1 < (longlong)uVar4) {
    lVar2 = (uVar4 & 0x3fffffff) * 4 + param_6;
    uVar3 = uVar4;
    do {
      if (*(int *)lVar2 < 0) {
        return 0;
      }
      if (*param_3 <= *(int *)lVar2) {
        return 0;
      }
      uVar3 = uVar3 - 1;
      lVar2 = lVar2 + -4;
    } while (-1 < (longlong)uVar3);
  }
  puVar5 = (undefined4 *)*param_1;
  uStack_94 = lbl_8201DCB8;
  uStack_a0 = lbl_8201DCB8;
  uStack_9c = lbl_8201DCB8;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = &uStack_a0;
  }
  iVar6 = param_3[0xd] + param_3[0xc] + param_3[0xb] + param_3[0x1a] + param_3[0x19] + param_3[0x18]
  ;
  if (-1 < (int)uVar4) {
    do {
      uVar7 = *(int *)param_6 * iVar6 + 0x144;
      if (0 < iVar6) {
        cVar1 = (**(code **)(*param_2 + 4))(param_2);
        if (((cVar1 == '\0') ||
            (cVar1 = (**(code **)(*param_2 + 0xc))(param_2,(longlong)((int)uVar7 >> 3)),
            cVar1 == '\0')) ||
           (cVar1 = (**(code **)(*param_2 + 0x10))
                              (param_2,auStack_90,
                               (longlong)((int)(uVar7 + iVar6 + 7) >> 3) -
                               (longlong)((int)uVar7 >> 3),&uStack_a0), cVar1 == '\0')) {
          return 0;
        }
      }
      fn_82A86EA8(auStack_70,auStack_90,0x18);
      fn_82A8F350(puVar5,param_3 + 1,auStack_70,uVar7 & 7,param_4);
      uVar4 = uVar4 - 1;
      param_4 = param_4 + param_7;
      param_6 = param_6 + 4;
    } while (-1 < (longlong)uVar4);
  }
  return 1;
}

