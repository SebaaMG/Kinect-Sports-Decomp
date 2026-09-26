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
extern unsigned int *auStack_30;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_8268B508();
extern int fn_8268B610();
extern int fn_826A70D0();
extern unsigned int lbl_831E7E64;
extern U64 storeWordConditionalIndexed();


undefined8 fn_826F8298(int *param_1,undefined8 param_2,uint *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint *puVar7;
  char in_RESERVE;
  byte bVar8;
  uint auStack_30 [12];
  
  uVar1 = (**(code **)(*param_1 + 0x18))();
  uVar2 = (uint)uVar1;
  *param_3 = uVar2;
  bVar8 = (uVar2 == 0) << 1;
  if (uVar2 == 0) {
    return uVar1;
  }
  fn_8268B330(auStack_30);
  puVar3 = (ushort *)fn_8267B890(lbl_831E7E64,*param_3,0);
  (**(code **)(*param_1 + 0x28))(param_1,puVar3,*param_3);
  uVar2 = *param_3;
  uVar5 = (ulonglong)uVar2;
  if (*puVar3 == 0xfffe) {
    lVar6 = (longlong)((int)uVar2 >> 1) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0) + -1;
    bVar8 = (lVar6 == 0) << 1;
    puVar4 = puVar3;
    if (0 < lVar6) {
      do {
        puVar4[1] = puVar4[1] << 8 | puVar4[1] >> 8;
        lVar6 = lVar6 + -1;
        puVar4 = puVar4 + 1;
      } while (lVar6 != 0);
    }
  }
  else {
    if (*puVar3 != 0xfeff) {
      puVar4 = puVar3;
      if ((((2 < (int)uVar2) && (*(char *)puVar3 == -0x11)) && ((char)*puVar3 == -0x45)) &&
         (*(char *)(puVar3 + 1) == -0x41)) {
        uVar5 = uVar5 - 3;
        puVar4 = (ushort *)((int)puVar3 + 3);
      }
      fn_8268B610(auStack_30,puVar4,uVar5);
      goto LAB_826f83cc;
    }
    lVar6 = (longlong)((int)uVar2 >> 1) + (ulonglong)((int)uVar2 < 0 && (uVar2 & 1) != 0) + -1;
    bVar8 = (lVar6 == 0) << 1;
    if (0 < lVar6) {
      do {
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
  }
  fn_8268B508(auStack_30,puVar3 + 1);
LAB_826f83cc:
  fn_826A70D0((uint *)(auStack_30[0] & 0xfffffffc) + 2,
                    *(uint *)(auStack_30[0] & 0xfffffffc) & 0x7fffffff,param_2);
  fn_8267BE38(puVar3);
  lVar6 = ((ulonglong)auStack_30[0] & 0xfffffffc) + 4;
  do {
    puVar7 = (uint *)lVar6;
    uVar5 = (ulonglong)*puVar7;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar5 - 1,0,lVar6);
      *puVar7 = uVar2;
      bVar8 = 2;
    }
  } while (!(bool)(bVar8 >> 1 & 1));
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return 1;
}

