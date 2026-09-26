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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_a8;
extern int fn_82930918();
extern int fn_82AA66A8();
extern int fn_82AC6560();
extern int fn_82AD20C0();
extern int fn_82B455A8();
extern int fn_82B455D0();
extern int fn_82B80EF8();
extern int fn_82B8EB40();
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


undefined8 fn_82B1A198(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  double dVar9;
  uint uStack_b0;
  uint uStack_ac;
  uint auStack_a8 [2];
  undefined4 auStack_a0 [40];
  
  piVar2 = (int *)fn_82B455A8(param_1,*(undefined4 *)(*param_3 + 0x70));
  iVar3 = (**(code **)(*piVar2 + 4))();
  if (iVar3 != 0) {
    param_3 = param_3 + 1;
    iVar6 = iVar3;
    do {
      iVar4 = fn_82B455A8(param_1,*(undefined4 *)(iVar6 + 8));
      if ((*(int *)(iVar4 + 0xc) != 0) && (*(int *)(*(int *)(iVar4 + 0xc) + 4) != 3)) {
        param_3 = param_3 + 1;
        puVar1 = (uint *)*param_3;
        uStack_b0 = puVar1[3];
        uStack_ac = *puVar1 & 0x1f;
        uVar7 = *puVar1 >> 5;
        if (((*(uint *)(uStack_b0 + 8) & 0x3f80) != 16000) &&
           (fn_82B8EB40(param_1,puVar1,&uStack_b0,auStack_a8,&uStack_ac),
           uVar7 = auStack_a8[0], (*(uint *)(uStack_b0 + 8) & 0x3f80) != 16000)) {
          return 0xdd8;
        }
        puVar5 = (undefined4 *)fn_82AC6560(param_1,0x30,0x11);
        fn_82930918(auStack_a0);
        *puVar5 = auStack_a0[0];
        dVar9 = (double)fn_82B80EF8(uStack_b0,uVar7 & 3,uStack_ac);
        puVar5[1] = 3;
        if (((~(ulonglong)*(uint *)(*(int *)(*(int *)(uStack_b0 & 0xfffff000) + 0x94) + 0x28) &
             0xffffffff) >> 0xe & 1) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (*(uint *)(uStack_b0 + 0x14) >> 2 & 0xff) >> ((uVar7 & 3) << 1) & 3;
        }
        if (uVar7 == 0) {
          *(double *)(puVar5 + 6) = (double)(float)dVar9;
          uVar8 = 5;
LAB_82b1a324:
          puVar5[4] = uVar8;
        }
        else {
          if (uVar7 != 1) {
            if (2 < uVar7) {
                    /* WARNING: Subroutine does not return */
              fn_82AA66A8(param_1,0x12c0);
            }
            uVar8 = 2;
            puVar5[6] = (int)(longlong)dVar9;
            goto LAB_82b1a324;
          }
          puVar5[4] = 3;
          puVar5[6] = (int)dVar9;
        }
        *(undefined4 **)(iVar4 + 0xc) = puVar5;
        fn_82AD20C0(param_2,puVar1,param_1);
      }
      iVar6 = fn_82B455D0(param_1,*(undefined4 *)(iVar6 + 0xc));
    } while (iVar6 != 0);
  }
  *param_4 = iVar3;
  return 0;
}

