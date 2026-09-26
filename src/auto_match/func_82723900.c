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
extern int fn_8267BE38();
extern int fn_82681728();
extern int fn_82681838();
extern int fn_8268B330();
extern int fn_8268B508();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82697610();
extern int fn_8269A190();
extern int fn_827A16D8();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern U64 storeWordConditionalIndexed();


void fn_82723900(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar6;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar7;
  uint *puVar8;
  char in_RESERVE;
  byte bVar9;
  uint uStack_40;
  undefined4 uStack_3c;
  int aiStack_38 [14];
  
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar6 = (**(code **)(**(int **)(param_1 + 8) + 8))();
    if (iVar6 == 4) {
      iVar6 = *(int *)(param_1 + 8) + -0x68;
      if (*(int *)(param_1 + 8) == 0) {
        iVar6 = 0;
      }
      if (0 < *(int *)(param_1 + 0x1c)) {
        uVar1 = *(undefined4 *)(param_1 + 0x18);
        uVar4 = fn_826957D0(param_1,0);
        lVar5 = fn_82697610(uVar4,uVar1);
        if (lVar5 < 0) {
          puVar2 = *(undefined1 **)(param_1 + 4);
          fn_826959C8(puVar2);
          *puVar2 = 0;
        }
        else {
          uStack_3c = 0;
          lVar5 = fn_827A16D8(*(undefined4 *)(iVar6 + 0xa0),lVar5,&uStack_3c);
          if (lVar5 == 0) {
            fn_82681728(aiStack_38,
                              (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                              0xffffffff82196582);
            fn_82681838(*(undefined4 *)(param_1 + 4),aiStack_38);
            lVar5 = (ulonglong)*(uint *)(aiStack_38[0] + 8) - 1;
            *(int *)(aiStack_38[0] + 8) = (int)lVar5;
            if (lVar5 == 0) {
              fn_826944C8();
            }
          }
          else {
            fn_8268B330(&uStack_40);
            fn_8268B508(&uStack_40,lVar5,uStack_3c);
            fn_8269A190(aiStack_38,
                              (ulonglong)*(uint *)(*(int *)(param_1 + 0x18) + 0x78) + 0x254,
                              &uStack_40);
            fn_82681838(*(undefined4 *)(param_1 + 4),aiStack_38);
            lVar5 = (ulonglong)*(uint *)(aiStack_38[0] + 8) - 1;
            bVar9 = (lVar5 == 0) << 1;
            *(int *)(aiStack_38[0] + 8) = (int)lVar5;
            if (lVar5 == 0) {
              fn_826944C8();
            }
            lVar5 = ((ulonglong)uStack_40 & 0xfffffffc) + 4;
            do {
              puVar8 = (uint *)lVar5;
              uVar7 = (ulonglong)*puVar8;
              if (in_RESERVE != '\0') {
                uVar3 = storeWordConditionalIndexed(uVar7 - 1,0,lVar5);
                *puVar8 = uVar3;
                bVar9 = 2;
              }
            } while (!(bool)(bVar9 >> 1 & 1));
            if (uVar7 == 1) {
              fn_8267BE38();
            }
          }
        }
      }
    }
  }
  return;
}

