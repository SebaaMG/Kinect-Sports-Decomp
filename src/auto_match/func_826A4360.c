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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82696330();
extern int fn_82696AD0();
extern int fn_826A3F08();


longlong fn_826A4360(int param_1,undefined1 *param_2,undefined1 *param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [112];
  
  auStack_70[0] = 0;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = auStack_70;
  }
  if (param_3 == (undefined1 *)0x0) {
    param_3 = auStack_70;
  }
  uVar4 = 0;
  lVar5 = (ulonglong)*(uint *)(param_1 + 8) + 0x78;
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar6 = 0;
    lVar7 = 0;
    do {
      piVar1 = (int *)fn_82696AD0(param_2,*(undefined4 *)(param_1 + 8));
      piVar2 = (int *)fn_82696AD0(param_3,*(undefined4 *)(param_1 + 8));
      if ((piVar1 != (int *)0x0) && (piVar2 != (int *)0x0)) {
        auStack_80[0] = 0;
        auStack_90[0] = 0;
        lVar8 = (ulonglong)**(uint **)(param_1 + 4) + lVar7;
        cVar3 = (**(code **)(*piVar1 + 0x2c))(piVar1,lVar5,lVar8,auStack_80);
        if (cVar3 != '\0') {
          cVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,lVar5,lVar8,auStack_90);
          if (cVar3 != '\0') {
            lVar8 = fn_826A3F08((ulonglong)*(uint *)(param_1 + 0x10) + lVar6,auStack_80,auStack_90
                                 );
            if (lVar8 != 0) {
              fn_82696330(auStack_90);
              fn_82696330(auStack_80);
              goto LAB_826a44a8;
            }
          }
        }
        fn_82696330(auStack_90);
        fn_82696330(auStack_80);
      }
      uVar4 = uVar4 + 1;
      lVar7 = lVar7 + 4;
      lVar6 = lVar6 + 0x1c;
    } while (uVar4 < *(uint *)(param_1 + 0x14));
  }
  lVar8 = 0;
LAB_826a44a8:
  fn_82696330(auStack_70);
  return lVar8;
}

