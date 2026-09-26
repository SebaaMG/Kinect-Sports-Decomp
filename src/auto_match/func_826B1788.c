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
extern int fn_826944C8();
extern int fn_82694D70();
extern int fn_82696330();
extern int fn_826A8AA8();
extern int fn_826A98D8();
extern int fn_826AE0C0();
extern int fn_826B0F90();
extern int fn_826F5C10();
extern unsigned int iStack_7c;
extern unsigned int iStack_80;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


undefined8 fn_826B1788(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  char cVar5;
  int iVar3;
  int *piVar4;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  int *piVar9;
  int iStack_80;
  int iStack_7c;
  char *apcStack_78 [2];
  undefined1 auStack_70 [16];
  int *piStack_60;
  undefined1 *puStack_5c;
  int *piStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  if (*(int *)(*param_2 + 0x10) == 0) {
LAB_826b17b0:
    uVar2 = 0;
  }
  else {
    puStack_5c = auStack_70;
    iVar3 = *(int *)(*(int *)(param_1 + 0x78) + 8);
    piVar9 = (int *)(param_1 + 0x78);
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
    iStack_80 = *(int *)(*(int *)(param_1 + 0x78) + 8);
    *(int *)(iStack_80 + 8) = *(int *)(iStack_80 + 8) + 1;
    auStack_70[0] = 0;
    uStack_54 = 0;
    uStack_50 = 0;
    uStack_4c = 4;
    iStack_7c = iVar3;
    piStack_60 = param_2;
    piStack_58 = param_3;
    cVar5 = fn_826AE0C0(param_1,&piStack_60);
    if (cVar5 == '\0') {
      cVar5 = fn_826A8AA8(piVar9,param_2,&iStack_7c,&iStack_80);
      if (cVar5 != '\0') {
        iVar3 = fn_826A98D8(param_1,&iStack_7c,4);
        if (iVar3 != 0) {
          uVar2 = (**(code **)(*(int *)(iVar3 + 0x68) + 0x2c))
                            (iVar3 + 0x68,piVar9,&iStack_80,auStack_70);
          fn_82696330(auStack_70);
          lVar6 = (ulonglong)*(uint *)(iStack_80 + 8) - 1;
          *(int *)(iStack_80 + 8) = (int)lVar6;
          if (lVar6 == 0) {
            fn_826944C8(iStack_80);
          }
          lVar6 = (ulonglong)*(uint *)(iStack_7c + 8) - 1;
          *(int *)(iStack_7c + 8) = (int)lVar6;
          if (lVar6 != 0) {
            return uVar2;
          }
          fn_826944C8();
          return uVar2;
        }
LAB_826b1898:
        fn_82696330(auStack_70);
        lVar6 = (ulonglong)*(uint *)(iStack_80 + 8) - 1;
        *(int *)(iStack_80 + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8(iStack_80);
        }
        lVar6 = (ulonglong)*(uint *)(iStack_7c + 8) - 1;
        *(int *)(iStack_7c + 8) = (int)lVar6;
        if (lVar6 == 0) {
          fn_826944C8();
        }
        goto LAB_826b17b0;
      }
      if ((param_3 != (int *)0x0) && (uVar8 = (ulonglong)(uint)param_3[1] - 1, -1 < (longlong)uVar8)
         ) {
        lVar6 = (uVar8 & 0x1fffffff) << 3;
        do {
          piVar4 = (int *)((int)lVar6 + *param_3);
          iVar3 = *piVar4;
          if (piVar4[1] < 0) {
            if (iVar3 == 0) {
LAB_826b1988:
              piVar4 = (int *)0x0;
            }
            else {
              piVar4 = (int *)(iVar3 + 0x10);
            }
          }
          else {
            piVar4 = (int *)(iVar3 + 0x68);
            if (iVar3 == 0) goto LAB_826b1988;
          }
          if ((piVar4 != (int *)0x0) &&
             (cVar5 = (**(code **)(*piVar4 + 0x2c))(piVar4,piVar9,param_2,auStack_70), cVar5 != '\0'
             )) goto LAB_826b1b3c;
          uVar8 = uVar8 - 1;
          lVar6 = lVar6 + -8;
        } while (-1 < (longlong)uVar8);
      }
      iVar3 = fn_826B0F90(param_1,param_2);
      if ((iVar3 == 0) &&
         ((iVar3 = *(int *)(param_1 + 0x74), iVar3 == 0 ||
          (cVar5 = (**(code **)(*(int *)(iVar3 + 0x68) + 0x2c))
                             (iVar3 + 0x68,piVar9,param_2,auStack_70), cVar5 == '\0')))) {
        if (*(byte *)(param_1 + 0x7c) < 7) {
          if (*(int *)(*param_2 + 4) == 0) {
            fn_82694D70();
          }
          iVar3 = *piVar9;
          puVar7 = (undefined4 *)*param_2;
          iVar1 = puVar7[1];
          if (((*(int *)(*(int *)(iVar3 + 0xf4) + 4) != iVar1) &&
              (*(int *)(*(int *)(iVar3 + 0x100) + 4) != iVar1)) &&
             (*(int *)(*(int *)(iVar3 + 0xfc) + 4) != iVar1)) goto LAB_826b1a9c;
        }
        else {
          iVar3 = *piVar9;
          puVar7 = (undefined4 *)*param_2;
          if (((*(undefined4 **)(iVar3 + 0xf4) != puVar7) &&
              (*(undefined4 **)(iVar3 + 0x100) != puVar7)) &&
             (*(undefined4 **)(iVar3 + 0xfc) != puVar7)) {
LAB_826b1a9c:
            if (*(char *)*puVar7 == '_') {
              apcStack_78[0] = (char *)0x0;
              uVar2 = fn_826F5C10(*puVar7,apcStack_78,-(6 < *(byte *)(param_1 + 0x7c)) & 1);
              if ((((int)uVar2 != -1) && (*apcStack_78[0] == '\0')) &&
                 (iVar3 = (**(code **)(**(int **)(param_1 + 0x74) + 0x50))
                                    (*(int **)(param_1 + 0x74),uVar2), iVar3 != 0))
              goto LAB_826b1b3c;
            }
            iVar3 = *(int *)(*piVar9 + 0x2a0);
            if ((iVar3 == 0) ||
               (cVar5 = (**(code **)(*(int *)(iVar3 + 0x10) + 0x2c))
                                  (iVar3 + 0x10,piVar9,param_2,auStack_70), cVar5 == '\0'))
            goto LAB_826b1898;
          }
        }
      }
LAB_826b1b3c:
      fn_82696330(auStack_70);
      lVar6 = (ulonglong)*(uint *)(iStack_80 + 8) - 1;
      *(int *)(iStack_80 + 8) = (int)lVar6;
      if (lVar6 == 0) {
        fn_826944C8(iStack_80);
      }
      lVar6 = (ulonglong)*(uint *)(iStack_7c + 8) - 1;
      *(int *)(iStack_7c + 8) = (int)lVar6;
      iVar3 = iStack_7c;
    }
    else {
      fn_82696330(auStack_70);
      lVar6 = (ulonglong)*(uint *)(iStack_80 + 8) - 1;
      *(int *)(iStack_80 + 8) = (int)lVar6;
      if (lVar6 == 0) {
        fn_826944C8(iStack_80);
      }
      lVar6 = (ulonglong)*(uint *)(iVar3 + 8) - 1;
      *(int *)(iVar3 + 8) = (int)lVar6;
    }
    if (lVar6 == 0) {
      fn_826944C8(iVar3);
    }
    uVar2 = 1;
  }
  return uVar2;
}

