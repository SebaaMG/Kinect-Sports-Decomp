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
extern unsigned int *auStack_70;
extern unsigned int fStack_54;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822CD140();
extern int fn_8236D0D0();
extern int fn_824121C8();
extern int fn_824180B0();
extern int fn_8241CEB8();
extern int fn_825200A8();
extern int fn_82539560();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82411E50(int param_1)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  int iVar5;
  ulonglong uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  double dVar10;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [28];
  float fStack_54;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x28) + 900);
    for (uVar9 = *(uint *)(*(int *)(param_1 + 0x28) + 0x380); uVar9 < uVar1; uVar9 = uVar9 + 0xd0) {
      if (*(int *)(uVar9 + 0x94) != 0) {
        if ((*(uint *)(uVar9 + 0x9c) & 1) == 0) {
          piVar2 = *(int **)(*(int *)(uVar9 + 0x94) + 0x8c0);
          if (piVar2 == (int *)0x0) {
            uVar4 = 0xffffffff82196288;
          }
          else {
            uVar4 = (**(code **)(*piVar2 + 0x20))();
          }
          if ((uVar4 & 0xffffffff) != 0) {
            uVar7 = ZEXT48(*(uint **)(param_1 + 0x24));
            lVar8 = 0xcc0;
            uVar6 = (ulonglong)**(uint **)(param_1 + 0x24);
            do {
              iVar5 = fn_825200A8(uVar4,lVar8 + uVar6);
              if (iVar5 != 0) {
                bVar3 = true;
                goto LAB_82411f80;
              }
              lVar8 = lVar8 + 4;
            } while ((int)lVar8 < 0xce8);
            bVar3 = false;
LAB_82411f80:
            if (((bVar3) && (*(int *)(*(int *)uVar7 + 0x8b0) != 0)) &&
               ((double)*(float *)(*(int *)uVar7 + 0x88c) < (double)*(float *)(uVar9 + 0xa4))) {
              uStack_80 = 0;
              uStack_7c = 0;
              uStack_78 = 0;
              iVar5 = **(int **)(param_1 + 0x24);
              dVar10 = (double)fn_82539560((double)*(float *)(uVar9 + 0xa4),
                                            (double)*(float *)(iVar5 + 0x88c),
                                            (double)*(float *)(iVar5 + 0x890),
                                            (double)*(float *)(iVar5 + 0x894),
                                            (double)*(float *)(iVar5 + 0x898));
              fn_82230110(auStack_70,0xffffffff821b8218);
              fStack_54 = (float)dVar10;
              fn_8236D0D0(&uStack_80,auStack_70);
              fn_82230300(auStack_70,1,0);
              fn_824180B0(*(uint **)(param_1 + 0x24),
                                (ulonglong)**(uint **)(param_1 + 0x24) + 0x14a4,uVar9,&uStack_80);
              fn_822CD140(&uStack_80);
            }
          }
        }
        else if ((*(int *)(**(int **)(param_1 + 0x24) + 0x8ac) != 0) &&
                (*(float *)(**(int **)(param_1 + 0x24) + 0x86c) < *(float *)(uVar9 + 0xa4))) {
          fn_824121C8(param_1);
        }
      }
    }
  }
  else {
    iVar5 = fn_8241CEB8(*(undefined4 *)(param_1 + 0x24),param_1,2);
    if (iVar5 != 0) {
      fn_824121C8((double)*(float *)(iVar5 + 0x10),param_1);
    }
  }
  return;
}

