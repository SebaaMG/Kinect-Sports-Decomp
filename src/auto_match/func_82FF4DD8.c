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
extern int fn_82A1E7D8();
extern int fn_82A1E810();
extern int fn_82FA5190();
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_831BC770;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82FF4DD8(int param_1,int *param_2,ushort *param_3)

{
  int iVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  
  piVar8 = (int *)*param_2;
  if (piVar8 != (int *)0x0) {
    uVar6 = 0;
    if (*param_3 != 0) {
      iVar7 = param_1 + 0x88;
      do {
        iVar1 = *piVar8;
        RtlEnterCriticalSection(iVar7);
        uVar5 = (ulonglong)*(uint *)(iVar1 + 0x50);
        uVar3 = uVar5 * 0x8421085 >> 0x20;
        uVar3 = ((uVar5 - uVar3 & 0xffffffff) >> 1) + uVar3 >> 4;
        for (puVar4 = *(undefined4 **)
                       ((int)(((uVar5 - ((uVar3 & 0x7ffffff) * 0x20 - uVar3)) + 2 & 0xffffffff) << 2
                             ) + param_1); puVar4 != (undefined4 *)0x0;
            puVar4 = (undefined4 *)*puVar4) {
          if ((uint)puVar4[2] == uVar5) {
            puVar4 = puVar4 + 4;
            goto LAB_82ff4e7c;
          }
        }
        puVar4 = (undefined4 *)0x0;
LAB_82ff4e7c:
        if (((puVar4[10] & 4) == 0) || (pcVar2 = (code *)puVar4[8], pcVar2 == (code *)0x0)) {
          RtlLeaveCriticalSection(iVar7);
        }
        else {
          uStack_70 = puVar4[9];
          uStack_6c = puVar4[3];
          uStack_64 = puVar4[2];
          iStack_60 = piVar8[2];
          iStack_5c = piVar8[3];
          iStack_58 = piVar8[4];
          uStack_68 = *(uint *)(iVar1 + 0x50);
          fn_82A1E7D8(*(undefined4 *)(param_1 + 0xa4));
          RtlLeaveCriticalSection(iVar7);
          (*pcVar2)(4,&uStack_70);
          fn_82A1E810(*(undefined4 *)(param_1 + 0xa4));
        }
        uVar6 = uVar6 + 1;
        piVar8 = piVar8 + 5;
      } while (uVar6 < *param_3);
    }
    fn_82FA5190(lbl_831BC770,*param_2);
    *param_2 = 0;
    *param_3 = 0;
  }
  return;
}

