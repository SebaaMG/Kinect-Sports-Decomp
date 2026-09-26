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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern unsigned int *auStack_50;
extern unsigned int fStack_48;
extern int fn_82FFE0F0();
extern int fn_83016E90();
extern int fn_83017108();
extern int fn_830193C8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;


ulonglong fn_83017558(int param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  char cVar4;
  float *pfVar3;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  undefined1 auStack_50 [8];
  float fStack_48;
  undefined4 uStack_44;
  
  iVar5 = param_1 + 0x720;
  RtlEnterCriticalSection(iVar5);
  for (puVar1 = *(undefined4 **)(param_1 + 0x6e0); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    if ((ulonglong)(uint)puVar1[1] == (param_2 & 0xffffffff)) {
      cVar4 = fn_83017108(param_1,puVar1[2],param_3,&fStack_48,auStack_50);
      if (cVar4 == '\0') {
        pfVar3 = (float *)fn_82FFE0F0(param_1 + 0x61c,puVar1[2]);
        if (pfVar3 == (float *)0x0) {
          dVar7 = (double)lbl_821AAD20;
        }
        else {
          dVar7 = (double)*pfVar3;
        }
      }
      else {
        dVar7 = (double)fStack_48;
      }
      uVar6 = fn_830193C8(dVar7,puVar1 + 3);
      RtlLeaveCriticalSection(iVar5);
      return uVar6;
    }
  }
  uStack_44 = (undefined4)param_3;
  fStack_48 = (float)param_2;
  puVar2 = (uint *)fn_83016E90(param_1 + 0x310,CONCAT44(fStack_48,uStack_44),
                                param_2 + param_3 +
                                ((param_2 + param_3 & 0xffffffff) / 0xc1) * -0xc1);
  uVar6 = 0;
  if (puVar2 == (uint *)0x0) {
    if ((param_3 & 0xffffffff) == 0) goto LAB_83017614;
    uStack_44 = 0;
    puVar2 = (uint *)fn_83016E90(param_1 + 0x310,(ulonglong)(uint)fStack_48 << 0x20,
                                  param_2 + ((param_2 & 0xffffffff) / 0xc1) * -0xc1);
    if (puVar2 == (uint *)0x0) goto LAB_83017614;
  }
  uVar6 = (ulonglong)*puVar2;
LAB_83017614:
  RtlLeaveCriticalSection(iVar5);
  return uVar6;
}

