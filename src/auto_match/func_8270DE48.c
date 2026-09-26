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
extern unsigned int fStack_34;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_8268D1D0();
extern int fn_8270D7A0();
extern unsigned int uStack_30;
extern unsigned int uStack_38;


void fn_8270DE48(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  float fStack_40;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float afStack_2c [11];
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    lVar6 = 0;
    do {
      lVar4 = lVar6 + (ulonglong)*(uint *)(param_1 + 0x160);
      fStack_40 = *(float *)((int)lVar6 + *(uint *)(param_1 + 0x160));
      iVar1 = (int)lVar4;
      if (fStack_40 < *(float *)(iVar1 + 8)) {
        fStack_3c = *(float *)(iVar1 + 4);
        afStack_2c[0] = *(float *)(iVar1 + 0xc);
        if (fStack_3c < afStack_2c[0]) {
          uStack_38 = *(undefined4 *)(iVar1 + 8);
          fStack_34 = fStack_3c;
          uStack_30 = uStack_38;
          uVar3 = fn_8270D7A0(param_1,&fStack_40,&fStack_3c);
          uVar3 = fn_8270D7A0(uVar3,&uStack_38,&fStack_34);
          fn_8270D7A0(uVar3,&uStack_30,afStack_2c);
          pfVar2 = (float *)lVar4;
          fn_8268D1D0((double)*pfVar2,(double)pfVar2[1],(double)pfVar2[2],(double)pfVar2[3],
                            lVar4 + 0x10);
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while (uVar5 < *(uint *)(param_1 + 0x164));
  }
  return;
}

